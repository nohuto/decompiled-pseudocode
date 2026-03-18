/*
 * XREFs of ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004ECC0
 * Callers:
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004F7A0 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___ @ 0x18028A09C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_1___.c)
 *     InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___ @ 0x18028A18C (InterpolateInLinearGamma__KeyframeInterpolation--Interpolate_--_4_--_lambda_2___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyframeInterpolation::Interpolate(
        __int64 a1,
        double a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        CExpressionValue *a6)
{
  __int64 result; // rax
  char r_low; // di
  void *retaddr; // [rsp+48h] [rbp+0h]

  result = *(int *)(a1 + 16);
  if ( (_DWORD)result == 4 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, a3, a4, a5, a6);
  switch ( (int)result )
  {
    case 0:
      return KeyframeInterpolation::ExpressionValueLerp(a3, a3, a4, a5, a6);
    case 1:
      return KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
    case 2:
      return KeyframeInterpolation::InterpolateHsl(a1, a3, a4, a5, a6);
    case 3:
      return InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_1___(a4, a5, a6);
    case 5:
      return InterpolateInLinearGamma__KeyframeInterpolation::Interpolate_::_4_::_lambda_2___(a4, a5, a6);
    case 6:
      if ( a2 >= 1.0 )
      {
        result = (__int64)a5;
        r_low = LOBYTE(a5->r);
        if ( *((_DWORD *)a6 + 16) != 11 )
          goto LABEL_6;
      }
      else
      {
        r_low = LOBYTE(a4->r);
        if ( *((_DWORD *)a6 + 16) != 11 )
          goto LABEL_6;
      }
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a6 + 16LL))(*(_QWORD *)a6, a3);
LABEL_6:
      *((_DWORD *)a6 + 16) = 17;
      *(_BYTE *)a6 = r_low;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  return result;
}
