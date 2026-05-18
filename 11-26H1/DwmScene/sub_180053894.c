/*
 * XREFs of sub_180053894 @ 0x180053894
 * Callers:
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_18004FD4C @ 0x18004FD4C (sub_18004FD4C.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_180053E8C @ 0x180053E8C (sub_180053E8C.c)
 *     sub_18006B46C @ 0x18006B46C (sub_18006B46C.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 *     sub_1800CAE30 @ 0x1800CAE30 (sub_1800CAE30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_18004F470 @ 0x18004F470 (sub_18004F470.c)
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 *     sub_180052904 @ 0x180052904 (sub_180052904.c)
 *     sub_18005293C @ 0x18005293C (sub_18005293C.c)
 *     sub_180052BCC @ 0x180052BCC (sub_180052BCC.c)
 *     sub_180052C64 @ 0x180052C64 (sub_180052C64.c)
 *     sub_180052D3C @ 0x180052D3C (sub_180052D3C.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 *     sub_180053D44 @ 0x180053D44 (sub_180053D44.c)
 *     sub_180053D94 @ 0x180053D94 (sub_180053D94.c)
 *     sub_180054120 @ 0x180054120 (sub_180054120.c)
 *     sub_18005434C @ 0x18005434C (sub_18005434C.c)
 *     sub_180054510 @ 0x180054510 (sub_180054510.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180053894(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  size_t v12; // r12
  __int64 v13; // r14
  int v14; // edi
  void **v15; // rax
  char v16; // bl
  int **v17; // r15
  size_t v18; // r13
  _DWORD *v19; // rax
  char v20; // r12
  int v21; // r8d
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // r14
  __int64 v25; // r13
  const void *v26; // r14
  int *v27; // rbx
  int v28; // eax
  __int64 *v29; // rax
  int *v30; // rax
  int v31; // ecx
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  unsigned int v35; // eax
  int v36; // r8d
  unsigned int v37; // eax
  int v38; // r8d
  _DWORD *v39; // [rsp+40h] [rbp-C0h] BYREF
  size_t v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h]
  unsigned int v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  _QWORD *v47; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v48; // [rsp+88h] [rbp-78h]
  _BYTE v49[24]; // [rsp+A0h] [rbp-60h] BYREF
  char v50[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-20h]
  _BYTE pExceptionObject[56]; // [rsp+F8h] [rbp-8h] BYREF

  v42 = a2;
  v41 = a3;
  v43 = a4;
  v46 = a8;
  v12 = a9;
  v44 = a9;
  v45 = a9;
  v13 = a10;
  v14 = 0;
  LODWORD(v39) = 0;
  sub_180054510(a1 + 136, 0LL);
  if ( a4 )
  {
    v15 = (void **)sub_180052BCC(&v39, &v42, &v41, &v43, &a5, &a7, &a6);
    v16 = 2;
  }
  else
  {
    v15 = (void **)sub_180052C64(&v40, &v42, &v41, &a5, &a7, &a6);
    v16 = 1;
  }
  v17 = (int **)(a1 + 128);
  sub_180052904((void **)(a1 + 128), v15);
  if ( (v16 & 2) != 0 )
  {
    v16 &= ~2u;
    sub_1800531F0((void **)&v39);
  }
  if ( (v16 & 1) != 0 )
    sub_1800531F0((void **)&v40);
  v18 = v12;
  v40 = v12;
  sub_180053D44(v49, *v17, v46, v12);
  if ( v13 )
    sub_180029310(a1, 1, 1);
  v19 = *(_DWORD **)(a1 + 72);
  v39 = v19;
  v20 = 0;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
      {
        sub_180011CC4(&v51, "Texture cannot be created to just target generic devices");
        v37 = (unsigned int)sub_180011CC4(
                              &v47,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_18006A84C((unsigned int)pExceptionObject, v37, v38, (unsigned int)&v51, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      sub_180053D94(a1, v49, v13);
      sub_180029310(a1, 2, 0);
      sub_180029310(v22, v21 + 4, v21);
      v20 = 1;
    }
    else
    {
      sub_180036040((__int64)v19, (__int64 *)&v47);
      v23 = v47;
      v24 = v48;
      if ( v47 != v48 )
      {
        do
        {
          sub_180012C40(&v51, v23);
          v25 = v51;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51) )
          {
            sub_180053D94(a1, v49, v25);
            v20 = 1;
          }
          if ( v52 )
            sub_180010EC8(v52);
          v23 += 2;
        }
        while ( v23 != v24 );
        v18 = v40;
      }
      sub_1800141F0((__int64)&v47);
    }
    v19 = v39;
  }
  v26 = (const void *)v46;
  if ( v46 && (v19[138] == 1 || !v20) )
  {
    v27 = *v17;
    v28 = sub_180054120((unsigned int)(*v17)[4], (unsigned int)**v17, (unsigned int)(*v17)[1]);
    if ( (v27[5] & 0x10) != 0 )
      v28 *= 6;
    if ( v27[2] * v28 != v44 )
    {
      sub_180011CC4(&v51, "Wrong buffer size");
      v35 = (unsigned int)sub_180011CC4(
                            &v47,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_18006A84C((unsigned int)pExceptionObject, v35, v36, (unsigned int)&v51, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18004F470(&v39, v18);
    sub_1800114C0(v39, v18, v26, v18);
    v29 = sub_180052D3C((__int64 *)&v40, (__int64)v49, (__int64 *)&v39, &v45);
    sub_18005293C(a1 + 136, v29);
    sub_180038A48(&v40);
    sub_180025A84((void **)&v39);
  }
  v30 = *v17;
  if ( *v17 )
  {
    v14 = v30[1];
    v31 = *v30;
  }
  else
  {
    v31 = 0;
  }
  v32 = 0LL;
  v32.m128_f32[0] = (float)v31;
  v33 = 0LL;
  v33.m128_f32[0] = (float)v14;
  sub_18005434C(a1, _mm_unpacklo_ps(v32, v33).m128_u64[0]);
  return sub_180050314((__int64)v50);
}
