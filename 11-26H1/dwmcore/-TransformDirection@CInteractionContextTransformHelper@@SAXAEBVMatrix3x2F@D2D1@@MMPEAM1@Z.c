/*
 * XREFs of ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x180116C90
 * Callers:
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1801161F0 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformDirection(
        const struct D2D1::Matrix3x2F *a1,
        float a2,
        float a3,
        float *a4,
        float *a5)
{
  float *v5; // rcx
  float *v6; // r9
  float v7; // xmm6_4
  float v8; // xmm3_4

  if ( D2D1::Matrix3x2F::IsIdentity(a1) )
  {
    v7 = a3;
    v8 = a2;
  }
  else
  {
    v7 = (float)((float)((float)(v5[3] * a3) + (float)(v5[1] * a2)) + v5[5])
       - (float)((float)((float)(v5[3] * 0.0) + (float)(v5[1] * 0.0)) + v5[5]);
    v8 = (float)((float)((float)(v5[2] * a3) + (float)(*v5 * a2)) + v5[4])
       - (float)((float)((float)(v5[2] * 0.0) + (float)(*v5 * 0.0)) + v5[4]);
  }
  *v6 = v8;
  *a5 = v7;
}
