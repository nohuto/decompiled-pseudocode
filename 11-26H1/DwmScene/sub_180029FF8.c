/*
 * XREFs of sub_180029FF8 @ 0x180029FF8
 * Callers:
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180029FF8(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 i; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 16; i != v3; i += 16LL )
  {
    *(_QWORD *)(i - 16) = *(_QWORD *)i;
    *(_BYTE *)(i - 8) = *(_BYTE *)(i + 8);
  }
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
