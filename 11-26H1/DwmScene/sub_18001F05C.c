/*
 * XREFs of sub_18001F05C @ 0x18001F05C
 * Callers:
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 *     sub_180055ED4 @ 0x180055ED4 (sub_180055ED4.c)
 *     sub_180056940 @ 0x180056940 (sub_180056940.c)
 *     sub_18005E6D4 @ 0x18005E6D4 (sub_18005E6D4.c)
 *     sub_180060ED0 @ 0x180060ED0 (sub_180060ED0.c)
 *     sub_18006105C @ 0x18006105C (sub_18006105C.c)
 *     sub_1800611B4 @ 0x1800611B4 (sub_1800611B4.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800D0964 @ 0x1800D0964 (sub_1800D0964.c)
 * Callees:
 *     sub_18001FCD0 @ 0x18001FCD0 (sub_18001FCD0.c)
 */

bool __fastcall sub_18001F05C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a2 != a4 )
    return 0;
  if ( a2 )
    return (unsigned int)sub_18001FCD0(a1, a3, a2) == 0;
  return 1;
}
