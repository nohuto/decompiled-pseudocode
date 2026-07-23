/*
 * XREFs of PspApplyWin32kFilterOptions @ 0x140B04138
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PspApplyWin32kFilterOptions(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a2 + 432);
  if ( result )
  {
    if ( (*result & 1) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x4000u);
    if ( (**(_DWORD **)(a2 + 432) & 2) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000u);
    result = *(_DWORD **)(a2 + 432);
    *(_DWORD *)(a1 + 1768) = result[1];
  }
  return result;
}
