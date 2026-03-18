/*
 * XREFs of SSHSupportIsPlatformAoAc @ 0x1404C9760
 * Callers:
 *     PopPdcRegister @ 0x14077B0D8 (PopPdcRegister.c)
 *     PopLidSwitchReliabilityUpdateCallback @ 0x1407CC9E0 (PopLidSwitchReliabilityUpdateCallback.c)
 *     NtSetThreadExecutionState @ 0x1407D2150 (NtSetThreadExecutionState.c)
 *     PopWnfInSupCallback @ 0x1407D72D0 (PopWnfInSupCallback.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     PopSqmBatteryUpdate @ 0x1409465DC (PopSqmBatteryUpdate.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopValidatePowerSettingData @ 0x140A3EA58 (PopValidatePowerSettingData.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140AC2DC0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopGenericEventHandler @ 0x140AF0080 (PopGenericEventHandler.c)
 *     PopS0LowPowerIdleInfo @ 0x140AF9A54 (PopS0LowPowerIdleInfo.c)
 *     PopConnectedStandbySettingCallback @ 0x140B1FCF0 (PopConnectedStandbySettingCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140B3018C (PopPdcCsDeviceNotification.c)
 *     PopSystemIdleEventHandler @ 0x140B38970 (PopSystemIdleEventHandler.c)
 *     PopDiagTraceCsEnterReason @ 0x140B3931C (PopDiagTraceCsEnterReason.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140B3ED80 (PopExternalMonitorUpdatedWorker.c)
 *     PopNotifyLidStateChange @ 0x140B51558 (PopNotifyLidStateChange.c)
 *     PopDiagTraceCsExitReason @ 0x140B58D58 (PopDiagTraceCsExitReason.c)
 *     PopSmartSuspendValidatePredictions @ 0x140B62E3C (PopSmartSuspendValidatePredictions.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140B71AF0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int8 SSHSupportIsPlatformAoAc()
{
  return *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] != 0 ? stru_140E66FF0.WaitBlockFill6[84] : 0;
}
