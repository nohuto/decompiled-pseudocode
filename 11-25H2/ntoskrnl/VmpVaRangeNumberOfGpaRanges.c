/*
 * XREFs of VmpVaRangeNumberOfGpaRanges @ 0x14042BD5C
 * Callers:
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14048258C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404D0714 (VmpMergeMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaRangeNumberOfGpaRanges(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_QWORD *)(a1 + 40);
  result = 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  while ( v3 != v1 )
  {
    v3 = (_QWORD *)*v3;
    ++result;
  }
  return result;
}
