/*
 * XREFs of sub_1800BF1FC @ 0x1800BF1FC
 * Callers:
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800BF1FC(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  return result;
}
