/*
 * XREFs of RtlCopyRangeList @ 0x140AE2A90
 * Callers:
 *     ArbBootAllocation @ 0x14078AAF0 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x14078BCA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14078C1C0 (ArbRetestAllocation.c)
 *     ArbTestAllocation @ 0x14078C610 (ArbTestAllocation.c)
 *     RtlMergeRangeLists @ 0x1408061A0 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x140AE2B30 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 */

__int64 __fastcall RtlCopyRangeList(__int64 a1, __int64 *a2)
{
  __int64 i; // rax
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  if ( *(_DWORD *)(a1 + 20) )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  for ( i = *a2; ; i = *v6 )
  {
    v5 = i - 40;
    v6 = (__int64 *)(v5 + 40);
    if ( a2 == (__int64 *)(v5 + 40) )
      return 0LL;
    v7 = RtlpCopyRangeListEntry(v5);
    if ( !v7 )
      break;
    v8 = *(_QWORD **)(a1 + 8);
    v9 = (_QWORD *)(v7 + 40);
    if ( *v8 != a1 )
      __fastfail(3u);
    *v9 = a1;
    v9[1] = v8;
    *v8 = v9;
    *(_QWORD *)(a1 + 8) = v9;
  }
  RtlFreeRangeList(a1);
  return 3221225626LL;
}
