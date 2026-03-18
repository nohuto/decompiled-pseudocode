/*
 * XREFs of DifPushSegment @ 0x14064D11C
 * Callers:
 *     DifClearCallerContext @ 0x14064A670 (DifClearCallerContext.c)
 *     DifPopThreadContextData @ 0x14064A7A0 (DifPopThreadContextData.c)
 *     DifPushThreadContextData @ 0x14064A880 (DifPushThreadContextData.c)
 *     DifSetCallerContext @ 0x14064A9C0 (DifSetCallerContext.c)
 *     DifObjTrkFreeNode @ 0x14064AE90 (DifObjTrkFreeNode.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

struct _SLIST_ENTRY *__fastcall DifPushSegment(__int64 a1, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *result; // rax

  result = a2;
  if ( a2 )
  {
    memset_0(a2, 0, *(unsigned int *)(a1 + 40));
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), a2);
    result = (struct _SLIST_ENTRY *)a1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  }
  return result;
}
