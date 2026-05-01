/*
 * XREFs of _anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___ @ 0x18049A5E4
 * Callers:
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::CurrentVirtualDesktopChanged @ 0x18049A8B0 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNotificationRegis.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyBegin @ 0x18049AED0 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_18049AED0.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyFailed @ 0x18049AEF0 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_18049AEF0.c)
 *     VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopDestroyed @ 0x18049AF10 (VirtualDesktopNotificationForwarderHelper__anonymous_namespace_--VirtualDesktopNoti_ea_18049AF10.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    a2(v4, a3, a4);
  return 0LL;
}
