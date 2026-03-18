/*
 * XREFs of ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1800D03C0
 * Callers:
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1800CF100 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x1800CF8C4 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801B7894 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::CalculatePlane(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float y; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float z; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float x; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  struct D2D_VECTOR_4F *result; // rax
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm0_4

  y = a3->y;
  v7 = a4->y - y;
  v8 = y - retstr->y;
  z = a3->z;
  v10 = a4->z - z;
  v11 = z - retstr->z;
  v12 = a4->x - a3->x;
  x = retstr->x;
  v14 = (float)(v8 * v10) - (float)(v11 * v7);
  v15 = (float)((float)(a3->x - retstr->x) * v7) - (float)(v8 * v12);
  v16 = (float)(v11 * v12) - (float)((float)(a3->x - retstr->x) * v10);
  v17 = sqrtf_0((float)((float)(v16 * v16) + (float)(v14 * v14)) + (float)(v15 * v15));
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) < 0.0000011920929 )
    v17 = FLOAT_1_0;
  v18 = v16;
  result = this;
  v20 = (float)(v16 * retstr->y) + (float)(x * v14);
  this->x = v14 / v17;
  v21 = v20 + (float)(v15 * retstr->z);
  this->z = v15 / v17;
  v22 = retstr->w * 0.0;
  this->y = v18 / v17;
  this->w = COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 + v22) ^ _xmm) / v17;
  return result;
}
