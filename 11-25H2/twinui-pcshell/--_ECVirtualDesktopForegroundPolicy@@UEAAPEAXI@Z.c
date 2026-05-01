/*
 * XREFs of ??_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z @ 0x18052C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopForegroundPolicy@@UEAA@XZ @ 0x18052C104 (--1CVirtualDesktopForegroundPolicy@@UEAA@XZ.c)
 */

CVirtualDesktopForegroundPolicy *__fastcall CVirtualDesktopForegroundPolicy::`vector deleting destructor'(
        CVirtualDesktopForegroundPolicy *this,
        char a2)
{
  CVirtualDesktopForegroundPolicy::~CVirtualDesktopForegroundPolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
