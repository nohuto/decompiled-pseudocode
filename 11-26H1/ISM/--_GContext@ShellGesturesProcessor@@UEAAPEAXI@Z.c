/*
 * XREFs of ??_GContext@ShellGesturesProcessor@@UEAAPEAXI@Z @ 0x180073CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x180073D2C (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ShellGesturesProcessor::Context *__fastcall ShellGesturesProcessor::Context::`scalar deleting destructor'(
        ShellGesturesProcessor::Context *this,
        char a2)
{
  ShellGesturesProcessor::Context::~Context(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}
