/*
 * XREFs of ??_GVirtualDesktopAnimationSyncNotificationInstance@@UEAAPEAXI@Z @ 0x180559A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ @ 0x180559854 (--1VirtualDesktopAnimationSyncNotificationInstance@@UEAA@XZ.c)
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
