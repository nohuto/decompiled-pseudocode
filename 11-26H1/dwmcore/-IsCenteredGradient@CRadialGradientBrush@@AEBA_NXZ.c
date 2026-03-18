/*
 * XREFs of ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18027F23C
 * Callers:
 *     ?SetOriginOffset@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C60C (-SetOriginOffset@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QE.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18027EAEC (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRadialGradientBrush::IsCenteredGradient(CRadialGradientBrush *this)
{
  __int32 v1; // xmm1_4

  COERCE_FLOAT(v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(*((_DWORD *)this + 66) & v1) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 67) & v1) < 0.0000011920929;
}
