/*
 * XREFs of sub_1400237B8 @ 0x1400237B8
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400237B8(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  _BYTE v8[32]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  __int64 *v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+8Ch] [rbp+2Bh]

  v14 = 2LL;
  v17 = 0;
  v12 = 8LL;
  v10 = 8LL;
  v15 = *a7;
  v16 = 4 * *((unsigned __int16 *)a7 + 4);
  v11 = a6;
  v9 = a5;
  v13 = a7 + 1;
  return sub_1400239C4(a1, a2, 0, 0, 6, (__int64)v8);
}
