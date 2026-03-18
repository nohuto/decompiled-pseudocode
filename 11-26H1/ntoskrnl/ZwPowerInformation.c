/*
 * XREFs of ZwPowerInformation @ 0x140723FD0
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x14057FA2C (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x1406AE5C0 (DifZwPowerInformationWrapper.c)
 *     HaliAcpiMachineStateInit @ 0x1407854C0 (HaliAcpiMachineStateInit.c)
 *     PoGetLightestSystemStateForEject @ 0x1407C89C8 (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1408058F0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140805C30 (RtlRestoreSystemBootStatusDefaults.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140953D78 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A396D0 (PopArmIdlePhaseWatchdog.c)
 *     PopControlMonitor @ 0x140A39C20 (PopControlMonitor.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140A3EEB4 (PopDisarmIdlePhaseWatchdog.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140A3F7F4 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 *     RtlpGetSetBootStatusData @ 0x140ACBB20 (RtlpGetSetBootStatusData.c)
 *     RtlSetSystemBootStatus @ 0x140B0B080 (RtlSetSystemBootStatus.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140B1320C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     RtlpRecordBootStatusData @ 0x140B141E8 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140B1B7B4 (RtlpSystemBootStatusRequest.c)
 *     PopSendSessionInfo @ 0x140B46330 (PopSendSessionInfo.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140B46AD8 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140CD57F0 (PopCreateIdlePhaseWatchdog.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer);
}
