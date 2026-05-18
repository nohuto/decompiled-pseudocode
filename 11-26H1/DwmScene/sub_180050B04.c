/*
 * XREFs of sub_180050B04 @ 0x180050B04
 * Callers:
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180050B04(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax

  result = *a4;
  *a2 = **a4;
  a2[8] = 0LL;
  return result;
}
