/*
 * XREFs of DifPushSegment @ 0x140650CFC
 * Callers:
 *     DifClearCallerContext @ 0x14064E250 (DifClearCallerContext.c)
 *     DifPopThreadContextData @ 0x14064E380 (DifPopThreadContextData.c)
 *     DifPushThreadContextData @ 0x14064E460 (DifPushThreadContextData.c)
 *     DifSetCallerContext @ 0x14064E5A0 (DifSetCallerContext.c)
 *     DifObjTrkFreeNode @ 0x14064EA70 (DifObjTrkFreeNode.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_SLIST_ENTRY *__fastcall DifPushSegment(__int64 a1, _SLIST_ENTRY *a2)
{
  _SLIST_ENTRY *result; // rax

  result = a2;
  if ( a2 )
  {
    memset_0(a2, 0, *(unsigned int *)(a1 + 40));
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), a2);
    result = (_SLIST_ENTRY *)a1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  }
  return result;
}
