/*
 * XREFs of ??_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z @ 0x180559AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ @ 0x18055989C (--1VirtualDesktopAnimationSyncNotifications@@UEAA@XZ.c)
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
