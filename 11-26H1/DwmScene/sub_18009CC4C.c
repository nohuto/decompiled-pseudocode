/*
 * XREFs of sub_18009CC4C @ 0x18009CC4C
 * Callers:
 *     sub_18009CBE4 @ 0x18009CBE4 (sub_18009CBE4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

_QWORD *__fastcall sub_18009CC4C(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_180011790(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
