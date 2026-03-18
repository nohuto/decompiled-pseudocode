/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14038364C
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140387C88 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x140388380 (CcAsyncReadWorker.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140389D20 (CcQuickLazyWriteScanForVolume.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404BB630 (CcAsyncLazywriteWorkerMulti.c)
 *     CcCompleteAsyncReadWorker @ 0x1404BEB80 (CcCompleteAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1404EA200 (CcSerializeWithLazyWriter.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B37E4 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     CcDereferencePartition @ 0x1403843F0 (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
