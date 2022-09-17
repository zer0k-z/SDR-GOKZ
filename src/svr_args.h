#pragma once

class CommandLine
{
public:
    void Init();
    void Destroy();

    ~CommandLine() { Destroy(); }

    int ArgC() const { return _argc; }
    const char* const* ArgV() const { return _argv; }
    const char* Arg(int index) const { return ArgV()[index]; }
    const char* operator[] (int index) const { return Arg(index); }

    const char* FindArg(const char* name) const;

private:
    char** _argv;
    int _argc;
};
