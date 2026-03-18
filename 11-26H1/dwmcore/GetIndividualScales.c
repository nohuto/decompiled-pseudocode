/*
 * XREFs of GetIndividualScales @ 0x1801C18A8
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1801C14AC (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

__int64 __fastcall GetIndividualScales(float *a1, float *a2, float *a3)
{
  float v4; // xmm6_4
  float v6; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm0_4

  v4 = *a1;
  v6 = a1[2];
  v8 = sqrtf_0((float)(v6 * v6) + (float)(v4 * v4));
  *a2 = v8;
  if ( v8 == 0.0 )
    return 2147942487LL;
  v9 = v6 / v8;
  v10 = v4 / v8;
  v11 = (float)(a1[3] * v9) + (float)(a1[1] * v10);
  v12 = sqrtf_0(
          (float)((float)(a1[3] - (float)(v11 * v9)) * (float)(a1[3] - (float)(v11 * v9)))
        + (float)((float)(a1[1] - (float)(v11 * v10)) * (float)(a1[1] - (float)(v11 * v10))));
  *a3 = v12;
  if ( v12 == 0.0 )
    return 2147942487LL;
  else
    return 0LL;
}
