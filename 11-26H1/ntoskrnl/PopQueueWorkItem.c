/*
 * XREFs of PopQueueWorkItem @ 0x1404C8890
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14049F870 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404E8960 (PopPowerRequestUnrevokeRequests.c)
 *     PopDripsWatchdogTimerCallback @ 0x1404F11D0 (PopDripsWatchdogTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1404F6520 (PopNetEvaluationTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404FE890 (PopUpdatePowerButtonHoldState.c)
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x140603DE0 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140603E10 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PpmPerfTelemetryCallback @ 0x1406097E0 (PpmPerfTelemetryCallback.c)
 *     PopUserShutdownCalloutDelayTimerCallback @ 0x14060A5D0 (PopUserShutdownCalloutDelayTimerCallback.c)
 *     PopThermalCsExit @ 0x14060A6D4 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14060A810 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14060AA60 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x14060AA90 (PopKsrCallback.c)
 *     PopNetRefreshTimerCallback @ 0x14060FDE0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x14060FE10 (PopPowerButtonTimerCallback.c)
 *     PopAdaptiveStandbyPolicyTimerCallback @ 0x140614180 (PopAdaptiveStandbyPolicyTimerCallback.c)
 *     PopNetSetConnectivityConstraint @ 0x14077D290 (PopNetSetConnectivityConstraint.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopWnfUsb4DisplayPresenceCallback @ 0x1407DA420 (PopWnfUsb4DisplayPresenceCallback.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DE7B0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopUpdateExternalDisplayStateV1 @ 0x1407E2648 (PopUpdateExternalDisplayStateV1.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopLidSwitchChangeCallback @ 0x140ABE540 (PopLidSwitchChangeCallback.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC6CD8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopNotifyWin32kRequestStatus @ 0x140AEE7F4 (PopNotifyWin32kRequestStatus.c)
 *     PopNetClearConnectivityConstraint @ 0x140B69B20 (PopNetClearConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x140B777F0 (PopUpdateExternalDisplayState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
