/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9998
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801A9560 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801A9780 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 * Callees:
 *     fmodf_0 @ 0x1802B9720 (fmodf_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_HSLAfromRGBA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  double v17; // xmm1_8

  v10 = fmaxf(fmaxf(v8, a2), a3);
  v11 = fminf(fminf(v8, a2), a3);
  v12 = v10 + v11;
  if ( v10 == v11 )
  {
    v13 = 0.0;
    v14 = 0.0;
    goto LABEL_3;
  }
  v15 = v10 - v11;
  if ( v10 == v8 )
  {
    v16 = fmodf_0((float)(a2 - a3) / v15, 6.0);
  }
  else
  {
    if ( v10 == a2 )
    {
      v17 = (float)((float)((float)(a3 - v8) / v15) + 2.0);
      goto LABEL_9;
    }
    v16 = (float)((float)(v8 - a2) / v15) + 4.0;
  }
  v17 = v16;
LABEL_9:
  v13 = v17 * 1.047197551196598;
  if ( v13 < 0.0 )
    v13 = v13 + 6.2831855;
  v14 = v15 / (float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm));
LABEL_3:
  *a5 = v13;
  *a6 = v14;
  *a7 = v12 * 0.5;
  *a8 = a4;
}
