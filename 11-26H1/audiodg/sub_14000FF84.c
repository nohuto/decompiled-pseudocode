/*
 * XREFs of sub_14000FF84 @ 0x14000FF84
 * Callers:
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000FF84(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = *(unsigned int *)(a1 + 12);
  v2 = (_DWORD)result + *(_DWORD *)(a1 + 8) == 0;
  *(_DWORD *)(a1 + 8) += result;
  *(_DWORD *)(a1 + 12) = 0;
  if ( v2 )
    *(_QWORD *)(a1 + 160) = 0LL;
  return result;
}
