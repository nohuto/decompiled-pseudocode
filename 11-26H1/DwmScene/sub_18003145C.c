/*
 * XREFs of sub_18003145C @ 0x18003145C
 * Callers:
 *     sub_180031760 @ 0x180031760 (sub_180031760.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18003A924 @ 0x18003A924 (sub_18003A924.c)
 *     sub_1800D983F @ 0x1800D983F (sub_1800D983F.c)
 * Callees:
 *     sub_18002E318 @ 0x18002E318 (sub_18002E318.c)
 */

__int64 __fastcall sub_18003145C(void **a1)
{
  sub_18002E318((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_18000E26C(*a1, 0x60uLL);
}
