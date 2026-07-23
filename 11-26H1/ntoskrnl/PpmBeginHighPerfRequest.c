/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14049F800
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1407CB6F0 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x1409F4CB8 (PdcPoPerfOverride.c)
 *     PoInitializeBroadcast @ 0x140AC752C (PoInitializeBroadcast.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}
