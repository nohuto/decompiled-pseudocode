/*
 * XREFs of SSHSupportIsPlatformAoAc @ 0x1404C3180
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x1407CFA80 (PopLidSwitchReliabilityUpdateCallback.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopUsb4DisplayPresenceUpdatedWorker @ 0x1407DA3D0 (PopUsb4DisplayPresenceUpdatedWorker.c)
 *     PopWnfInSupCallback @ 0x1407DA670 (PopWnfInSupCallback.c)
 *     PopPdcRegister @ 0x1407DF940 (PopPdcRegister.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407E4A18 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PopSqmBatteryUpdate @ 0x1409C1F4C (PopSqmBatteryUpdate.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopValidatePowerSettingData @ 0x1409FA478 (PopValidatePowerSettingData.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140ADB1A0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopGenericEventHandler @ 0x140AF2C50 (PopGenericEventHandler.c)
 *     PopS0LowPowerIdleInfo @ 0x140AFBEE0 (PopS0LowPowerIdleInfo.c)
 *     PopConnectedStandbySettingCallback @ 0x140B22110 (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 *     PopSystemIdleEventHandler @ 0x140B3AB80 (PopSystemIdleEventHandler.c)
 *     PopDiagTraceCsEnterReason @ 0x140B3B52C (PopDiagTraceCsEnterReason.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140B40DB0 (PopExternalMonitorUpdatedWorker.c)
 *     PopNotifyLidStateChange @ 0x140B53DF8 (PopNotifyLidStateChange.c)
 *     PopDiagTraceCsExitReason @ 0x140B5BB78 (PopDiagTraceCsExitReason.c)
 *     PopSmartSuspendValidatePredictions @ 0x140B65EDC (PopSmartSuspendValidatePredictions.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B76320 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int8 SSHSupportIsPlatformAoAc()
{
  return *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] != 0 ? stru_140E67200.WaitBlockFill6[80] : 0;
}
