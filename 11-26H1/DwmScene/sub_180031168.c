/*
 * XREFs of sub_180031168 @ 0x180031168
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180030B88 @ 0x180030B88 (sub_180030B88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180031168(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_180011790(0x60uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  sub_180030B88(a1 + 2);
  return a1;
}
