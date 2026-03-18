/*
 * XREFs of ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x1801D51B8
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800D5A50 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x1801A2BEC (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CProjectedShadowScene::IsShadowInFrontOfReceiver(
        CProjectedShadowScene *this,
        ShadowHelpers **a2,
        __m128 *a3)
{
  const struct CVisualTree *v3; // rsi
  const struct CLight *v6; // rax
  int LightPosition; // eax
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm1_4
  __int64 v19; // [rsp+28h] [rbp-49h] BYREF
  float v20; // [rsp+30h] [rbp-41h]
  __m128 v21[2]; // [rsp+38h] [rbp-39h] BYREF
  __m128 v22; // [rsp+58h] [rbp-19h]
  __m128 v23; // [rsp+68h] [rbp-9h]
  __int32 v24; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v3 = (const struct CVisualTree *)*((_QWORD *)this + 13);
  v19 = 0LL;
  v20 = 0.0;
  v6 = (const struct CLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 208LL))(v3);
  LightPosition = ShadowHelpers::GetLightPosition(a2[993], v3, v6, (struct CVisual *)&v19, 0LL);
  if ( LightPosition >= 0 )
  {
    v11 = a3[2];
    v12 = a3[3];
    v24 = a3[6].m128_i32[0];
    v21[0] = v11;
    v13 = a3[4];
    v21[1] = v12;
    v14 = a3[5];
    v22 = v13;
    v23 = v14;
    CMILMatrix::Invert((CMILMatrix *)v21, v8, v9);
    CMILMatrix::Transpose(v21);
    v15 = *(float *)&v19;
    v16 = *((float *)&v19 + 1);
    v17 = v20;
    if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 224LL))(v3) == 2 )
    {
      v15 = v15 - (float)(a3[5].m128_f32[0] / a3[5].m128_f32[3]);
      v16 = v16 - (float)(a3[5].m128_f32[1] / a3[5].m128_f32[3]);
      v17 = v17 - (float)(a3[5].m128_f32[2] / a3[5].m128_f32[3]);
    }
    v18 = v22.m128_f32[2];
    if ( (float)((float)((float)(v15 * v22.m128_f32[0]) + (float)(v16 * v22.m128_f32[1]))
               + (float)(v22.m128_f32[2] * v17)) <= 0.0 )
      LODWORD(v18) = v22.m128_i32[2] ^ _xmm;
    return v18 > 0.0;
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3B4,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadowscene.cpp",
      (const char *)(unsigned int)LightPosition,
      v19);
    return 0;
  }
}
