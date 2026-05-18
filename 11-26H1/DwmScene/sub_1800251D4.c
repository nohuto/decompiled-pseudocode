/*
 * XREFs of sub_1800251D4 @ 0x1800251D4
 * Callers:
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800251D4(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
