/*
 * XREFs of sub_180056274 @ 0x180056274
 * Callers:
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_18005681C @ 0x18005681C (sub_18005681C.c)
 *     sub_180056D80 @ 0x180056D80 (sub_180056D80.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_18005BB04 @ 0x18005BB04 (sub_18005BB04.c)
 *     sub_18005BB4C @ 0x18005BB4C (sub_18005BB4C.c)
 */

__int64 __fastcall sub_180056274(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x555555555555555LL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = sub_18005BB04(a1, v7 + 1);
  v10 = sub_18002ECC8(v9);
  v11 = sub_180011790(v10);
  v17[0] = a1;
  v17[2] = v9;
  v12 = v11 + 48 * ((a2 - v3) / 48);
  v19 = v12 + 48;
  sub_180056D80(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    sub_18005681C(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 48;
    v15 = a2;
    v18 = v11;
  }
  sub_18005681C(v15, v13, v14);
  v17[1] = 0LL;
  sub_18005BB4C(a1, v11, v8, v9);
  sub_180057344(v17);
  return v12;
}
