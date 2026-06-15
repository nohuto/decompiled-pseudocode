/*
 * XREFs of sub_14000F65C @ 0x14000F65C
 * Callers:
 *     sub_140084430 @ 0x140084430 (sub_140084430.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000F65C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  v5[4] = a4;
  v5[2] = &v6;
  v5[3] = 8LL;
  v5[5] = 16LL;
  return sub_14000FEC8(a1, a2, a3, 3LL, v5);
}
