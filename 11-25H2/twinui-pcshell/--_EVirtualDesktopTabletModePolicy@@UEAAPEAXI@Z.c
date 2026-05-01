/*
 * XREFs of ??_EVirtualDesktopTabletModePolicy@@UEAAPEAXI@Z @ 0x180535500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopTabletModePolicy@@UEAA@XZ @ 0x18053549C (--1VirtualDesktopTabletModePolicy@@UEAA@XZ.c)
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
