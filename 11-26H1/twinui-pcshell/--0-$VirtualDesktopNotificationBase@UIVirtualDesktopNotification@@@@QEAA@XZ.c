/*
 * XREFs of ??0?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ @ 0x180080B54
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800804BC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@Composab.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180080AB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$VirtualDesktopNotificationBase@UIVi.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180080B2C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00V-$VirtualDesktopNotificationBa.c)
 *     ??0?$producer@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@X@impl@winrt@@QEAA@XZ @ 0x18028DFC0 (--0-$producer@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V-$Vi.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopSoftLandingHandler@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804AB790 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@V-$VirtualDesktopNotificationB.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804B2F08 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNotificationBa.c)
 * Callees:
 *     ??0?$VirtualDesktopNotificationForwarderHelper@V?$VirtualDesktopNotificationBaseHelper@UIVirtualDesktopNotification@@@@@@QEAA@XZ @ 0x1802C1B30 (--0-$VirtualDesktopNotificationForwarderHelper@V-$VirtualDesktopNotificationBaseHelper@UIVirtual.c)
 */

_QWORD *VirtualDesktopNotificationBase<IVirtualDesktopNotification>::VirtualDesktopNotificationBase<IVirtualDesktopNotification>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>::VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>();
  result = v0;
  *v0 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  return result;
}
