/*
 * XREFs of sub_180024D88 @ 0x180024D88
 * Callers:
 *     sub_18002C610 @ 0x18002C610 (sub_18002C610.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_180025040 @ 0x180025040 (sub_180025040.c)
 *     sub_180025178 @ 0x180025178 (sub_180025178.c)
 *     sub_180025E50 @ 0x180025E50 (sub_180025E50.c)
 *     sub_180027368 @ 0x180027368 (sub_180027368.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024D88(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 6;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v12 = sub_180025040(v8);
  v13 = sub_180011790(v12);
  v14 = v13 + (v6 & 0xFFFFFFFFFFFFFFC0uLL);
  v19[0] = a1;
  v19[1] = v13;
  v20 = v8;
  v22 = v14 + 64;
  sub_18001D3F0(v14, a3);
  v21 = v14;
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    sub_180025178(v17, a2, v13);
    v21 = v13;
    v16 = v14 + 64;
    v15 = a1[1];
    v17 = a2;
  }
  sub_180025178(v17, v15, v16);
  sub_180027368(a1, v13, v9, v8, v19[0], 0LL, v20, v21, v22);
  sub_180025E50(v19);
  return v14;
}
