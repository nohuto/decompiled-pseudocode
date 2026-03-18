/*
 * XREFs of fmodf_0 @ 0x1802B9720
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801A9780 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9998 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18020F458 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x18020F5CC (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl fmodf_0(float X, float Y)
{
  return fmodf(X, Y);
}
