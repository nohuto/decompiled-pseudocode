/*
 * XREFs of sub_1800C37E0 @ 0x1800C37E0
 * Callers:
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_180052BCC @ 0x180052BCC (sub_180052BCC.c)
 *     sub_1800531D0 @ 0x1800531D0 (sub_1800531D0.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C1AD4 @ 0x1800C1AD4 (sub_1800C1AD4.c)
 *     sub_1800C253C @ 0x1800C253C (sub_1800C253C.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 *     sub_1800C40D4 @ 0x1800C40D4 (sub_1800C40D4.c)
 *     sub_1800C4AB0 @ 0x1800C4AB0 (sub_1800C4AB0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C37E0(
        __int64 a1,
        __int32 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v12; // esi
  int v13; // r12d
  _QWORD *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __m128i *v17; // rcx
  int v18; // eax
  int v19; // r12d
  unsigned int v20; // eax
  int v21; // ecx
  __m128i v22; // xmm6
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int128 *, unsigned __int64, __int64 *); // rdi
  bool v26; // cf
  int v27; // eax
  ULONG_PTR v28; // rbx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rcx
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  void **v37; // [rsp+68h] [rbp-A0h] BYREF
  __int32 v38; // [rsp+70h] [rbp-98h]
  unsigned int v39[4]; // [rsp+78h] [rbp-90h] BYREF
  __m128i v40; // [rsp+88h] [rbp-80h] BYREF
  __m128i v41; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-40h]
  int v44; // [rsp+D8h] [rbp-30h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v46; // [rsp+188h] [rbp+80h] BYREF
  __int128 v47; // [rsp+198h] [rbp+90h]
  _QWORD pExceptionObject[7]; // [rsp+1B0h] [rbp+A8h] BYREF
  void *retaddr; // [rsp+240h] [rbp+138h]

  v38 = a2;
  v12 = a6;
  LODWORD(v35) = a2;
  LODWORD(v37) = a3;
  LODWORD(v36) = a4;
  v39[0] = a6;
  v33 = a9;
  v13 = a8 & 1;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    sub_180011CC4(&v46, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v14 = sub_180011CC4(
            &v40,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v14, v15, (__int64)&v46, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *((_QWORD *)&v47 + 1) = 0LL;
  LODWORD(v46) = a3;
  *(_QWORD *)((char *)&v46 + 4) = a4;
  HIDWORD(v46) = 1;
  LODWORD(v47) = sub_1800C40D4(a6, a8);
  v16 = 0;
  v17 = &v40;
  do
  {
    v17->m128i_i32[0] = v16++;
    v17 = (__m128i *)((char *)v17 + 4);
  }
  while ( v16 < 4 );
  DWORD1(v47) = v40.m128i_i32[a7];
  if ( (unsigned int)(a7 - 2) <= 1 )
  {
    v18 = HIDWORD(v47) | 0x10000;
    HIDWORD(v47) |= 0x10000u;
    if ( a7 == 3 )
      HIDWORD(v47) = v18 | 0x20000;
  }
  if ( v13 )
    DWORD2(v47) |= 8u;
  v42 = v46;
  v43 = v47;
  v44 = 0;
  DWORD2(v42) = a5;
  v19 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 )
  {
    v20 = a3;
    if ( a3 < a4 )
      v20 = a4;
    v21 = 0;
    while ( v20 > 1 )
    {
      v20 >>= 1;
      ++v21;
    }
    HIDWORD(v42) = v21 != -1;
    v44 = 1;
    DWORD2(v43) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  v40.m128i_i64[0] = v33;
  v40.m128i_i32[2] = v38;
  v40.m128i_i32[3] = sub_1800C4AB0(v12, a3, a4, &v35);
  if ( v19 )
    *(_QWORD *)(a1 + 200) = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
  sub_180029258(a1, *(_QWORD *)(a1 + 200), (a8 & 6) != 0 ? 3 : 11);
  v41 = v40;
  v34 = 0LL;
  sub_180012A94(a1 + 72, &v40);
  v22 = v40;
  v23 = _mm_srli_si128(v40, 8).m128i_u64[0];
  sub_1800BC108(v40.m128i_i64[0], &v35);
  v24 = v35;
  v25 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned __int64, __int64 *))(*(_QWORD *)v35 + 48LL);
  sub_18000F938(&v34);
  v26 = v33 != 0;
  v33 = -v33;
  v27 = v25(v24, &v42, (unsigned __int64)&v41 & -(__int64)v26, &v34);
  v28 = v27;
  sub_1800BDDBC(v22.m128i_i64[0], v27);
  if ( (v28 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v28;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18000F938(&v35);
  if ( v23 )
    sub_180010EC8(_mm_srli_si128(v22, 8).m128i_i64[0]);
  sub_180052BCC(&v33, &v37, (int *)&v36, &a5, (int *)v39, (int *)&a8, &a7);
  sub_1800C3E50(a1, (unsigned int)&v36, v34, a8, HIDWORD(v42));
  sub_1800C1AD4((__int64 *)(a1 + 176), &v34);
  sub_1800C2AD8((__int64 *)(a1 + 160), &v36);
  v29 = sub_18001C514(16LL);
  if ( v29 )
  {
    v30 = HIDWORD(v42);
    v31 = v33;
    v33 = 0LL;
    *(_QWORD *)v29 = v31;
    *(_DWORD *)(v29 + 8) = v30;
    *(_DWORD *)(v29 + 12) = 1;
  }
  v37 = (void **)v29;
  sub_1800C253C((void ***)(a1 + 112), &v37);
  sub_1800531D0(&v37);
  sub_18000F938(&v36);
  sub_1800531F0((void **)&v33);
  return sub_18000F938(&v34);
}
