/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801BE990
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x1801BE980 (-IsInMotion@CScalarForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x18028E8E0 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ @ 0x18028EF20 (-IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  __int32 v1; // xmm2_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return *((float *)this + 14) <= COERCE_FLOAT(*((_DWORD *)this + 3) & v1)
      || *((float *)this + 15) <= COERCE_FLOAT(*((_DWORD *)this + 5) & v1);
}
