/*
 * XREFs of sub_140001CE8 @ 0x140001CE8
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_14004DE10 @ 0x14004DE10 (sub_14004DE10.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140001CE8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v6 = 3;
  v7 = 0;
  v9 = &v6;
  v12 = 1LL;
  v11 = &a5;
  v10 = 4LL;
  v13 = &v7;
  v14 = 4LL;
  return sub_1400031E4(0LL, &unk_1401488D0, a3, 4LL, v8);
}
