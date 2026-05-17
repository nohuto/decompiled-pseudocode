/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x18008CD44
 * Callers:
 *     RtlpHpVaMgrCtxQuery @ 0x180089DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x18008C698 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x18008D0C0 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D560 (RtlpHpVaMgrCtxCommit.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x18011D928 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18008CDA0 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
