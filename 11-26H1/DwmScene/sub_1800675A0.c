/*
 * XREFs of sub_1800675A0 @ 0x1800675A0
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180024C48 @ 0x180024C48 (sub_180024C48.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800675A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  _UNKNOWN **v5; // r12
  __int64 *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  char v13; // al
  double v14; // xmm0_8
  int v15; // xmm11_4
  double v16; // xmm0_8
  int v17; // xmm12_4
  double v18; // xmm0_8
  int v19; // xmm13_4
  double v20; // xmm0_8
  int v21; // xmm14_4
  double v22; // xmm0_8
  int v23; // xmm15_4
  double v24; // xmm0_8
  double v25; // xmm0_8
  int v26; // xmm7_4
  double v27; // xmm0_8
  int v28; // xmm8_4
  double v29; // xmm0_8
  int v30; // xmm9_4
  int v31; // eax
  double v32; // xmm0_8
  _QWORD *v33; // rax
  __int64 v34; // r8
  int v35; // xmm0_4
  __int64 v36; // rcx
  __int64 v37; // [rsp+28h] [rbp-E0h]
  int v38; // [rsp+30h] [rbp-D8h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  int v40; // [rsp+40h] [rbp-C8h]
  float v41; // [rsp+44h] [rbp-C4h]
  int v42; // [rsp+48h] [rbp-C0h]
  int v43; // [rsp+4Ch] [rbp-BCh]
  int v44; // [rsp+50h] [rbp-B8h]
  float v45; // [rsp+54h] [rbp-B4h]
  __int64 v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h]
  _QWORD v49[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  __int64 v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-50h]
  __int64 v58; // [rsp+C0h] [rbp-48h]
  __int64 v59; // [rsp+C8h] [rbp-40h]
  _QWORD v60[24]; // [rsp+D0h] [rbp-38h] BYREF
  char v62; // [rsp+1E0h] [rbp+D8h]
  char v63; // [rsp+1E8h] [rbp+E0h]
  char v64; // [rsp+1F0h] [rbp+E8h]

  v37 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  v4 = sub_18005F93C(*a2, v3);
  v5 = &off_1801BD9C8;
  v6 = (__int64 *)(v4 + 64);
  v7 = (_QWORD *)(v4 + 8);
  v39 = 3LL;
  do
  {
    sub_180012C40(&v50, v7);
    result = *v6;
    if ( *v6 )
      _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    v10 = *(v6 - 1);
    v58 = v10;
    v11 = *v6;
    v59 = *v6;
    v12 = v50;
    if ( v50 && v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, *(v5 - 1), 0LL);
      v63 = v13;
      v14 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 88LL))(v37, *v5);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[1]);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[2]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[3]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[4]);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[5]);
      v40 = LODWORD(v24);
      v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[6]);
      v26 = LODWORD(v25);
      v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[7]);
      v28 = LODWORD(v27);
      v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[8]);
      v30 = LODWORD(v29);
      v41 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[9]);
      v42 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v37 + 72LL))(v37, v5[10], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v37 + 72LL))(v37, v5[11], 0LL);
      v43 = v31;
      v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[12]);
      v44 = LODWORD(v32);
      v45 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 88LL))(v37, v5[13]);
      v62 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, v5[14], 0LL);
      v64 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, v5[15], 0LL);
      v38 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v37 + 72LL))(v37, v5[16], 0LL);
      v33 = sub_180012C40(v60, a2);
      sub_180033B20(a1, &v56, v34, v33);
      sub_180012A94(v56 + 56, &v47);
      v49[0] = v47;
      v46 = v48;
      v49[1] = v48;
      v47 = 0LL;
      v48 = 0LL;
      sub_18003AC0C((_QWORD *)(v10 + 96), v49);
      if ( v46 )
        sub_180010EC8(v46);
      if ( v62 )
      {
        v35 = -1077342245;
        v38 = 1;
      }
      else
      {
        v35 = 0;
      }
      *(_DWORD *)(v10 + 88) = v38;
      *(_DWORD *)(v10 + 136) = v35;
      *(_DWORD *)(v10 + 112) = v15;
      *(_DWORD *)(v10 + 116) = v17;
      *(_DWORD *)(v10 + 120) = v19;
      *(_DWORD *)(v10 + 124) = v21;
      *(_DWORD *)(v10 + 128) = v23;
      *(_DWORD *)(v10 + 132) = v40;
      *(_BYTE *)(v10 + 72) = v63;
      *(_DWORD *)(v10 + 152) = v26;
      *(_DWORD *)(v10 + 156) = v28;
      *(_DWORD *)(v10 + 160) = v30;
      *(_DWORD *)(v10 + 164) = 1065353216;
      *(_BYTE *)(v12 + 72) = v63;
      *(_DWORD *)(v12 + 88) = v26;
      *(_DWORD *)(v12 + 92) = v28;
      *(_DWORD *)(v12 + 96) = v30;
      *(_DWORD *)(v12 + 100) = 1065353216;
      *(float *)(v12 + 104) = v41;
      *(_DWORD *)(v12 + 108) = v42;
      *(_DWORD *)(v12 + 120) = v43;
      *(_DWORD *)(v12 + 116) = v44;
      *(float *)(v12 + 112) = v45;
      *(_BYTE *)(v12 + 124) = v64;
      sub_180012A94(v12 + 56, &v52);
      result = (__int64)sub_180024C48(v52, &v54);
      if ( v53 )
        result = sub_180010EC8(v53);
      if ( v54 )
        result = sub_1800596B4(v54);
      if ( v55 )
        result = sub_180010EC8(v55);
      if ( v57 )
        result = sub_180010EC8(v57);
      if ( v11 )
        result = sub_180010EC8(v11);
      v36 = v51;
      if ( v51 )
LABEL_26:
        result = sub_180010EC8(v36);
      v8 = v39;
      goto LABEL_28;
    }
    if ( v11 )
    {
      result = sub_180010EC8(v11);
      v8 = v39;
    }
    v36 = v51;
    if ( v51 )
      goto LABEL_26;
LABEL_28:
    v7 += 2;
    v6 += 2;
    v5 += 18;
    v39 = v8 - 1;
  }
  while ( v8 != 1 );
  return result;
}
