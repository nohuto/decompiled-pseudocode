/*
 * XREFs of sub_140013B80 @ 0x140013B80
 * Callers:
 *     sub_1400132C0 @ 0x1400132C0 (sub_1400132C0.c)
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140013B80(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD v7[10]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF
  int v9; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v7[3] = 8LL;
  v7[2] = &v8;
  v7[5] = 4LL;
  v7[4] = &v9;
  v7[6] = &a5;
  v7[8] = &a6;
  v7[7] = 8LL;
  v7[9] = 4LL;
  return sub_140014E60(a1, a2, a3, 5, (__int64)v7);
}
