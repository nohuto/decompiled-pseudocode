/*
 * XREFs of ??_ECVirtualDesktopHolographicViewTransitionNotification@@UEAAPEAXI@Z @ 0x180544A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopHolographicViewTransitionNotification@@UEAA@XZ @ 0x180544A34 (--1CVirtualDesktopHolographicViewTransitionNotification@@UEAA@XZ.c)
 */

CVirtualDesktopHolographicViewTransitionNotification *__fastcall CVirtualDesktopHolographicViewTransitionNotification::`vector deleting destructor'(
        CVirtualDesktopHolographicViewTransitionNotification *this,
        char a2)
{
  CVirtualDesktopHolographicViewTransitionNotification::~CVirtualDesktopHolographicViewTransitionNotification(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
