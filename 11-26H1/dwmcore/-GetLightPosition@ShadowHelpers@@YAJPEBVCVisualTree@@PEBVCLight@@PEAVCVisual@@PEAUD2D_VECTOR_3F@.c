/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801D5068 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Found.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x1801D51B8 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180212C0C (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCLight@@PEAVCVisual@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z @ 0x18027E228 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CLight *a3,
        FLOAT *a4)
{
  unsigned int v8; // ebx
  struct CVisual *v9; // rax
  struct CVisual *v10; // r14
  int v11; // eax
  __int64 v12; // rax
  FLOAT v13; // xmm1_4
  FLOAT y; // xmm1_4
  FLOAT z; // xmm2_4
  int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm7_4
  __int64 (__fastcall *v19)(const struct CVisualTree *); // rax
  float v20; // xmm8_4
  float *v21; // rax
  FLOAT v22; // xmm8_4
  FLOAT v23; // xmm7_4
  __m128 v24; // xmm0
  struct D2D_VECTOR_4F v26; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v27; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v28[3]; // [rsp+58h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+98h] [rbp-70h]
  _OWORD v31[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v32; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v9 = (struct CVisual *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 208LL))(a2);
  v32 = 0;
  v10 = v9;
  if ( a3 == v9 )
  {
    v31[0] = _mm_load_si128((const __m128i *)&_xmm);
    v31[1] = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v32) = BYTE1(v32) & 0xC0 | 0x29;
    v31[2] = _mm_load_si128((const __m128i *)&_xmm);
    v31[3] = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v32) = -86;
  }
  else
  {
    v11 = CVisual::CalcSrcToDestVisualTransform(this, v9, a3, (struct CMILMatrix *)v31);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x5Bu, 0LL);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2) == 2 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL))(a2);
    v26.w = 1.0;
    v13 = *(float *)(v12 + 4);
    v26.x = *(FLOAT *)v12;
    v26.z = *(FLOAT *)(v12 + 8);
    v26.y = v13;
    CMILMatrix::Transform4DVector((CMILMatrix *)v31, &v27, &v26);
    y = v27.y;
    z = v27.z;
    *a4 = v27.x;
  }
  else
  {
    v30 = 0;
    if ( a3 == v10 )
    {
      v28[0] = _mm_load_si128((const __m128i *)&_xmm);
      v28[1] = _mm_load_si128((const __m128i *)&_xmm);
      BYTE1(v30) = BYTE1(v30) & 0xC0 | 0x29;
      v28[2] = _mm_load_si128((const __m128i *)&_xmm);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v30) = -86;
    }
    else
    {
      v16 = CVisual::CalcSrcToDestVisualTransform(this, a3, v10, (struct CMILMatrix *)v28);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x73u, 0LL);
        return v8;
      }
    }
    v17 = *(float *)si128.m128i_i32;
    v18 = *(float *)&si128.m128i_i32[1];
    v19 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 240LL);
    v20 = *(float *)&si128.m128i_i32[2];
    LODWORD(v26.w) = si128.m128i_i32[3];
    v21 = (float *)v19(a2);
    v22 = v20 - (float)(v21[2] * 100.0);
    v23 = v18 - (float)(v21[1] * 100.0);
    v26.x = v17 - (float)(*v21 * 100.0);
    v26.z = v22;
    v26.y = v23;
    v24 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v31, &v27, &v26));
    *a4 = v24.m128_f32[0];
    LODWORD(y) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    LODWORD(z) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  }
  a4[1] = y;
  a4[2] = z;
  return v8;
}
