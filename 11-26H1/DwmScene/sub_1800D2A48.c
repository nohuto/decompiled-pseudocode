/*
 * XREFs of sub_1800D2A48 @ 0x1800D2A48
 * Callers:
 *     sub_1800D2B44 @ 0x1800D2B44 (sub_1800D2B44.c)
 *     sub_1800D4658 @ 0x1800D4658 (sub_1800D4658.c)
 *     sub_1800D4678 @ 0x1800D4678 (sub_1800D4678.c)
 *     sub_1800D47E0 @ 0x1800D47E0 (sub_1800D47E0.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 */

__int64 __fastcall sub_1800D2A48(void **a1)
{
  sub_18001CBA0((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_18000E26C(*a1, 0x68uLL);
}
