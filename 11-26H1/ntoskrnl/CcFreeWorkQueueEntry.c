/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1403853FC
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14038BAD0 (CcQuickLazyWriteScanForVolume.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 *     CcCompleteAsyncReadWorker @ 0x1404B83D0 (CcCompleteAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1404E35B0 (CcSerializeWithLazyWriter.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B5FF4 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next = ListEntry[9].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    guard_dispatch_icall_no_overrides(ListEntry, ListEntry, CurrentPrcb);
  }
  result = CcDereferencePartition(v3);
  if ( Next )
  {
    result = _InterlockedDecrement64((volatile signed __int64 *)&Next->Next + 1);
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}
