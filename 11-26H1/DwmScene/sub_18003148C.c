/*
 * XREFs of sub_18003148C @ 0x18003148C
 * Callers:
 *     sub_18003176C @ 0x18003176C (sub_18003176C.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 * Callees:
 *     sub_18002E370 @ 0x18002E370 (sub_18002E370.c)
 */

__int64 __fastcall sub_18003148C(void **a1)
{
  sub_18002E370((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_18000E26C(*a1, 0x40uLL);
}
