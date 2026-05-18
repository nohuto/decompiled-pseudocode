/*
 * XREFs of sub_1800C8650 @ 0x1800C8650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180054048 @ 0x180054048 (sub_180054048.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054258 @ 0x180054258 (sub_180054258.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C4EB4 @ 0x1800C4EB4 (sub_1800C4EB4.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     sub_1800C5318 @ 0x1800C5318 (sub_1800C5318.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800C8650(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  __int64 *v6; // rax
  char v7; // di
  __int64 v8; // rbx
  __int64 v9; // r12
  int v10; // r13d
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *); // rdi
  __int64 v15; // rsi
  __int64 *v16; // rax
  int v17; // edi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *); // rdi
  _QWORD *v20; // rax
  char v21; // r15
  char *v22; // rdi
  __int64 i; // rcx
  int v24; // eax
  int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rbx
  void (__fastcall *v29)(__int64, __int64, _QWORD); // r14
  __int64 *v30; // rax
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  _DWORD v40[2]; // [rsp+90h] [rbp-70h]
  char v41; // [rsp+98h] [rbp-68h] BYREF
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+150h] [rbp+50h] BYREF
  __int64 v46; // [rsp+158h] [rbp+58h] BYREF
  const void *v47; // [rsp+160h] [rbp+60h]
  int v48; // [rsp+168h] [rbp+68h]

  v48 = a4;
  v47 = a3;
  LODWORD(v45) = 0;
  if ( *a2 )
  {
    v6 = sub_180054068(*a2, &v35, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v33 = 0LL;
    v6 = &v32;
    v7 = 2;
    v8 = 0LL;
  }
  v37[0] = v8;
  v9 = v6[1];
  v37[1] = v9;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v33 )
      sub_180010EC8(v33);
  }
  if ( (v7 & 1) != 0 && v36 )
    sub_180010EC8(v36);
  v10 = -((unsigned int)sub_180054258(v8) != 2);
  sub_1800C5318(&v32, v37);
  v34 = 0LL;
  LODWORD(v45) = 1;
  v11 = *(_QWORD *)(*a2 + 128);
  v12 = (__int64 *)(a1 + 144);
  if ( v11 && *(_DWORD *)(v11 + 12) == 1 )
  {
    v13 = *v12;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *))(*(_QWORD *)*v12 + 112LL);
    v15 = v32;
    v16 = sub_1800C4EEC(v32, &v46);
    v17 = v14(v13, *v16, 0LL, (unsigned int)(v10 + 4), 0, &v34);
    sub_18000F938(&v46);
  }
  else
  {
    v15 = v32;
    LODWORD(v45) = sub_180054048(v32);
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v18 + 112LL);
    v20 = sub_1800C4EB4(v15, &v46);
    v17 = v19(v18, *v20, 0LL, (unsigned int)(v10 + 4), 0, &v34);
    sub_18000F938(&v46);
  }
  sub_180012A94(a1 + 72, &v38);
  sub_1800C52A0(&v35, &v38);
  if ( v39 )
    sub_180010EC8(v39);
  sub_1800BDDBC(v35, v17);
  v21 = 0;
  if ( v17 < 0 )
  {
    sub_18001DCFC(&qword_1801BD548, 3);
  }
  else
  {
    sub_1800540C4(v15);
    v40[0] = 0;
    v40[1] = 1;
    v22 = &v41;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v22 = 1;
      v22 += 4;
    }
    v42 = 4;
    v43 = 1;
    v44 = 1;
    v24 = sub_1800541A4(v15);
    v26 = (unsigned int)(v45 * DWORD2(v34) * v24) / v40[v25];
    if ( v26 == v48 )
    {
      sub_1800114C0((void *)v34, v26, v47, v26);
      v21 = 1;
    }
    v27 = *sub_1800C4EEC(v15, &v45);
    sub_18000F938(&v45);
    v28 = *v12;
    v29 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v12 + 120LL);
    if ( v27 )
      v30 = sub_1800C4EEC(v15, &v45);
    else
      v30 = sub_1800C4EB4(v15, &v45);
    v29(v28, *v30, 0LL);
    sub_18000F938(&v45);
  }
  if ( v36 )
    sub_180010EC8(v36);
  if ( v33 )
    sub_180010EC8(v33);
  if ( v9 )
    sub_180010EC8(v9);
  return v21;
}
