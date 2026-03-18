/*
 * XREFs of TtmIsEnabled @ 0x140964038
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1404258AC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerSourceChangeCallback @ 0x1404D7ED0 (PopPowerSourceChangeCallback.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14074D510 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140760F48 (TtmiInitQueues.c)
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140963C14 (PopAdaptiveGetConsoleSessionState.c)
 *     PopProcessSessionDisplayStateChange @ 0x140963FE0 (PopProcessSessionDisplayStateChange.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x140A2CCF0 (PopControlMonitor.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x140A2CD80 (PopPowerRequestCallbackDisplayRequired.c)
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140AB71C8 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestInitialize @ 0x140C1CD8C (PopPowerRequestInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

char TtmIsEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( TtmpEnabled != 1 || PsIsCurrentThreadInServerSilo() )
    return 0;
  return v0;
}
