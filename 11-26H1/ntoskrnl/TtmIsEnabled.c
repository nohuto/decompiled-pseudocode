/*
 * XREFs of TtmIsEnabled @ 0x140A3EE84
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x140436B4C (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1404FD400 (PopPowerSourceChangeCallback.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D6B00 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x1407ECE68 (TtmiInitQueues.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140A39C20 (PopControlMonitor.c)
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x140A3EE2C (PopProcessSessionDisplayStateChange.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABC850 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140B640B4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestInitialize @ 0x140CD0850 (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[76] != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
