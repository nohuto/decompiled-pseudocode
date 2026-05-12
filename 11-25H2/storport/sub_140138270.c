/*
 * XREFs of sub_140138270 @ 0x140138270
 * Callers:
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 *     sub_140138D34 @ 0x140138D34 (sub_140138D34.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_140138270(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  sub_1400859FC(*a1, "GetTableColumns", a3, 22, *a4, a4[1]);
  return sub_140137E38(
           (__int64)a1,
           a2,
           a3,
           0x600000016LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140137730,
           (__int64)a4,
           0LL,
           0LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_140137980,
           (__int64)a4);
}
