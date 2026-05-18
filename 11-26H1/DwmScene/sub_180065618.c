/*
 * XREFs of sub_180065618 @ 0x180065618
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003CD04 @ 0x18003CD04 (sub_18003CD04.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18005A88C @ 0x18005A88C (sub_18005A88C.c)
 *     sub_180060250 @ 0x180060250 (sub_180060250.c)
 *     sub_180067B18 @ 0x180067B18 (sub_180067B18.c)
 *     sub_18006A7FC @ 0x18006A7FC (sub_18006A7FC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_UNKNOWN **__fastcall sub_180065618(__int64 a1, _QWORD *a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  __m128 v11; // xmm6
  __m128 v12; // xmm7
  int v13; // xmm8_4
  __m128 v14; // xmm0
  float v15; // xmm10_4
  __int64 v16; // rsi
  __m128 v17; // xmm2
  double v18; // xmm0_8
  double v19; // xmm0_8
  __m128 v20; // xmm1
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm3
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __m128 v28; // xmm9
  __int64 v29; // rsi
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // r8
  unsigned __int64 v33; // [rsp+28h] [rbp-59h] BYREF
  __int64 v34; // [rsp+30h] [rbp-51h]
  __m128i si128; // [rsp+38h] [rbp-49h] BYREF
  __int128 v36; // [rsp+48h] [rbp-39h] BYREF
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h]
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v7 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = sub_180012C40(&v37, a2);
    result = (_UNKNOWN **)sub_180033B20(a1, &v39, v9, v8);
    v10 = v39;
    if ( (*(_DWORD *)(v39 + 440) & 0x2000000) != 0 )
    {
      sub_180060250(&v37, &v39);
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_180191660);
      v14 = 0LL;
      v36 = 0LL;
      sub_180012A94(v10 + 56, &v33);
      sub_180011F5C(&v36, (__int64 *)&v33);
      if ( v34 )
        sub_180010EC8(v34);
      v15 = *(float *)(v10 + 328);
      v16 = v36;
      if ( (_QWORD)v36 )
      {
        sub_18003D718(v36);
        v33 = *(_QWORD *)(v16 + 144);
        v11 = (__m128)(unsigned int)v33;
        v12 = (__m128)HIDWORD(v33);
        v13 = *(_DWORD *)(v16 + 152);
        sub_18003D718(v16);
        v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 156));
        si128.m128i_i32[0] = v17.m128_i32[0];
        v14 = _mm_shuffle_ps(v17, v17, 85);
        si128.m128i_i32[1] = v14.m128_i32[0];
        si128.m128i_i32[2] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        si128.m128i_i32[3] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
      }
      if ( sub_18006A7FC(a3, &unk_1801CB5D8) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB5D8);
        v11 = v14;
      }
      if ( sub_18006A7FC(a3, &unk_1801CB5F8) )
      {
        *(double *)v14.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB5F8);
        v12 = v14;
      }
      if ( sub_18006A7FC(a3, &unk_1801CB618) )
      {
        v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB618);
        v13 = LODWORD(v18);
      }
      if ( sub_18006A7FC(a3, &unk_1801CB638) )
        si128.m128i_i32[0] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB638);
      if ( sub_18006A7FC(a3, &unk_1801CB658) )
        si128.m128i_i32[1] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB658);
      if ( sub_18006A7FC(a3, &unk_1801CB678) )
        si128.m128i_i32[2] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB678);
      if ( sub_18006A7FC(a3, &unk_1801CB698) )
        si128.m128i_i32[3] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB698);
      if ( sub_18006A7FC(a3, &unk_1801CB5B8) )
      {
        v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB5B8);
        v15 = *(float *)&v19;
      }
      v20 = _mm_mul_ps((__m128)si128, (__m128)si128);
      v21 = _mm_shuffle_ps(v20, v20, 238);
      v22 = _mm_add_ps(v21, v20);
      v23 = _mm_shuffle_ps(v22, v22, 64);
      v24 = _mm_add_ps(_mm_shuffle_ps(v21, v23, 240), v23);
      v25 = _mm_shuffle_ps(v24, v24, 170);
      v26 = _mm_sqrt_ps(v25);
      v27 = _mm_cmpneq_ps((__m128)xmmword_1800FA100, v25);
      v28 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps((__m128)si128, v26), _mm_cmpneq_ps(v26, (__m128)0LL)), v27),
              _mm_andnot_ps(v27, (__m128)xmmword_1800FA150));
      result = (_UNKNOWN **)sub_18005A88C(v10, v15);
      if ( v16 )
      {
        v33 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        LODWORD(v34) = v13;
        sub_180013E60(v16, &v33);
        si128 = (__m128i)v28;
        result = (_UNKNOWN **)sub_18003CD04(v16, &si128);
      }
      v29 = v37;
      if ( v37 )
      {
        if ( sub_18006A7FC(a3, &unk_1801CB958) )
          *(float *)(v29 + 1876) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB958)
                                 * 0.017453292;
        if ( sub_18006A7FC(a3, &unk_1801CB938) )
          *(float *)(v29 + 1872) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB938)
                                 * 0.017453292;
        if ( sub_18006A7FC(a3, &unk_1801CB978) )
          *(float *)(v29 + 1880) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB978);
        if ( sub_18006A7FC(a3, &unk_1801CB758) )
          *(float *)(v29 + 1848) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB758);
        if ( sub_18006A7FC(a3, &unk_1801CB778) )
          *(float *)(v29 + 1844) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB778);
        if ( sub_18006A7FC(a3, &unk_1801CB7B8) )
        {
          v30 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB7B8);
          *(float *)(v29 + 1824) = sub_18001205C(v30 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18006A7FC(a3, &unk_1801CB7D8) )
        {
          v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB7D8);
          *(float *)(v29 + 1820) = sub_18001205C(v31 * 0.017453292, -1.5533431, 1.5533431);
        }
        if ( sub_18006A7FC(a3, &unk_1801CB798) )
          *(float *)(v29 + 1840) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB798)
                                 * 0.017453292;
        if ( sub_18006A7FC(a3, &unk_1801CB7F8) )
          *(float *)(v29 + 1852) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB7F8)
                                 * 0.017453292;
        if ( sub_18006A7FC(a3, &unk_1801CB818) )
          *(float *)(v29 + 1856) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB818);
        if ( sub_18006A7FC(a3, &unk_1801CB838) )
          *(float *)(v29 + 1860) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB838);
        if ( sub_18006A7FC(a3, &unk_1801CB858) )
          *(float *)(v29 + 1828) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB858);
        if ( sub_18006A7FC(a3, &unk_1801CB878) )
          *(float *)(v29 + 1832) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB878);
        if ( sub_18006A7FC(a3, &unk_1801CB738) )
          *(_DWORD *)(v29 + 1868) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801CB738,
                                      0LL);
        if ( sub_18006A7FC(a3, &unk_1801CB898) )
          *(_DWORD *)(v29 + 1816) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(
                                      v7,
                                      &unk_1801CB898,
                                      0LL);
        if ( sub_18006A7FC(a3, &unk_1801CB8D8) )
          *(_BYTE *)(v29 + 1864) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(
                                     v7,
                                     &unk_1801CB8D8,
                                     0LL);
        sub_18006A7FC(a3, &unk_1801CB9D8);
        LOBYTE(v32) = sub_18006A7FC(a3, &unk_1801CB8B8) != 0;
        result = (_UNKNOWN **)sub_180067B18(a1, &v37, v32);
      }
      if ( *((_QWORD *)&v36 + 1) )
        result = (_UNKNOWN **)sub_180010EC8(*((__int64 *)&v36 + 1));
      if ( v38 )
        result = (_UNKNOWN **)sub_180010EC8(v38);
    }
    if ( v40 )
      return (_UNKNOWN **)sub_180010EC8(v40);
  }
  return result;
}
