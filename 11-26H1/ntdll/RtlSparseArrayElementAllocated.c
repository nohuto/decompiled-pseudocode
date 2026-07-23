/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x1800706A0
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x18006FAD4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x180070A20 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180070DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D310 (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x18011D6D8 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800706FC (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
