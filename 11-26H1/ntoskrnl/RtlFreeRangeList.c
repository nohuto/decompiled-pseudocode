/*
 * XREFs of RtlFreeRangeList @ 0x140AE4E90
 * Callers:
 *     ArbBootAllocation @ 0x140787FC0 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1407886B0 (ArbCommitAllocation.c)
 *     ArbInitializeRangeList @ 0x140788DC0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x140789170 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140789690 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140789850 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140789A90 (ArbStartArbiter.c)
 *     ArbTestAllocation @ 0x140789AE0 (ArbTestAllocation.c)
 *     RtlMergeRangeLists @ 0x140800700 (RtlMergeRangeLists.c)
 *     RtlCopyRangeList @ 0x140AE4CD0 (RtlCopyRangeList.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140AE4F08 (RtlpDeleteRangeListEntry.c)
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
