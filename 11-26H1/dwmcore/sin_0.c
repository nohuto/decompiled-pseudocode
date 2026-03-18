/*
 * XREFs of sin_0 @ 0x1802B9768
 * Callers:
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x1801D4DA0 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x18025B954 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x18028A4C0 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x18028A6C0 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802942D0 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
