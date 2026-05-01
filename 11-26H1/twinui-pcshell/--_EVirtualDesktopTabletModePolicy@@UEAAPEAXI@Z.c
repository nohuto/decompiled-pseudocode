/*
 * XREFs of ??_EVirtualDesktopTabletModePolicy@@UEAAPEAXI@Z @ 0x180559140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopTabletModePolicy@@UEAA@XZ @ 0x1805590E0 (--1VirtualDesktopTabletModePolicy@@UEAA@XZ.c)
 */

VirtualDesktopTabletModePolicy *__fastcall VirtualDesktopTabletModePolicy::`vector deleting destructor'(
        VirtualDesktopTabletModePolicy *this,
        char a2)
{
  VirtualDesktopTabletModePolicy::~VirtualDesktopTabletModePolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
