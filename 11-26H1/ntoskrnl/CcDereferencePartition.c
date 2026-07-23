/*
 * XREFs of CcDereferencePartition @ 0x1403861A0
 * Callers:
 *     CcIsThereDirtyData @ 0x140259630 (CcIsThereDirtyData.c)
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x140259A70 (CcGetDirtyPages.c)
 *     CcCoalescingCallBack @ 0x140259D70 (CcCoalescingCallBack.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x14038BCD0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1328), 0, 0);
  }
  return v2;
}
