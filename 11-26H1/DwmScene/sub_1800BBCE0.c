/*
 * XREFs of sub_1800BBCE0 @ 0x1800BBCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800BBCE0(_QWORD *a1, _QWORD *a2, __int128 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v20; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+58h] [rbp+17h]
  __int64 v22; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+68h] [rbp+27h]
  __int128 v24; // [rsp+78h] [rbp+37h] BYREF
  __int128 v25; // [rsp+88h] [rbp+47h]

  switch ( *(_DWORD *)a3 )
  {
    case 0:
      v17 = sub_180012BF8((__int64)(a1 + 1), &v20);
      v24 = *a3;
      v25 = a3[1];
      v18 = sub_1800B9CFC(a1, &v22, (__int64)&v24, v17, (__int64)(a1 + 74));
      v8 = *v18;
      v9 = v18[1];
      *v18 = 0LL;
      v18[1] = 0LL;
      if ( v23 )
        sub_180010EC8(v23);
      goto LABEL_22;
    case 1:
      v15 = sub_180012BF8((__int64)(a1 + 1), &v20);
      v24 = *a3;
      v25 = a3[1];
      v16 = sub_1800B9EA8(a1, &v22, (__int64)&v24, v15, (__int64)(a1 + 74));
      v8 = *v16;
      v9 = v16[1];
      *v16 = 0LL;
      v16[1] = 0LL;
      if ( v23 )
        sub_180010EC8(v23);
      goto LABEL_22;
    case 2:
    case 3:
      v13 = sub_180012BF8((__int64)(a1 + 1), &v20);
      v24 = *a3;
      v25 = a3[1];
      v14 = sub_1800B99A4(a1, &v22, (__int64)&v24, v13, (__int64)(a1 + 74));
      v8 = *v14;
      v9 = v14[1];
      *v14 = 0LL;
      v14[1] = 0LL;
      if ( v23 )
        sub_180010EC8(v23);
      goto LABEL_22;
    case 5:
      v11 = sub_180012BF8((__int64)(a1 + 1), &v20);
      v24 = *a3;
      v25 = a3[1];
      v12 = sub_1800B9B50(a1, &v22, (__int64)&v24, v11, (__int64)(a1 + 74));
      v8 = *v12;
      v9 = v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      if ( v23 )
        sub_180010EC8(v23);
LABEL_22:
      v10 = v21;
      goto LABEL_23;
  }
  if ( *(_DWORD *)a3 != 6 )
  {
    v9 = 0LL;
    v8 = 0LL;
    goto LABEL_25;
  }
  v6 = sub_180012BF8((__int64)(a1 + 1), &v22);
  v24 = *a3;
  v25 = a3[1];
  v7 = sub_1800B97F8(a1, &v20, (__int64)&v24, v6, (__int64)(a1 + 74));
  v8 = *v7;
  v9 = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( v21 )
    sub_180010EC8(v21);
  v10 = v23;
LABEL_23:
  if ( v10 )
    sub_180010EC8(v10);
LABEL_25:
  *a2 = v8;
  a2[1] = v9;
  return a2;
}
