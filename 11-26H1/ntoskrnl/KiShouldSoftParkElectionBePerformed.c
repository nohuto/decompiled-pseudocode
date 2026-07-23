/*
 * XREFs of KiShouldSoftParkElectionBePerformed @ 0x14022BFC0
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14022BDF0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldSoftParkElectionBePerformed(__int64 a1)
{
  __int64 v1; // rcx

  if ( !KeSoftParkedQueueThreshold
    || *(_QWORD *)(a1 + 792) <= (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold )
  {
    return 0;
  }
  v1 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int16 *)(a1 + 710)].Flink
                                    + *(unsigned __int8 *)(a1 + 705))]
                 + 192);
  return (~*(_QWORD *)(v1 + 80) & *(_QWORD *)(v1 + 96)) != 0LL;
}
