/*
 * XREFs of sub_1800294F4 @ 0x1800294F4
 * Callers:
 *     sub_180029994 @ 0x180029994 (sub_180029994.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180013518 @ 0x180013518 (sub_180013518.c)
 *     sub_180029634 @ 0x180029634 (sub_180029634.c)
 *     sub_180029F88 @ 0x180029F88 (sub_180029F88.c)
 */

unsigned __int64 __fastcall sub_1800294F4(_QWORD *a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v10 = v7 + 1;
  v11 = (__int64)(a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  v13 = sub_180011B48(v4);
  v14 = sub_180011790(v13);
  v15 = v14 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = a1;
  v16 = v14;
  v22 = v4;
  v23 = v15;
  v17 = v14;
  *(_QWORD *)v15 = *a3;
  *(_BYTE *)(v15 + 8) = *a4;
  v18 = a1[1];
  v19 = *a1;
  v24 = v15 + 16;
  if ( a2 != v18 )
  {
    sub_180029634(v19, a2, v14);
    v18 = a1[1];
    v17 = v15 + 16;
    v19 = a2;
    v23 = v16;
  }
  sub_180029634(v19, v18, v17);
  sub_180029F88(a1, v16, v10, v4, v21, 0LL, v22, v23, v24);
  sub_180013518((__int64)&v21);
  return v15;
}
