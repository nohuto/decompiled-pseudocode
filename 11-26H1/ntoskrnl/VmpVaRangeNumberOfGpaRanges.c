/*
 * XREFs of VmpVaRangeNumberOfGpaRanges @ 0x1404C8FB0
 * Callers:
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14051122C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405199E0 (VmpMergeMemoryRanges.c)
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
