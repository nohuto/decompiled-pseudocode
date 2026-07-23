/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x14050BF40
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *PoolMm; // rax

  while ( LOWORD(stru_140E34A70.Alignment) < 0x40u )
  {
    PoolMm = (_SLIST_ENTRY *)ExAllocatePoolMm(
                               64LL,
                               0x90uLL,
                               1816685901,
                               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
    {
      _InterlockedExchange(&dword_140E34A80, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_140E34A70, PoolMm);
  }
}
