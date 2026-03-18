/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1405124D0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiCachedPagesMakeHot @ 0x1406F5980 (MiCachedPagesMakeHot.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *PoolMm; // rax

  while ( LOWORD(stru_140E348F0.Alignment) < 0x40u )
  {
    PoolMm = (struct _SLIST_ENTRY *)ExAllocatePoolMm(
                                      64LL,
                                      0x90uLL,
                                      1816685901,
                                      KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
    {
      _InterlockedExchange(&dword_140E34900, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_140E348F0, PoolMm);
  }
}
