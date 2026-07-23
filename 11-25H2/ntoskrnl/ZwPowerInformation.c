/*
 * XREFs of ZwPowerInformation @ 0x14069BD20
 * Callers:
 *     HalpSetShutdownResetHandler @ 0x140542454 (HalpSetShutdownResetHandler.c)
 *     DifZwPowerInformationWrapper @ 0x140637520 (DifZwPowerInformationWrapper.c)
 *     HaliAcpiMachineStateInit @ 0x1406F61C0 (HaliAcpiMachineStateInit.c)
 *     PoGetLightestSystemStateForEject @ 0x14073D134 (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140773A90 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140773DD0 (RtlRestoreSystemBootStatusDefaults.c)
 *     PdcPortOpenCommon @ 0x14077EC84 (PdcPortOpenCommon.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14091FBD4 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140962B30 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140964068 (PopDisarmIdlePhaseWatchdog.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A2BF70 (PopArmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 *     RtlSetSystemBootStatus @ 0x140A69F60 (RtlSetSystemBootStatus.c)
 *     RtlpSystemBootStatusRequest @ 0x140A72DB4 (RtlpSystemBootStatusRequest.c)
 *     RtlpRecordBootStatusData @ 0x140A75220 (RtlpRecordBootStatusData.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140A7BE9C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB44B8 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C21764 (PopCreateIdlePhaseWatchdog.c)
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
