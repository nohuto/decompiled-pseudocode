/*
 * XREFs of sub_180052968 @ 0x180052968
 * Callers:
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_18001F778 @ 0x18001F778 (sub_18001F778.c)
 *     sub_180052AC8 @ 0x180052AC8 (sub_180052AC8.c)
 *     sub_1800532EC @ 0x1800532EC (sub_1800532EC.c)
 *     sub_1800544A0 @ 0x1800544A0 (sub_1800544A0.c)
 */

unsigned __int64 __fastcall sub_180052968(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        _DWORD *a6,
        int *a7,
        int *a8)
{
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  int v18; // r10d
  int v19; // edx
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+40h] [rbp-38h]

  v9 = a2 - *a1;
  v11 = (__int64)(a1[1] - *a1) >> 5;
  if ( v11 == 0x7FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v13 = v11 + 1;
  v14 = sub_18001F778(a1, v11 + 1);
  v15 = sub_18001EB8C(v14);
  v16 = sub_180011790(v15);
  v27 = a1;
  v17 = v16 + (v9 & 0xFFFFFFFFFFFFFFE0uLL);
  v28 = v14;
  v18 = *a8;
  v29 = v17;
  v19 = *a5;
  v20 = *a7;
  v30 = v17 + 32;
  v21 = *a3;
  v22 = *a4;
  *(_DWORD *)(v17 + 20) = *a6;
  v23 = v16;
  *(_QWORD *)(v17 + 8) = v22;
  *(_QWORD *)v17 = v21;
  *(_DWORD *)(v17 + 16) = v19;
  *(_DWORD *)(v17 + 24) = v20;
  *(_DWORD *)(v17 + 28) = v18;
  v24 = a1[1];
  v25 = *a1;
  if ( a2 != v24 )
  {
    sub_180052AC8(v25, a2, v16);
    v24 = a1[1];
    v23 = v17 + 32;
    v25 = a2;
    v29 = v16;
  }
  sub_180052AC8(v25, v24, v23);
  sub_1800544A0(a1, v16, v13, v14, v27, 0LL, v28, v29, v30);
  sub_1800532EC(&v27);
  return v17;
}
