/*
 * XREFs of ?SetRealizationSize@CVisualBrush@@QEAAJAEBUtagSIZE@@@Z @ 0x18009BAE8
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateRealizationSize@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6538 (-UpdateRealizationSize@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CVisualBrush::SetRealizationSize(CVisualBrush *this, const struct tagSIZE *a2)
{
  __m128i v2; // xmm1
  struct D2D_SIZE_F v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = _mm_cvtsi32_si128(a2->cy);
  v4.width = (float)a2->cx;
  LODWORD(v4.height) = _mm_cvtepi32_ps(v2).m128_u32[0];
  return CVisualBrush::SetRealizationSize(this, &v4);
}
