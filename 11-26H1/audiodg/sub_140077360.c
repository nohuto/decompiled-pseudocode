/*
 * XREFs of sub_140077360 @ 0x140077360
 * Callers:
 *     sub_14007A4F0 @ 0x14007A4F0 (sub_14007A4F0.c)
 *     sub_14007A580 @ 0x14007A580 (sub_14007A580.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140077360(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
