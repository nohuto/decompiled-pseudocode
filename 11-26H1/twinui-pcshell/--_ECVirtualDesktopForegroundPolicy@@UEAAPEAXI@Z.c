/*
 * XREFs of ??_ECVirtualDesktopForegroundPolicy@@UEAAPEAXI@Z @ 0x18054F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopForegroundPolicy@@UEAA@XZ @ 0x18054F1D0 (--1CVirtualDesktopForegroundPolicy@@UEAA@XZ.c)
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
