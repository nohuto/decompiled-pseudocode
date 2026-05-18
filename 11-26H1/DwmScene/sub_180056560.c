/*
 * XREFs of sub_180056560 @ 0x180056560
 * Callers:
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_18005681C @ 0x18005681C (sub_18005681C.c)
 *     sub_180056860 @ 0x180056860 (sub_180056860.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_18005BB04 @ 0x18005BB04 (sub_18005BB04.c)
 *     sub_18005BB4C @ 0x18005BB4C (sub_18005BB4C.c)
 */

__int64 __fastcall sub_180056560(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x555555555555555LL )
    sub_180012A30();
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  v5 = sub_18005BB04(a1, a2);
  v6 = sub_18002ECC8(v5);
  v7 = sub_180011790(v6);
  v13[0] = a1;
  v13[2] = v5;
  v14 = v7 + 48 * v4;
  v8 = v7;
  v9 = sub_180056860(v14, a2 - v4);
  v10 = a1[1];
  v11 = *a1;
  v15 = v9;
  sub_18005681C(v11, v10, v8);
  v13[1] = 0LL;
  sub_18005BB4C(a1, v8, a2, v5);
  return sub_180057344(v13);
}
