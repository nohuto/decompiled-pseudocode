/*
 * XREFs of ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x180535DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x180535BE8 (--1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ.c)
 */

RTL_SRWLOCK **__fastcall VirtualDesktopAnimationSyncNotificationInstance::`scalar deleting destructor'(
        RTL_SRWLOCK **this,
        char a2)
{
  VirtualDesktopAnimationSyncNotificationInstance::~VirtualDesktopAnimationSyncNotificationInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
