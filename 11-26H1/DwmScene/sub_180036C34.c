/*
 * XREFs of sub_180036C34 @ 0x180036C34
 * Callers:
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180026600 @ 0x180026600 (sub_180026600.c)
 *     sub_180026628 @ 0x180026628 (sub_180026628.c)
 *     sub_18002D24C @ 0x18002D24C (sub_18002D24C.c)
 *     sub_18002D270 @ 0x18002D270 (sub_18002D270.c)
 *     sub_18002F4FC @ 0x18002F4FC (sub_18002F4FC.c)
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_18003268C @ 0x18003268C (sub_18003268C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_180036C34(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  double v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  _QWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v30[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v31[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v32[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[32]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v34[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v35[4]; // [rsp+160h] [rbp+60h] BYREF

  v24 = a2;
  v21 = 0LL;
  v4 = a2[1];
  if ( v4 && sub_1800128EC(v4) )
  {
    v5 = *a2;
    *(_QWORD *)&v21 = *a2;
    v6 = a2[1];
    *((_QWORD *)&v21 + 1) = v6;
  }
  else
  {
    v6 = *((_QWORD *)&v21 + 1);
    v5 = v21;
  }
  if ( v5 )
  {
    v19 = v5;
    v18 = 0LL;
    v20 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 *, double *))(*(_QWORD *)v5 + 224LL))(v5, 0LL, &v18, &v20);
    v7 = v18;
    *(_QWORD *)(*(_QWORD *)sub_18002F640((__int64 *)(a1 + 1440), (__int64)&v26, &v19) + 40LL) = v7;
    v8 = *(_QWORD *)sub_18002F4FC((__int64 *)(a1 + 1424), (__int64)v25, &v19);
    sub_180013440(&v26, v8 + 64);
    LOBYTE(v7) = v28 == 0;
    sub_180014244((__int64)&v26);
    if ( (_BYTE)v7 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v5 + 376LL))(v5, &v26);
      sub_180012A94(v9, &v22);
      if ( v27 )
        sub_180010F00(v27);
      v10 = v22;
      if ( v22 )
      {
        v11 = sub_180026628(v22, v35);
        v12 = sub_180026600(v10, v34);
        sub_180013440(v29, v10 + 80);
        v13 = sub_18002D270((__int64)v33, (__int64)v29, (__int64)L" ");
        v14 = sub_18002D24C((__int64)v32, v13, (__int64)v12);
        v15 = sub_18002D270((__int64)v31, v14, (__int64)L" ");
        v16 = sub_18002D24C((__int64)v30, v15, (__int64)v11);
        sub_180031F38(v8 + 64, v16);
        sub_180014244((__int64)v30);
        sub_180014244((__int64)v31);
        sub_180014244((__int64)v32);
        sub_180014244((__int64)v33);
        sub_180014244((__int64)v29);
        sub_180014244((__int64)v34);
        sub_180014244((__int64)v35);
      }
      if ( v23 )
        sub_180010EC8(v23);
    }
    sub_18003268C(v8 + 40, v20);
  }
  if ( v6 )
    sub_180010EC8(v6);
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
    sub_180010F00(v17);
}
