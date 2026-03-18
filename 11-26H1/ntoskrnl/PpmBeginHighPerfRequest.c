/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1404A6170
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407C8690 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x140A390F8 (PdcPoPerfOverride.c)
 *     PoInitializeBroadcast @ 0x140AC58BC (PoInitializeBroadcast.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( stru_140F10828.WaitBlock[2].WaitListEntry.Blink )
    return PopPowerRequestReferenceAcquire(stru_140F10828.WaitBlock[2].WaitListEntry.Blink);
  else
    return 3221225473LL;
}
