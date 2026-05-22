/*
 * XREFs of ??_EShellHandwritingProcessor@@UEAAPEAXI@Z @ 0x1801B38B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1801B3878 (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 */

ShellHandwritingProcessor *__fastcall ShellHandwritingProcessor::`vector deleting destructor'(
        ShellHandwritingProcessor *this,
        char a2)
{
  ShellHandwritingProcessor::~ShellHandwritingProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
