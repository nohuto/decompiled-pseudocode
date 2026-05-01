/*
 * XREFs of ??0IShellExperienceViewLifetime@Cortana@TwinUI@@QEAA@XZ @ 0x18029BAB0
 * Callers:
 *     ??0CApplicationFrameService@@QEAA@XZ @ 0x18029B988 (--0CApplicationFrameService@@QEAA@XZ.c)
 *     ??0?$VirtualDesktopNotificationForwarderHelper@V?$VirtualDesktopNotificationBaseHelper@UIVirtualDesktopNotification@@@@@@QEAA@XZ @ 0x1802CA2B4 (--0-$VirtualDesktopNotificationForwarderHelper@V-$VirtualDesktopNotificationBaseHelper@UIVirtual.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIFullScreenPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIFullScreenPositionerNotificationService@@UIFullScreenPositionerTestHandler@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180322978 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ChainInterfaces@UIFullScreen.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180369FAC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00VIShellExperienceViewLifetime@C.c)
 * Callees:
 *     <none>
 */

TwinUI::Cortana::IShellExperienceViewLifetime *__fastcall TwinUI::Cortana::IShellExperienceViewLifetime::IShellExperienceViewLifetime(
        TwinUI::Cortana::IShellExperienceViewLifetime *this)
{
  *(_QWORD *)this = &VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>::`vftable';
  return this;
}
