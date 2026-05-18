/*
 * XREFs of sub_1800BF1E4 @ 0x1800BF1E4
 * Callers:
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BF1E4(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
