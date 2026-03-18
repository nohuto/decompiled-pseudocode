/*
 * XREFs of InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C
 * Callers:
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801A9780 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18029287C (-Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180292984 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

void __fastcall InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        CExpressionValue *this)
{
  __m128i v5; // xmm6
  __m128i v6; // xmm6
  __int64 v7; // rdx
  ColorSpaceHelpers *v8; // rcx
  __m128i v9; // xmm6
  struct _D3DCOLORVALUE v10; // [rsp+38h] [rbp-69h] BYREF
  _OWORD v11[4]; // [rsp+48h] [rbp-59h] BYREF
  int v12; // [rsp+88h] [rbp-19h]
  _OWORD v13[4]; // [rsp+98h] [rbp-9h] BYREF
  int v14; // [rsp+D8h] [rbp+37h]

  v14 = 0;
  v12 = 0;
  v5 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v10, a1));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v13);
  v14 = 70;
  v13[0] = v5;
  v6 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v10, a2));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v11);
  v12 = 70;
  v11[0] = v6;
  KeyframeInterpolation::InterpolateHsl(v8, v7, (float *)v13, (float *)v11, this);
  v9 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                          &v10,
                                          (const struct _D3DCOLORVALUE *)this));
  CExpressionValue::DestroyCurrent(this);
  *((_DWORD *)this + 16) = 70;
  *(__m128i *)this = v9;
  CExpressionValue::DestroyCurrent((CExpressionValue *)v11);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v13);
}
