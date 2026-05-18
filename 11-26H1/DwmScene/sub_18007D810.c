/*
 * XREFs of sub_18007D810 @ 0x18007D810
 * Callers:
 *     sub_1800853D8 @ 0x1800853D8 (sub_1800853D8.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_18007D810(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[12 * ((a2 - (__int64)a1) / 12)];
}
