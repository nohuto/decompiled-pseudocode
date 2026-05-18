/*
 * XREFs of sub_18001D620 @ 0x18001D620
 * Callers:
 *     sub_18002B3B8 @ 0x18002B3B8 (sub_18002B3B8.c)
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18004D3C4 @ 0x18004D3C4 (sub_18004D3C4.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     sub_1800D982D @ 0x1800D982D (sub_1800D982D.c)
 *     sub_1800E5880 @ 0x1800E5880 (sub_1800E5880.c)
 * Callees:
 *     sub_18001CBF8 @ 0x18001CBF8 (sub_18001CBF8.c)
 */

__int64 __fastcall sub_18001D620(void **a1)
{
  sub_18001CBF8((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x48uLL);
}
