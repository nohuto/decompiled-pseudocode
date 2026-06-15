/*
 * XREFs of sub_14000F5B0 @ 0x14000F5B0
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_140098810 @ 0x140098810 (sub_140098810.c)
 *     sub_140099670 @ 0x140099670 (sub_140099670.c)
 *     sub_1400997E0 @ 0x1400997E0 (sub_1400997E0.c)
 *     sub_14009AB10 @ 0x14009AB10 (sub_14009AB10.c)
 *     sub_14009BE40 @ 0x14009BE40 (sub_14009BE40.c)
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 *     sub_1400A3BB0 @ 0x1400A3BB0 (sub_1400A3BB0.c)
 *     sub_1400A3F60 @ 0x1400A3F60 (sub_1400A3F60.c)
 *     sub_1400A4B50 @ 0x1400A4B50 (sub_1400A4B50.c)
 *     sub_1400A7170 @ 0x1400A7170 (sub_1400A7170.c)
 *     sub_1400A7640 @ 0x1400A7640 (sub_1400A7640.c)
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000F5B0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  _BYTE v8[16]; // [rsp+30h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  int *v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  char *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 8LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v14 = 8LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v16 = 8LL;
  v18 = 8LL;
  return sub_14000FEC8(a1, &unk_1400C5380, a3, 6LL, v8);
}
