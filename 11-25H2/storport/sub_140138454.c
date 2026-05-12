/*
 * XREFs of sub_140138454 @ 0x140138454
 * Callers:
 *     sub_140136FA4 @ 0x140136FA4 (sub_140136FA4.c)
 *     sub_1401373B8 @ 0x1401373B8 (sub_1401373B8.c)
 *     sub_1401383F0 @ 0x1401383F0 (sub_1401383F0.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_140138454(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  sub_1400859FC(*a1, "SetTableColumns", a3, 23, *a4, a4[1]);
  return sub_140137E38(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1401377C0,
           (__int64)a4,
           0LL,
           0LL,
           0LL,
           0LL);
}
