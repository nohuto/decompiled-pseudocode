/*
 * XREFs of ??_GShellGesturesClientProxy@@UEAAPEAXI@Z @ 0x18006B580
 * Callers:
 *     <none>
 * Callees:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x18006B5BC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ShellGesturesClientProxy *__fastcall ShellGesturesClientProxy::`scalar deleting destructor'(
        ShellGesturesClientProxy *this,
        char a2)
{
  ShellGesturesClientProxy::~ShellGesturesClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
