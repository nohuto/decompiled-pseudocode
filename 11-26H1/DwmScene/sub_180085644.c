/*
 * XREFs of sub_180085644 @ 0x180085644
 * Callers:
 *     sub_180085530 @ 0x180085530 (sub_180085530.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_180085644(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[2 * ((a2 - (__int64)a1) >> 1)];
}
