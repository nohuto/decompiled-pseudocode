/*
 * XREFs of CcDereferencePartition @ 0x1403843F0
 * Callers:
 *     CcIsThereDirtyData @ 0x140257E50 (CcIsThereDirtyData.c)
 *     CcForEachPartition @ 0x140258154 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x140258290 (CcGetDirtyPages.c)
 *     CcCoalescingCallBack @ 0x140258590 (CcCoalescingCallBack.c)
 *     CcFreeWorkQueueEntry @ 0x14038364C (CcFreeWorkQueueEntry.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x140389F20 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B0D70 (CcQueueLazyWriteScanThread.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
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
