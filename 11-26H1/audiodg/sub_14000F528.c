/*
 * XREFs of sub_14000F528 @ 0x14000F528
 * Callers:
 *     sub_1400A21A0 @ 0x1400A21A0 (sub_1400A21A0.c)
 *     sub_1400AD1E4 @ 0x1400AD1E4 (sub_1400AD1E4.c)
 *     sub_1400AD2E8 @ 0x1400AD2E8 (sub_1400AD2E8.c)
 * Callees:
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000F528(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v7 = &v13;
  v12 = 8LL;
  v9 = &v14;
  v10 = 4LL;
  v11 = &a5;
  return sub_14000FEC8(a1, &unk_1400C5370, a3, 4LL, v6);
}
