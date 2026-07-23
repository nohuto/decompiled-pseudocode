/*
 * XREFs of KiScheduleSoftParkElectionIfNecessary @ 0x140308BF0
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x140309DBC (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiScheduleSoftParkElectionIfNecessary(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = (unsigned int)KeSoftParkedQueueThreshold;
  if ( KeSoftParkedQueueThreshold )
  {
    if ( *(_QWORD *)(a1 + 792) > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold )
    {
      v2 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int16 *)(a1 + 710)].Flink
                                        + *(unsigned __int8 *)(a1 + 705))]
                     + 192);
      result = *(_QWORD *)(v2 + 96);
      if ( (~*(_QWORD *)(v2 + 80) & result) != 0 && !*(_BYTE *)(a1 + 788) )
      {
        *(_BYTE *)(a1 + 788) = 1;
        return KiInsertQueueDpc(a1 + 800, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  return result;
}
