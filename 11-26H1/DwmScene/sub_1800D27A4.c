/*
 * XREFs of sub_1800D27A4 @ 0x1800D27A4
 * Callers:
 *     sub_1800D08C8 @ 0x1800D08C8 (sub_1800D08C8.c)
 *     sub_1800D41AC @ 0x1800D41AC (sub_1800D41AC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

_QWORD *__fastcall sub_1800D27A4(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_180011790(0xB0uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
