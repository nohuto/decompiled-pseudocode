/*
 * XREFs of sub_1800306DC @ 0x1800306DC
 * Callers:
 *     sub_180030AAC @ 0x180030AAC (sub_180030AAC.c)
 *     sub_180030B20 @ 0x180030B20 (sub_180030B20.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 *__fastcall sub_1800306DC(__int64 *a1)
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
  return a1;
}
