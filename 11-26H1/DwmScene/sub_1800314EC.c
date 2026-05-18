/*
 * XREFs of sub_1800314EC @ 0x1800314EC
 * Callers:
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 * Callees:
 *     sub_18002E420 @ 0x18002E420 (sub_18002E420.c)
 */

__int64 __fastcall sub_1800314EC(void **a1)
{
  sub_18002E420((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x60uLL);
}
