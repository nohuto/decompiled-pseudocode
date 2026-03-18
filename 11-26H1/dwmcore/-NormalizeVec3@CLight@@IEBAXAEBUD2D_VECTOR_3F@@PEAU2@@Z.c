/*
 * XREFs of ?NormalizeVec3@CLight@@IEBAXAEBUD2D_VECTOR_3F@@PEAU2@@Z @ 0x180264974
 * Callers:
 *     ?SetDirection@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024ADD8 (-SetDirection@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F.c)
 *     ?SetDirection@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024AE64 (-SetDirection@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 *     ?CalcEyePointOrVector@CLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x1802644C8 (-CalcEyePointOrVector@CLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

void __fastcall CLight::NormalizeVec3(CLight *this, const struct D2D_VECTOR_3F *a2, struct D2D_VECTOR_3F *a3)
{
  float x; // xmm6_4
  float v6; // xmm3_4

  x = a2->x;
  v6 = sqrtf_0((float)((float)(a2->y * a2->y) + (float)(x * x)) + (float)(a2->z * a2->z));
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 0.0000011920929 )
    v6 = FLOAT_1_0;
  a3->x = x / v6;
  a3->y = a2->y / v6;
  a3->z = a2->z / v6;
}
