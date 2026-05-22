/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800670B0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800674C4 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006755C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  struct MPCHolographicInputContext *v3; // r10
  float v5; // ecx
  int v6; // eax
  float v7; // r11d
  __int64 v8; // xmm0_8
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  __m128 v12; // xmm13
  __m128 v13; // xmm14
  __m128 v14; // xmm15
  __m128 v15; // xmm4
  float v16; // xmm12_4
  float v17; // xmm11_4
  float v18; // xmm10_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm2_4
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r10
  int v33; // r11d
  int v34; // xmm1_4
  float *v35; // r9
  int v36; // xmm1_4
  float v37; // xmm1_4
  __int64 v38; // [rsp+28h] [rbp-89h] BYREF
  float v39; // [rsp+30h] [rbp-81h]
  __int64 v40; // [rsp+38h] [rbp-79h] BYREF
  int v41; // [rsp+40h] [rbp-71h]
  __int64 v42; // [rsp+48h] [rbp-69h] BYREF
  int v43; // [rsp+50h] [rbp-61h]
  __int128 v44; // [rsp+58h] [rbp-59h] BYREF
  float v45; // [rsp+118h] [rbp+67h]
  float v46; // [rsp+120h] [rbp+6Fh]

  v3 = a2;
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 20) = *((_DWORD *)a3 + 567);
  *((_DWORD *)a3 + 21) = *((_DWORD *)this + 1036);
  if ( *((_BYTE *)a3 + 2492) && *((_BYTE *)a3 + 2493) )
  {
    *((_BYTE *)this + 10777) = 1;
    v42 = *((_QWORD *)a3 + 310);
    v9 = *((float *)&v42 + 1);
    v10 = *(float *)&v42;
    v39 = *((float *)a3 + 622);
    v46 = v39;
    v30 = *((_OWORD *)a3 + 154);
    v40 = 0LL;
    v38 = v42;
    v44 = v30;
    v41 = -1082130432;
    v45 = *((float *)&v42 + 1);
    v31 = Windows::Foundation::Numerics::transform(&v42, &v40, &v44, a3);
    v33 = *(_DWORD *)(v31 + 8);
    v40 = *(_QWORD *)v31;
    v41 = v33;
    Windows::Foundation::Numerics::transform((float *)&v42, (float *)&v38, (float *)(v32 + 16));
    Windows::Foundation::Numerics::transform_normal(&v38, &v40);
    v34 = HIDWORD(v42);
    v11 = v46;
    *((_DWORD *)v35 + 30) = v42;
    LODWORD(v30) = v43;
    *((_DWORD *)v35 + 31) = v34;
    v36 = v38;
    *((_DWORD *)v35 + 32) = v30;
    LODWORD(v30) = HIDWORD(v38);
    *((_DWORD *)v35 + 33) = v36;
    v37 = v39;
    *((_DWORD *)v35 + 34) = v30;
    v35[35] = v37;
  }
  else
  {
    *((_BYTE *)this + 10777) = 0;
    *((_BYTE *)a3 + 48) = 1;
    v5 = *((float *)a2 + 38);
    v6 = *((_DWORD *)a2 + 42);
    v7 = *((float *)a2 + 41);
    v38 = *((_QWORD *)a2 + 18);
    v8 = *(_QWORD *)((char *)a2 + 156);
    v9 = *((float *)&v38 + 1);
    v10 = *(float *)&v38;
    *((_DWORD *)a3 + 30) = v6;
    *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 43);
    *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 44);
    *((_DWORD *)a3 + 33) = *((_DWORD *)a2 + 45);
    *((_DWORD *)a3 + 34) = *((_DWORD *)a2 + 46);
    *((_DWORD *)a3 + 35) = *((_DWORD *)a2 + 47);
    v45 = v9;
    v40 = v8;
    v11 = v5;
  }
  v12 = *(__m128 *)((char *)v3 + 3144);
  v13 = *(__m128 *)((char *)v3 + 3160);
  v14 = *(__m128 *)((char *)v3 + 3176);
  v15 = *(__m128 *)((char *)v3 + 3192);
  v16 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v17 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v18 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  v19 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v20 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
  v21 = (float)((float)(v16 * v10) + (float)(v17 * v9)) + (float)(v18 * v11);
  v22 = v9 * v20;
  v23 = _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
  *((float *)this + 1056) = (float)((float)((float)(v12.m128_f32[0] * v10) + (float)(v13.m128_f32[0] * v45))
                                  + (float)(v14.m128_f32[0] * v11))
                          + v15.m128_f32[0];
  *((float *)this + 1057) = v21 + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  *((float *)this + 1058) = (float)((float)((float)(v10 * v19) + v22) + (float)(v11 * v23))
                          + _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
  v24 = (float)((float)(*(float *)&v40 * v16) + (float)(*((float *)&v40 + 1) * v17)) + (float)(v7 * v18);
  v25 = (float)((float)(*(float *)&v40 * v19) + (float)(*((float *)&v40 + 1) * v20)) + (float)(v7 * v23);
  *((float *)this + 1059) = (float)((float)(*(float *)&v40 * v12.m128_f32[0])
                                  + (float)(*((float *)&v40 + 1) * v13.m128_f32[0]))
                          + (float)(v7 * v14.m128_f32[0]);
  *((float *)this + 1060) = v24;
  *((float *)this + 1061) = v25;
  v26 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4236), (__m128)*((unsigned int *)this + 1061));
  v27 = _mm_mul_ps(v26, v26);
  v28 = _mm_shuffle_ps(v27, v27, 102);
  v27.m128_f32[0] = (float)(v27.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  v29 = _mm_div_ps(v26, _mm_sqrt_ps(_mm_shuffle_ps(v27, v27, 0)));
  *(_QWORD *)((char *)this + 4236) = v29.m128_u64[0];
  *((_DWORD *)this + 1061) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
}
