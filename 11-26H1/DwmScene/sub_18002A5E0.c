/*
 * XREFs of sub_18002A5E0 @ 0x18002A5E0
 * Callers:
 *     sub_18002BB80 @ 0x18002BB80 (sub_18002BB80.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 *     sub_18002AA30 @ 0x18002AA30 (sub_18002AA30.c)
 *     sub_18002AAA4 @ 0x18002AAA4 (sub_18002AAA4.c)
 *     sub_18002B1EC @ 0x18002B1EC (sub_18002B1EC.c)
 *     sub_18002B5E4 @ 0x18002B5E4 (sub_18002B5E4.c)
 *     sub_18002CCEC @ 0x18002CCEC (sub_18002CCEC.c)
 *     sub_18002CD34 @ 0x18002CD34 (sub_18002CD34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A5E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 152;
  v7 = 0x86BCA1AF286BCA1BuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0x1AF286BCA1AF286LL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = sub_18002CCEC(a1, v7 + 1);
  v10 = sub_18002AA04(v9);
  v11 = sub_180011790(v10);
  v12 = v11 + 152 * v6;
  v16 = a1;
  v17 = v11;
  v18 = v9;
  v20 = v12 + 152;
  sub_18002B1EC(v12, a3);
  v19 = v12;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 == v13 )
  {
    sub_18002AA30(v14, v13, v11, a1);
  }
  else
  {
    sub_18002AAA4(v14, a2, v11, a1);
    v19 = v11;
    sub_18002AAA4(a2, a1[1], v12 + 152, a1);
  }
  v17 = 0LL;
  sub_18002CD34(a1, v11, v8, v9);
  sub_18002B5E4(&v16);
  return v12;
}
