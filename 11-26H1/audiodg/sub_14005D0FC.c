/*
 * XREFs of sub_14005D0FC @ 0x14005D0FC
 * Callers:
 *     sub_14003B304 @ 0x14003B304 (sub_14003B304.c)
 *     sub_1400465F0 @ 0x1400465F0 (sub_1400465F0.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005D0FC(int a1, int a2, int a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+90h] [rbp+18h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  v5[3] = 4LL;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v7;
  return sub_140014E60(a1, a2, a3, 3, (__int64)v5);
}
