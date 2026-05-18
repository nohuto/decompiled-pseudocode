/*
 * XREFs of sub_1800CB8A8 @ 0x1800CB8A8
 * Callers:
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C3084 @ 0x1800C3084 (sub_1800C3084.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800CAF24 @ 0x1800CAF24 (sub_1800CAF24.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800CB8A8(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm6
  __int64 *v12; // rax
  _QWORD *v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, int *, __int64 *); // rdi
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  const char *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // r9
  __int64 v33; // rcx
  __m128i v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+74h] [rbp-8Ch]
  int v43; // [rsp+7Ch] [rbp-84h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  __m128i v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  _QWORD v47[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h]
  _OWORD v50[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  _QWORD pExceptionObject[7]; // [rsp+118h] [rbp+18h] BYREF

  v46 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180016FD4(v4, &v35);
  sub_180011F5C((_QWORD *)(a1 + 128), v5);
  if ( v35.m128i_i64[1] )
    sub_180010EC8(v35.m128i_i64[1]);
  v6 = a2 + 8;
  v7 = sub_180012C40(&v35, (_QWORD *)(a1 + 128));
  sub_1800CAF24(a2 + 8, (__int64)v7, v8, 4);
  v9 = sub_180054068(*(_QWORD *)(a1 + 128), &v35, *(_DWORD *)(a1 + 88));
  sub_180011F5C((_QWORD *)(a1 + 96), v9);
  if ( v35.m128i_i64[1] )
    sub_180010EC8(v35.m128i_i64[1]);
  sub_180012A94(a1 + 72, &v35);
  v11 = v35;
  v45 = v35;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v12 = sub_180016FD4(v4, &v35);
    sub_180011F5C((_QWORD *)(a1 + 144), v12);
    if ( v35.m128i_i64[1] )
      sub_180010EC8(v35.m128i_i64[1]);
    sub_180029310(*(_QWORD *)(a1 + 144), 2, 0);
    v13 = sub_180012C40(&v35, (_QWORD *)(a1 + 144));
    v15 = 256;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 5) )
      goto LABEL_29;
    v16 = sub_180016FD4(v4, &v35);
    sub_180011F5C((_QWORD *)(a1 + 192), v16);
    if ( v35.m128i_i64[1] )
      sub_180010EC8(v35.m128i_i64[1]);
    sub_180029310(*(_QWORD *)(a1 + 192), 2, 0);
    v13 = sub_180012C40(&v35, (_QWORD *)(a1 + 192));
    v15 = 1024;
  }
  sub_1800CAF24(a2 + 8, (__int64)v13, v14, v15);
  if ( *(_BYTE *)(a2 + 5) && !*(_QWORD *)(a1 + 192) )
  {
    sub_180054068(*(_QWORD *)(a1 + 144), &v35, *(_DWORD *)(a1 + 88));
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    v52 = 0;
    v17 = sub_180012C40(v47, &v35);
    v18 = sub_18001818C(&v36, v17);
    sub_1800C4EEC(*v18, &v38);
    if ( v37 )
      sub_180010EC8(v37);
    v19 = v38;
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v38 + 80LL))(v38, v50);
    v44 = 0LL;
    v41 = 47;
    v42 = 4LL;
    v43 = DWORD2(v50[0]);
    v39 = 0LL;
    v40[0] = v11.m128i_i64[0];
    v20 = sub_1800BC108(v11.m128i_i64[0], &v36);
    v21 = *v20;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)*v20 + 56LL);
    sub_18000F938(&v39);
    LODWORD(v22) = v22(v21, v19, &v41, &v39);
    sub_18000F938(&v36);
    v23 = v40[0];
    sub_1800BDDBC(v40[0], (int)v22);
    if ( (int)v22 < 0 )
    {
      sub_180011CC4(v47, "Failed to create ShaderResourceView for stencil buffer");
      v24 = sub_180011CC4(
              &v48,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_18006A84C(pExceptionObject, (__int64)v24, v25, (__int64)v47, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v26 = sub_18002912C(a1, &v48);
    v27 = (const char *)sub_1800148EC((__int64)v26);
    sub_180012384(v39, v27);
    sub_1800129D0((__int64)&v48);
    v28 = sub_180016BD8(v23, &v48);
    v29 = (__int64 *)*v28;
    v47[0] = *v28;
    v30 = v28[1];
    v47[1] = v30;
    *v28 = 0LL;
    v28[1] = 0LL;
    if ( v49 )
      sub_180010EC8(v49);
    v40[0] = v39;
    sub_180012440(v40);
    v36 = v19;
    sub_180012440(&v36);
    sub_1800C3084(v29, &v36, v40, 0x400u);
    v31 = sub_180016FD4(v4, &v36);
    sub_180011F5C((_QWORD *)(a1 + 192), v31);
    if ( v37 )
      sub_180010EC8(v37);
    sub_180029310(*(_QWORD *)(a1 + 192), 2, 0);
    sub_180012C40(&v36, v47);
    sub_1800537DC(v32, &v36);
    if ( v37 )
      sub_180010EC8(v37);
    if ( v30 )
      sub_180010EC8(v30);
    sub_18000F938(&v39);
    sub_18000F938(&v38);
    if ( v35.m128i_i64[1] )
      sub_180010EC8(v35.m128i_i64[1]);
  }
LABEL_29:
  v33 = _mm_srli_si128(v11, 8).m128i_u64[0];
  if ( v33 )
    sub_180010EC8(v33);
  return sub_180013494(v6, v10);
}
