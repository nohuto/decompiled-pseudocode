/*
 * XREFs of ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_1___.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_2___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall LinearInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        CExpressionValue *a6)
{
  int v6; // eax
  struct _D3DCOLORVALUE *v7; // r10
  char r_low; // di
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 16);
  v7 = a4;
  if ( v6 != 4 )
  {
    switch ( v6 )
    {
      case 0:
        break;
      case 1:
        KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
        return;
      case 2:
        KeyframeInterpolation::InterpolateHsl(a1, a3, a4, a5, a6);
        return;
      case 3:
        InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___(a4, a5, a6);
        return;
      case 5:
        InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___(a4, a5, a6);
        return;
      case 6:
        if ( a2 >= 1.0 )
          v7 = a5;
        r_low = LOBYTE(v7->r);
        CExpressionValue::DestroyCurrent(a6);
        *((_DWORD *)a6 + 16) = 17;
        *(_BYTE *)a6 = r_low;
        return;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  KeyframeInterpolation::ExpressionValueLerp(a3, a3, a4, a5, a6);
}
