/*
 * XREFs of sub_14009D41C @ 0x14009D41C
 * Callers:
 *     sub_1400443F8 @ 0x1400443F8 (sub_1400443F8.c)
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_140098810 @ 0x140098810 (sub_140098810.c)
 *     sub_140099670 @ 0x140099670 (sub_140099670.c)
 *     sub_1400997E0 @ 0x1400997E0 (sub_1400997E0.c)
 *     sub_14009AB10 @ 0x14009AB10 (sub_14009AB10.c)
 *     sub_14009BE40 @ 0x14009BE40 (sub_14009BE40.c)
 *     sub_14009E630 @ 0x14009E630 (sub_14009E630.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_1400A25E0 @ 0x1400A25E0 (sub_1400A25E0.c)
 *     sub_1400A2870 @ 0x1400A2870 (sub_1400A2870.c)
 *     sub_1400A2AB0 @ 0x1400A2AB0 (sub_1400A2AB0.c)
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 *     sub_1400A3BB0 @ 0x1400A3BB0 (sub_1400A3BB0.c)
 *     sub_1400A3F60 @ 0x1400A3F60 (sub_1400A3F60.c)
 *     sub_1400A4B50 @ 0x1400A4B50 (sub_1400A4B50.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_14009D41C(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v6 = 8LL;
  v5 = &v7;
  return sub_14000FEC8(a1, &stru_1400C7D38, a3, 2u, &v4);
}
