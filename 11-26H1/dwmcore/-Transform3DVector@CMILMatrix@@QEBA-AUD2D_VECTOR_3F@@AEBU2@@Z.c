/*
 * XREFs of ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x180190198
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 *     ?GetSceneLightRealization@CDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18026D1A0 (-GetSceneLightRealization@CDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z.c)
 *     ?GetSceneLightRealization@CSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180282460 (-GetSceneLightRealization@CSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CMILMatrix::Transform3DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_3F *__return_ptr retstr,
        const struct D2D_VECTOR_3F *a3)
{
  struct D2D_VECTOR_3F *result; // rax
  float v4; // xmm3_4
  float z; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm5_4

  result = retstr;
  v4 = (float)(a3->y * *((float *)this + 5)) + (float)(a3->x * *((float *)this + 1));
  z = a3->z;
  v6 = z * *((float *)this + 10);
  v7 = z * *((float *)this + 9);
  v8 = (float)(a3->y * *((float *)this + 6)) + (float)(a3->x * *((float *)this + 2));
  retstr->x = (float)((float)(a3->y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
            + (float)(a3->z * *((float *)this + 8));
  retstr->y = v4 + v7;
  retstr->z = v8 + v6;
  return result;
}
