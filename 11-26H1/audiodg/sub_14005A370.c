/*
 * XREFs of sub_14005A370 @ 0x14005A370
 * Callers:
 *     sub_1400478F8 @ 0x1400478F8 (sub_1400478F8.c)
 *     sub_1400B119B @ 0x1400B119B (sub_1400B119B.c)
 *     sub_1400B120C @ 0x1400B120C (sub_1400B120C.c)
 * Callees:
 *     sub_14005A1FC @ 0x14005A1FC (sub_14005A1FC.c)
 */

char *__fastcall sub_14005A370(void *a1, __int64 a2, char *a3)
{
  sub_14005A1FC(a1, a2, a3);
  return &a3[a2 - (_QWORD)a1];
}
