/*
 * XREFs of ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x1801D9264
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7258 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

__m128 *__fastcall CCursorVisual::GetCursorShapeBounds(CVisual *this, __m128 *a2, const struct CVisualTree *a3)
{
  __m128 v6; // xmm6
  __m128 v8; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[64]; // [rsp+40h] [rbp-68h] BYREF
  int v10; // [rsp+80h] [rbp-28h]

  if ( CVisualTree::_IsInTree((__int64)a3, (__int64)this, 0) )
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)this + 87) + 128LL));
    v8 = v6;
    if ( _mm_shuffle_ps(v6, v6, 170).m128_f32[0] > v6.m128_f32[0]
      && _mm_shuffle_ps(v6, v6, 255).m128_f32[0] > _mm_shuffle_ps(v6, v6, 85).m128_f32[0] )
    {
      v10 = 0;
      if ( (int)CVisual::GetWorldTransform(this, a3, (struct CMILMatrix *)v9, 0LL, 0LL) >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v9, (const struct D2D_RECT_F *)&v8, v8.m128_f32);
        v6 = v8;
      }
    }
    *a2 = v6;
  }
  else
  {
    *a2 = (__m128)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  return a2;
}
