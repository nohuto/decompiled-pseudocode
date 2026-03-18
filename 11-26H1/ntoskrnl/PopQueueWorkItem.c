/*
 * XREFs of PopQueueWorkItem @ 0x1404CEE60
 * Callers:
 *     PopThermalSxExit @ 0x140435AC4 (PopThermalSxExit.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1404A61E0 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404EF380 (PopPowerRequestUnrevokeRequests.c)
 *     PopDripsWatchdogTimerCallback @ 0x1404F7BC0 (PopDripsWatchdogTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x1404FCFE0 (PopNetEvaluationTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140504F4C (PopUpdatePowerButtonHoldState.c)
 *     PopPowerRequestDebounceTimerCallback @ 0x140601330 (PopPowerRequestDebounceTimerCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutCallback @ 0x140601360 (PopPowerRequestExecutionRequiredTimeoutCallback.c)
 *     PpmPerfTelemetryCallback @ 0x140606CE0 (PpmPerfTelemetryCallback.c)
 *     PopUserShutdownCalloutDelayTimerCallback @ 0x140607A70 (PopUserShutdownCalloutDelayTimerCallback.c)
 *     PopThermalCsExit @ 0x140607B18 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x140607C60 (PopThermalTelemetryCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140607EB0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopKsrCallback @ 0x140607EE0 (PopKsrCallback.c)
 *     PopNetRefreshTimerCallback @ 0x14060CCD0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x14060CD00 (PopPowerButtonTimerCallback.c)
 *     PopAdaptiveStandbyPolicyTimerCallback @ 0x140610F10 (PopAdaptiveStandbyPolicyTimerCallback.c)
 *     PopNetSetConnectivityConstraint @ 0x14077A360 (PopNetSetConnectivityConstraint.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DA8C0 (PopNetResiliencyPhaseStateChanged.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A37138 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopLidSwitchChangeCallback @ 0x140ABC720 (PopLidSwitchChangeCallback.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC5068 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopNotifyWin32kRequestStatus @ 0x140AEB8E8 (PopNotifyWin32kRequestStatus.c)
 *     PopNetClearConnectivityConstraint @ 0x140B66B94 (PopNetClearConnectivityConstraint.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
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
