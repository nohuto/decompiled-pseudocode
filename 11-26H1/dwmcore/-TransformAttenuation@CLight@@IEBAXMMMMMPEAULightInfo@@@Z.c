/*
 * XREFs of ?TransformAttenuation@CLight@@IEBAXMMMMMPEAULightInfo@@@Z @ 0x180264D6C
 * Callers:
 *     ?GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18027D3B0 (-GetLightInfo@CPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180282250 (-GetLightInfo@CSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLight::TransformAttenuation(
        CLight *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        struct LightInfo *a7)
{
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm4_4

  v7 = 0.0;
  if ( a2 >= 0.0 )
    v8 = fminf(25500.0, a2);
  else
    v8 = 0.0;
  v9 = a3 * 0.0099999998;
  *((float *)a7 + 15) = v8;
  if ( v9 >= 0.0 )
    v10 = fminf(25500.0, v9);
  else
    v10 = 0.0;
  v11 = a4 * 0.000099999997;
  *((float *)a7 + 16) = v10;
  if ( v11 >= 0.0 )
    v12 = fminf(25500.0, v11);
  else
    v12 = 0.0;
  *((float *)a7 + 17) = v12;
  if ( a5 < a6 )
    v7 = 1.0 / (float)(a6 - a5);
  *((float *)a7 + 25) = v7;
  *((float *)a7 + 24) = COERCE_FLOAT(LODWORD(a5) ^ _xmm) * v7;
}
