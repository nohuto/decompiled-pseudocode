/*
 * XREFs of KiScheduleSoftParkElectionIfNecessary @ 0x1402BDF30
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x1402BF0FC (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
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
      v2 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                        + 64 * (unsigned __int64)*(unsigned __int16 *)(a1 + 710)
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
