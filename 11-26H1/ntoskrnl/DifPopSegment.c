/*
 * XREFs of DifPopSegment @ 0x140650C14
 * Callers:
 *     DifPushThreadContextData @ 0x14064E460 (DifPushThreadContextData.c)
 *     DifSetCallerContext @ 0x14064E5A0 (DifSetCallerContext.c)
 *     DifObjTrkAllocNode @ 0x14064EA20 (DifObjTrkAllocNode.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DifAllocSegments @ 0x140650A10 (DifAllocSegments.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

PSLIST_ENTRY __fastcall DifPopSegment(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v2; // rbx

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
  v2 = result;
  if ( result )
  {
    memset_0(result, 0, *(unsigned int *)(a1 + 40));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 48), 1u);
    if ( (unsigned int)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 48)) <= *(_DWORD *)(a1 + 88)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), 1, 0) )
    {
      if ( KeGetCurrentIrql() )
      {
        *(_OWORD *)(a1 + 56) = 0LL;
        *(_OWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 72) = DifAllocSegments;
        *(_QWORD *)(a1 + 80) = a1;
        *(_QWORD *)(a1 + 56) = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 56), SuperCriticalWorkQueue);
      }
      else
      {
        DifAllocSegments(a1);
      }
    }
    return v2;
  }
  return result;
}
