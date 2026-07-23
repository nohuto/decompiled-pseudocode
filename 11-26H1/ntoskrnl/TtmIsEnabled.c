/*
 * XREFs of TtmIsEnabled @ 0x1409FA8A4
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1404F6940 (PopPowerSourceChangeCallback.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D9C70 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x1407F29C8 (TtmiInitQueues.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x1409F5820 (PopControlMonitor.c)
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409F99F8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409FA84C (PopProcessSessionDisplayStateChange.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABE670 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140B67154 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[76] != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
