/*
 * XREFs of sub_18002FC28 @ 0x18002FC28
 * Callers:
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002FC28(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax

  result = *a4;
  *a2 = **a4;
  a2[1] = 0LL;
  return result;
}
