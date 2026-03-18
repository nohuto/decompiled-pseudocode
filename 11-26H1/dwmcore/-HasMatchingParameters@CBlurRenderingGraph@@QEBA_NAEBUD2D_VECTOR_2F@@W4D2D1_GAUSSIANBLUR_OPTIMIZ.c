/*
 * XREFs of ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1801AE95C
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBlurRenderingGraph::HasMatchingParameters(
        CBlurRenderingGraph *this,
        const struct D2D_VECTOR_2F *a2,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3)
{
  __int32 v3; // xmm1_4
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 394) == a3 )
  {
    COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 392) - a2->x) & v3) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 393) - a2->y) & v3) <= 0.0000011920929 )
    {
      return 1;
    }
  }
  return result;
}
