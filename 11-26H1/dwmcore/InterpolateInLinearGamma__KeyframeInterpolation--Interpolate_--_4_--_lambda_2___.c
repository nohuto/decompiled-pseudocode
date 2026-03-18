/*
 * XREFs of InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C
 * Callers:
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E560 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18004EE50 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18029287C (-Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180292984 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

void __fastcall InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        CExpressionValue *this,
        __int64 a4)
{
  __m128i v7; // xmm6
  __m128i v8; // xmm6
  int v9; // ecx
  float v10; // xmm1_4
  __m128i v11; // xmm6
  struct _D3DCOLORVALUE v12; // [rsp+38h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+48h] [rbp-59h] BYREF
  int v14; // [rsp+88h] [rbp-19h]
  __m128 v15[4]; // [rsp+98h] [rbp-9h] BYREF
  int v16; // [rsp+D8h] [rbp+37h]

  v16 = 0;
  v14 = 0;
  v7 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v12, a1));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v15);
  v16 = 70;
  v15[0] = (__m128)v7;
  v8 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_sRGB_To_D2D_COLOR_F_scRGB(&v12, a2));
  CExpressionValue::DestroyCurrent((CExpressionValue *)v13);
  v9 = *(_DWORD *)(a4 + 8);
  v10 = *(double *)a4;
  v14 = 70;
  v13[0] = v8;
  KeyframeInterpolation::ExpressionValueLerp(v9, v10, v15, (float *)v13, this);
  v11 = _mm_loadu_si128((const __m128i *)Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
                                           &v12,
                                           (const struct _D3DCOLORVALUE *)this));
  CExpressionValue::DestroyCurrent(this);
  *((_DWORD *)this + 16) = 70;
  *(__m128i *)this = v11;
  CExpressionValue::DestroyCurrent((CExpressionValue *)v13);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v15);
}
