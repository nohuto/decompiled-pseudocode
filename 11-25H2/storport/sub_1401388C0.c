/*
 * XREFs of sub_1401388C0 @ 0x1401388C0
 * Callers:
 *     sub_140135334 @ 0x140135334 (sub_140135334.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_1401388C0(int **a1, __int64 a2)
{
  sub_1400859FC(*a1, "RevertLockingSp", 1, 2, 0LL, 0LL);
  return sub_140137E38((__int64)a1, a2, 0x20500000001LL, 0x600000202LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
