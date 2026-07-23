/*
 * XREFs of ZwPowerInformation @ 0x140728BA0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140581F4C (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1406B21A0 (DifZwPowerInformationWrapper.c)
 *     HaliAcpiMachineStateInit @ 0x140787FF0 (HaliAcpiMachineStateInit.c)
 *     PoGetLightestSystemStateForEject @ 0x1407CBA68 (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x14080B390 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x14080B6D0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x14096EBD8 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409CF6B8 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopArmIdlePhaseWatchdog @ 0x1409F52D8 (PopArmIdlePhaseWatchdog.c)
 *     PopControlMonitor @ 0x1409F5820 (PopControlMonitor.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409FA8D4 (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     RtlpGetSetBootStatusData @ 0x140ACDD60 (RtlpGetSetBootStatusData.c)
 *     RtlSetSystemBootStatus @ 0x140B0C7D0 (RtlSetSystemBootStatus.c)
 *     RtlpRecordBootStatusData @ 0x140B162E8 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140B1DA64 (RtlpSystemBootStatusRequest.c)
 *     PopSendSessionInfo @ 0x140B48360 (PopSendSessionInfo.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140B48B08 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140CDBB44 (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
