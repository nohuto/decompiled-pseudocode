/*
 * XREFs of sub_1800D2A78 @ 0x1800D2A78
 * Callers:
 *     sub_1800D2B10 @ 0x1800D2B10 (sub_1800D2B10.c)
 *     sub_1800D2B44 @ 0x1800D2B44 (sub_1800D2B44.c)
 * Callees:
 *     sub_1800D1DF4 @ 0x1800D1DF4 (sub_1800D1DF4.c)
 */

__int64 __fastcall sub_1800D2A78(void **a1)
{
  sub_1800D1DF4((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_18000E26C(*a1, 0xC0uLL);
}
