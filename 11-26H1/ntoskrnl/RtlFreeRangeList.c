/*
 * XREFs of RtlFreeRangeList @ 0x140AE2C50
 * Callers:
 *     ArbBootAllocation @ 0x14078AAF0 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x14078B1E0 (ArbCommitAllocation.c)
 *     ArbInitializeRangeList @ 0x14078B8F0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x14078BCA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14078C1C0 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x14078C380 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x14078C5C0 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x14078C610 (ArbTestAllocation.c)
 *     RtlMergeRangeLists @ 0x1408061A0 (RtlMergeRangeLists.c)
 *     RtlCopyRangeList @ 0x140AE2A90 (RtlCopyRangeList.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140AE2CC8 (RtlpDeleteRangeListEntry.c)
 */

__int64 *__fastcall RtlFreeRangeList(__int64 **a1)
{
  __int64 *result; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 **v6; // r8

  result = *a1;
  a1[2] = 0LL;
  v3 = result - 5;
  v4 = *result - 40;
  if ( a1 != (__int64 **)result )
  {
    v5 = *result;
    do
    {
      if ( *(__int64 **)(v5 + 8) != result || (v6 = (__int64 **)v3[6], *v6 != result) )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      RtlpDeleteRangeListEntry(v3);
      result = (__int64 *)(v4 + 40);
      v3 = (__int64 *)v4;
      v5 = *(_QWORD *)(v4 + 40);
      v4 = v5 - 40;
    }
    while ( a1 != (__int64 **)result );
  }
  return result;
}
