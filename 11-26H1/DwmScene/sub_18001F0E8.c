/*
 * XREFs of sub_18001F0E8 @ 0x18001F0E8
 * Callers:
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

char *__fastcall sub_18001F0E8(void *a1, __int64 a2, char *a3)
{
  sub_180017A18(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
