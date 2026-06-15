/*
 * XREFs of sub_140069574 @ 0x140069574
 * Callers:
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 *     sub_14007B1C0 @ 0x14007B1C0 (sub_14007B1C0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140069574(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax

  a1[3] = a5;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
