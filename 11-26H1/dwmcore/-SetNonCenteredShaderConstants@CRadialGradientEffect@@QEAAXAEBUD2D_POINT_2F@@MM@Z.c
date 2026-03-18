/*
 * XREFs of ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802B3820
 * Callers:
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18027EC20 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRadialGradientEffect::SetNonCenteredShaderConstants(
        CRadialGradientEffect *this,
        const struct D2D_POINT_2F *a2,
        float a3,
        float a4)
{
  float x; // xmm5_4
  float v5; // xmm4_4
  float y; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm6_4

  x = a2->x;
  v5 = a4 / a3;
  if ( a2->x != *((float *)this + 11) || a2->y != *((float *)this + 12) || v5 != *((float *)this + 9) )
  {
    y = a2->y;
    v7 = FLOAT_1_0;
    *((float *)this + 9) = v5;
    v8 = 1.0 - (float)(0.5 / a4);
    v9 = v8 * y;
    v10 = v8 * x;
    if ( (float)((float)(v5 * v5) - 0.000001) <= (float)((float)(y * y) + (float)(x * x)) )
      v7 = FLOAT_N1_0;
    *((float *)this + 10) = v7;
    *(struct D2D_POINT_2F *)((char *)this + 44) = *a2;
    *((float *)this + 13) = v10;
    *((float *)this + 14) = v9;
    ++*((_DWORD *)this + 6);
  }
}
