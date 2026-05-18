/*
 * XREFs of sub_18008B770 @ 0x18008B770
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000CE28 (_o_cosf.c)
 *     _o_sinf @ 0x18000CE94 (_o_sinf.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_18003C524 @ 0x18003C524 (sub_18003C524.c)
 *     sub_18003CF74 @ 0x18003CF74 (sub_18003CF74.c)
 *     sub_18006FB1C @ 0x18006FB1C (sub_18006FB1C.c)
 *     sub_18008B154 @ 0x18008B154 (sub_18008B154.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008B770(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  float *v4; // r10
  char v5; // r14
  bool v6; // r15
  int v7; // esi
  bool v8; // di
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  float v11; // xmm8_4
  int v12; // eax
  void (__fastcall *v13)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD); // rax
  float v14; // xmm6_4
  float v15; // xmm1_4
  __m128 v16; // xmm0
  float v17; // xmm8_4
  float v18; // xmm6_4
  __m128 v19; // xmm6
  unsigned int v20; // edi
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  float v23; // xmm4_4
  unsigned __int64 v25; // [rsp+58h] [rbp-49h] BYREF
  float v26; // [rsp+60h] [rbp-41h]
  __int64 v27; // [rsp+68h] [rbp-39h] BYREF
  __int64 v28; // [rsp+70h] [rbp-31h]
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  __int64 v30; // [rsp+90h] [rbp-11h]
  unsigned int v31; // [rsp+98h] [rbp-9h]

  v27 = 0xBF800000BF800000uLL;
  v29 = 0xBF800000BF800000uLL;
  v30 = 2LL;
  v31 = 0;
  sub_18006FB1C(a2 + 8, (__int64)&v29, (__int64)&v27);
  v5 = BYTE4(v30) & 1;
  v6 = (v30 & 0x400000000LL) != 0;
  v7 = BYTE4(v30) & 8;
  v8 = (_DWORD)v30 == 1;
  v9 = 0LL;
  if ( *(float *)&v27 == 0.0
    || *((float *)&v27 + 1) == 0.0
    || *(float *)&v29 == 0.0
    || (v10 = (__m128)HIDWORD(v29), *((float *)&v29 + 1) == 0.0) )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = (__m128)(unsigned int)v29;
    v9.m128_f32[0] = *(float *)&v29 - *(float *)&v27;
    v10.m128_f32[0] = *((float *)&v29 + 1) - *((float *)&v27 + 1);
  }
  v11 = *v4;
  if ( v5 && (_DWORD)v30 == 1 )
    goto LABEL_11;
  if ( (v30 & 0x400000000LL) != 0 )
  {
    if ( (_DWORD)v30 == 1 )
    {
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      goto LABEL_14;
    }
  }
  else if ( (_DWORD)v30 == 1 )
  {
    goto LABEL_14;
  }
  *(float *)(a1 + 1892) = v11 + *(float *)(a1 + 1892);
LABEL_14:
  v12 = *(_DWORD *)(a1 + 1868);
  if ( v12 == 1 )
  {
    v13 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 208LL);
  }
  else
  {
    if ( v12 != 2 )
      goto LABEL_22;
    if ( v7 && *(_BYTE *)(a1 + 1864) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v13 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, bool, bool, bool, _DWORD))(*(_QWORD *)a1 + 232LL);
  }
  LOBYTE(v3) = v5;
  v13(a1, _mm_unpacklo_ps(v9, v10).m128_u64[0], v31, v3, v6, v7 != 0, v8, LODWORD(v11));
LABEL_22:
  if ( *(_DWORD *)(a1 + 1868) )
  {
    *(float *)(a1 + 1876) = sub_18001205C(*(float *)(a1 + 1876), *(float *)(a1 + 1820), *(float *)(a1 + 1824));
    v14 = *(float *)(a1 + 1832);
    LODWORD(v15) = sub_18008B154(a1).m128_u32[0];
    v16 = (__m128)*(unsigned int *)(a1 + 1880);
    v16.m128_f32[0] = sub_18001205C(v16.m128_f32[0], v15, v14);
    *(_DWORD *)(a1 + 1880) = v16.m128_i32[0];
    v17 = *(float *)(a1 + 1872);
    v18 = *(float *)(a1 + 1876);
    o_cosf();
    o_cosf();
    *(float *)&v25 = v17 * v18;
    o_sinf();
    *((float *)&v25 + 1) = v18;
    o_sinf();
    v26 = v17 * v18;
    sub_18003C524(&v25);
    v19 = (__m128)*(unsigned __int64 *)(a1 + 1800);
    v20 = *(_DWORD *)(a1 + 1808);
    LODWORD(v28) = v20;
    v21 = _mm_mul_ps(_mm_movelh_ps((__m128)v25, (__m128)LODWORD(v26)), _mm_shuffle_ps(v16, v16, 0));
    v25 = 0LL;
    LODWORD(v26) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    v22 = 0LL;
    v22.m128_u64[0] = v21.m128_u64[0];
    v27 = 0LL;
    v16.m128_u64[0] = _mm_add_ps(_mm_movelh_ps(v19, (__m128)v20), _mm_movelh_ps(v22, (__m128)LODWORD(v26))).m128_u64[0];
    sub_180012A94(a1 + 56, &v27);
    v25 = v16.m128_u64[0];
    v26 = v23;
    sub_18003CF74(v27, (__int64)&v25);
    if ( v28 )
      sub_180010EC8(v28);
    sub_180012A94(a1 + 56, &v29);
    v25 = 0x3F80000000000000LL;
    v26 = 0.0;
    v27 = v19.m128_u64[0];
    LODWORD(v28) = v20;
    sub_18003BF34(v29, (unsigned __int64 *)&v27, (__int64)&v25);
    if ( v30 )
      sub_180010EC8(v30);
  }
  return sub_1800596B4(a1);
}
