/*
 * XREFs of ??_ENPSMDesktopShellComponent@@UEAAPEAXI@Z @ 0x1805EB2D0
 * Callers:
 *     ??_ENPSMDesktopShellComponent@@WCI@EAAPEAXI@Z @ 0x1805EB2C0 (--_ENPSMDesktopShellComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1NPSMDesktopShellComponent@@UEAA@XZ @ 0x1800E1C48 (--1NPSMDesktopShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

NPSMDesktopShellComponent *__fastcall NPSMDesktopShellComponent::`vector deleting destructor'(
        NPSMDesktopShellComponent *this,
        char a2)
{
  NPSMDesktopShellComponent::~NPSMDesktopShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
