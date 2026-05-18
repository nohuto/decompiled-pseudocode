/*
 * XREFs of sub_180028CE0 @ 0x180028CE0
 * Callers:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180028CE0(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_BYTE *)(a2 + 4) = 0;
  return result;
}
