/*
 * XREFs of sub_140077348 @ 0x140077348
 * Callers:
 *     sub_140079F60 @ 0x140079F60 (sub_140079F60.c)
 *     sub_14007BB80 @ 0x14007BB80 (sub_14007BB80.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140077348(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
