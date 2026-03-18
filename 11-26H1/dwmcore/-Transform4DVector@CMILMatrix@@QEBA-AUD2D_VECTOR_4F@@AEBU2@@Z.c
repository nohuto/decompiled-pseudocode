/*
 * XREFs of ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180121FE0
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@.c)
 *     ?GetSceneLightRealization@CPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18027D500 (-GetSceneLightRealization@CPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z.c)
 *     ?GetSceneLightRealization@CSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180282460 (-GetSceneLightRealization@CSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180121EF0 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CMILMatrix::Transform4DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3)
{
  float w; // xmm7_4
  float v5; // xmm6_4
  float z; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  FLOAT v11; // xmm6_4
  float *v12; // r10
  float *v13; // r11
  float v14; // xmm2_4

  retstr->w = 0.0;
  w = a3->w;
  v5 = a3->y * *((float *)this + 6);
  z = a3->z;
  v7 = z * *((float *)this + 10);
  v8 = z * *((float *)this + 9);
  v9 = a3->x * *((float *)this + 2);
  v10 = (float)(a3->y * *((float *)this + 5)) + (float)(a3->x * *((float *)this + 1));
  retstr->x = (float)((float)((float)(a3->y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
                    + (float)(a3->z * *((float *)this + 8)))
            + (float)(w * *((float *)this + 12));
  v11 = (float)((float)(v5 + v9) + v7) + (float)(w * *((float *)this + 14));
  retstr->y = (float)(v10 + v8) + (float)(w * *((float *)this + 13));
  retstr->z = v11;
  if ( CMILMatrix::IsAffine<1>((__int64)this, 0) )
    v14 = FLOAT_1_0;
  else
    v14 = (float)((float)((float)(v12[3] * *v13) + (float)(v12[7] * v13[1])) + (float)(v12[11] * v13[2]))
        + (float)(v12[15] * v13[3]);
  retstr->w = v14;
  return retstr;
}
