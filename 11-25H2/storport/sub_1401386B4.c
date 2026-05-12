/*
 * XREFs of sub_1401386B4 @ 0x1401386B4
 * Callers:
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_1401386B4(int **a1, __int64 a2, int a3)
{
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  sub_1400859FC(*a1, "ActivateLockingSp", 2, 3, 0LL, 0LL);
  return sub_140137E38(
           (__int64)a1,
           a2,
           0x20500000002LL,
           0x600000203LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140138500,
           (__int64)&v6,
           0LL,
           0LL,
           0LL,
           0LL);
}
