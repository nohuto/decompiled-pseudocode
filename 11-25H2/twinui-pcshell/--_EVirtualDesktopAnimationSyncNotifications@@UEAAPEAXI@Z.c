/*
 * XREFs of ??_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z @ 0x180535E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ @ 0x180535C2C (--1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ.c)
 */

VirtualDesktopAnimationSyncNotifications *__fastcall VirtualDesktopAnimationSyncNotifications::`vector deleting destructor'(
        VirtualDesktopAnimationSyncNotifications *this,
        char a2)
{
  VirtualDesktopAnimationSyncNotifications::~VirtualDesktopAnimationSyncNotifications(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
