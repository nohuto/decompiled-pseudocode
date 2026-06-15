/*
 * XREFs of sub_140013C20 @ 0x140013C20
 * Callers:
 *     sub_140013D70 @ 0x140013D70 (sub_140013D70.c)
 *     sub_140044930 @ 0x140044930 (sub_140044930.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140013C20(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+18h] BYREF
  int v8; // [rsp+A8h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6[3] = 8LL;
  v6[2] = &v7;
  v6[5] = 4LL;
  v6[4] = &v8;
  v6[6] = &a5;
  v6[7] = 4LL;
  return sub_140014E60(a1, a2, a3, 4, (__int64)v6);
}
