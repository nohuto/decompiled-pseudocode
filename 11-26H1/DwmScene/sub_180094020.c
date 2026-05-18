/*
 * XREFs of sub_180094020 @ 0x180094020
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_18004357C @ 0x18004357C (sub_18004357C.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 *     sub_18008FA84 @ 0x18008FA84 (sub_18008FA84.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180094020(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64, __int64, __int64 *, _QWORD *); // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  __int64 v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+58h] [rbp-61h]
  _QWORD *v30; // [rsp+60h] [rbp-59h]
  _QWORD *v31; // [rsp+68h] [rbp-51h]
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  __int64 v35; // [rsp+88h] [rbp-31h]
  _QWORD v36[4]; // [rsp+90h] [rbp-29h] BYREF

  v29 = a4;
  v30 = a5;
  v31 = a6;
  v9 = a1[3];
  v10 = sub_180012BF8(*a3 + 8LL, &v32);
  sub_1800592E4(v9, &v34, v10);
  if ( v33 )
    sub_180010EC8(v33);
  sub_180012C40(v36, a5);
  v11 = sub_180012C40(&v27, a6);
  sub_18008FA84(v13, (__int64)a3, v11, v12, 0xFFFFFFFF);
  v26 = 0LL;
  sub_18005A750(a1[3], (__int64 *)&v26);
  *(_BYTE *)(a1[3] + 465) &= 0xF8u;
  sub_18004357C(a1[34], -1LL, 0);
  *(_BYTE *)(a1[9] + 72) = 1;
  v15 = sub_180012C40(&v27, v14);
  sub_18004B290(v16, v15);
  v17 = a1[36];
  v26 = *(_OWORD *)a5;
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_18007EDAC(v17, (__int64)&unk_1801CCFB8, &v26);
  v18 = sub_180012C40(&v27, a1 + 40);
  sub_18007EFAC(v19, (__int64)&unk_1801CCFB8, v18);
  v20 = a1[3];
  v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 208LL);
  sub_180011CC4(v36, "Downsampling");
  v22 = sub_180012BF8(*a3 + 8LL, &v27);
  v21(v20, v22, v29, a1 + 9, v36);
  if ( v28 )
    sub_180010EC8(v28);
  sub_1800129D0((__int64)v36);
  *(_BYTE *)(a1[9] + 72) = 0;
  v26 = 0LL;
  sub_18007EDAC(a1[36], (__int64)&unk_1801CCFB8, &v26);
  v26 = 0LL;
  sub_18007EFAC(a1[36], (__int64)&unk_1801CCFB8, &v26);
  sub_180026A6C(*a6, a2);
  if ( v35 )
    sub_180010EC8(v35);
  v23 = a5[1];
  if ( v23 )
    sub_180010EC8(v23);
  v24 = a6[1];
  if ( v24 )
    sub_180010EC8(v24);
  return a2;
}
