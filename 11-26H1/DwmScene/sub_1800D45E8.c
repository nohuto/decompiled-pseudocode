/*
 * XREFs of sub_1800D45E8 @ 0x1800D45E8
 * Callers:
 *     sub_1800D4478 @ 0x1800D4478 (sub_1800D4478.c)
 *     sub_1800D47E0 @ 0x1800D47E0 (sub_1800D47E0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 *__fastcall sub_1800D45E8(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_180011790(0x68uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
