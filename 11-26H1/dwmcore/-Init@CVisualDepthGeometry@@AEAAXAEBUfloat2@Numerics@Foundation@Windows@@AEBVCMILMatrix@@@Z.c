/*
 * XREFs of ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1800CF8C4
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1800CF6B0 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1800D0184 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1800D03C0 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CVisualDepthGeometry::Init(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  float v3; // xmm2_4
  __int32 v4; // xmm3_4
  float v6; // xmm1_4
  float *v7; // r9
  __int64 v8; // rdx
  float *v9; // rax
  FLOAT *p_y; // rcx
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  int v14; // r10d
  __int64 v15; // r11
  float *v16; // r8
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // edx
  float v20; // xmm0_4
  float v21; // xmm1_4
  const __m128i *v22; // rax
  __int64 v23; // rcx
  __m128 v24; // xmm2
  float v25; // xmm3_4
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  __m128i si128; // [rsp+28h] [rbp-59h] BYREF
  float v33; // [rsp+38h] [rbp-49h]
  __int64 v34; // [rsp+3Ch] [rbp-45h]
  int v35; // [rsp+44h] [rbp-3Dh]
  float v36; // [rsp+48h] [rbp-39h]
  float v37; // [rsp+4Ch] [rbp-35h]
  int v38; // [rsp+50h] [rbp-31h]
  __int64 v39; // [rsp+54h] [rbp-2Dh]
  float v40; // [rsp+5Ch] [rbp-25h]
  int v41; // [rsp+60h] [rbp-21h]
  int v42; // [rsp+64h] [rbp-1Dh]
  _BYTE v43[16]; // [rsp+68h] [rbp-19h] BYREF
  struct D2D_VECTOR_4F v44; // [rsp+78h] [rbp-9h] BYREF
  struct D2D_VECTOR_4F v45; // [rsp+88h] [rbp+7h] BYREF
  struct D2D_VECTOR_4F v46; // [rsp+98h] [rbp+17h] BYREF

  v3 = *(float *)a2;
  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(*(_DWORD *)a2 & v4) < 0.0000011920929 )
    v3 = FLOAT_1_0;
  v6 = *((float *)a2 + 1);
  if ( COERCE_FLOAT(LODWORD(v6) & v4) < 0.0000011920929 )
    v6 = FLOAT_1_0;
  v33 = v3;
  v36 = v3;
  v37 = v6;
  v40 = v6;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v34 = 0LL;
  v35 = 1065353216;
  v38 = 0;
  v39 = 1065353216LL;
  v41 = 0;
  v42 = 1065353216;
  CMILMatrix::Transform(a3, (const struct D2D_POINT_4F *)&si128, (struct D2D_POINT_4F *)&v44, 4u);
  v7 = (float *)((char *)this + 40);
  v8 = 4LL;
  v9 = (float *)((char *)this + 40);
  p_y = &v44.y;
  do
  {
    v11 = *p_y;
    v12 = p_y[1];
    v13 = 1.0 / p_y[2];
    p_y += 4;
    *(v9 - 1) = v13 * *(p_y - 5);
    *v9 = v13 * v11;
    v9[1] = v13 * v12;
    v9 += 3;
    --v8;
  }
  while ( v8 );
  v14 = 1;
  v15 = 4LL;
  v16 = (float *)((char *)this + 92);
  do
  {
    v17 = *(v7 - 1);
    v18 = *v7;
    v19 = v14 % 4;
    ++v14;
    v7 += 3;
    v20 = *((float *)this + 3 * v19 + 10);
    v21 = *((float *)this + 3 * v19 + 9) - v17;
    *(v16 - 2) = v17;
    *(v16 - 1) = v18;
    *v16 = v21;
    v16[1] = v20 - v18;
    v16 += 4;
    --v15;
  }
  while ( v15 );
  v22 = (const __m128i *)D2DVectorHelper::CalculatePlane(
                           (D2DVectorHelper *)v43,
                           &v44,
                           &v45,
                           &v46,
                           (const struct D2D_VECTOR_4F *)si128.m128i_i64[0]);
  v23 = 3LL;
  v24 = (__m128)_mm_loadu_si128(v22);
  *((_DWORD *)this + 40) = v24.m128_i32[0];
  *((_DWORD *)this + 41) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  *((_DWORD *)this + 42) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  *((_DWORD *)this + 43) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
  v24.m128_f32[0] = (float)((float)(*((float *)this + 11) + *((float *)this + 14)) + *((float *)this + 17))
                  + *((float *)this + 20);
  v25 = (float)((float)((float)(*((float *)this + 10) + *((float *)this + 13)) + *((float *)this + 16))
              + *((float *)this + 19))
      * 0.25;
  *((float *)this + 37) = (float)((float)((float)(*((float *)this + 12) + *((float *)this + 9)) + *((float *)this + 15))
                                + *((float *)this + 18))
                        * 0.25;
  *((float *)this + 38) = v25;
  *((float *)this + 39) = v24.m128_f32[0] * 0.25;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 4) = *((_DWORD *)this + 11);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 7) = *((_DWORD *)this + 11);
  v26 = (float *)((char *)this + 52);
  do
  {
    v27 = fminf(*((float *)this + 3), *v26);
    v28 = fminf(*((float *)this + 4), v26[1]);
    *((float *)this + 2) = fminf(*((float *)this + 2), *(v26 - 1));
    *((float *)this + 3) = v27;
    *((float *)this + 4) = v28;
    v29 = fmaxf(*((float *)this + 5), *(v26 - 1));
    v30 = fmaxf(*((float *)this + 6), *v26);
    v31 = fmaxf(*((float *)this + 7), v26[1]);
    v26 += 3;
    *((float *)this + 5) = v29;
    *((float *)this + 6) = v30;
    *((float *)this + 7) = v31;
    --v23;
  }
  while ( v23 );
  *((_DWORD *)this + 8) = -1;
}
