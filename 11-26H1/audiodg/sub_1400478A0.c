/*
 * XREFs of sub_1400478A0 @ 0x1400478A0
 * Callers:
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 * Callees:
 *     sub_1400478F8 @ 0x1400478F8 (sub_1400478F8.c)
 */

_QWORD *__fastcall sub_1400478A0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = a3 - *a1;
  sub_1400478F8(a1, a3, a4, a5 - a4);
  result = a2;
  *a2 = v5 + *a1;
  return result;
}
