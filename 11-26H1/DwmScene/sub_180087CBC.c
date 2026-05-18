/*
 * XREFs of sub_180087CBC @ 0x180087CBC
 * Callers:
 *     sub_1800878A0 @ 0x1800878A0 (sub_1800878A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180087CBC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a2 + 12) = 1065353216;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
