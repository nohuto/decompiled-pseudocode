/*
 * XREFs of sub_180025824 @ 0x180025824
 * Callers:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 */

__int64 *__fastcall sub_180025824(__int64 *a1)
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
  sub_180025874(a1 + 2);
  return a1;
}
