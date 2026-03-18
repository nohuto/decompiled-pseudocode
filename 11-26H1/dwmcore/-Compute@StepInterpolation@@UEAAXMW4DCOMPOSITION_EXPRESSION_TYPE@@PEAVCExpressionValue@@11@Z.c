/*
 * XREFs of ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E350
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_1___.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_2___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall StepInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        CExpressionValue *a6)
{
  __m128 v6; // xmm3
  struct _D3DCOLORVALUE *v8; // r11
  __m128 v9; // xmm2
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // eax
  double v13; // xmm1_8
  char r_low; // di
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v8 = a4;
  v9 = 0LL;
  v6.m128_f32[0] = a2 / *(float *)(a1 + 44);
  v9.m128_f32[0] = (float)(int)v6.m128_f32[0];
  v9.m128_f32[0] = _mm_cmplt_ss(v6, v9).m128_f32[0];
  v10 = (unsigned int)((int)v6.m128_f32[0] + _mm_cvtsi128_si32((__m128i)v9));
  if ( a2 == 1.0 )
    v10 = (unsigned int)(v10 - 1);
  v11 = (unsigned int)(v10 + *(_DWORD *)(a1 + 28));
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 36) )
  {
    v11 = (unsigned int)(v11 - 1);
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 40) )
  {
    v11 = (unsigned int)(v11 + 1);
  }
  v12 = *(_DWORD *)(a1 + 16);
  v13 = (double)(int)v11 / (double)*(int *)(a1 + 24);
  if ( v12 != 4 )
  {
    v11 = (unsigned __int64)&_ImageBase;
    switch ( v12 )
    {
      case 0:
        break;
      case 1:
        KeyframeInterpolation::InterpolateSpherical(v10, a3, a4, a5, a6);
        return;
      case 2:
        KeyframeInterpolation::InterpolateHsl(v10, &_ImageBase, a4, a5, a6);
        return;
      case 3:
        InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___(a4, a5, a6);
        return;
      case 5:
        InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___(a4, a5, a6);
        return;
      case 6:
        if ( v13 >= 1.0 )
          v8 = a5;
        r_low = LOBYTE(v8->r);
        CExpressionValue::DestroyCurrent(a6);
        *((_DWORD *)a6 + 16) = 17;
        *(_BYTE *)a6 = r_low;
        return;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  KeyframeInterpolation::ExpressionValueLerp(a3, v11, a4, a5, a6);
}
