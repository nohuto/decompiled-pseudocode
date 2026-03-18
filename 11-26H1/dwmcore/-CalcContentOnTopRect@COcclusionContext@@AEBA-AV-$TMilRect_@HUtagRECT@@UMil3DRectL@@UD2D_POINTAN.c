/*
 * XREFs of ?CalcContentOnTopRect@COcclusionContext@@AEBA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18019D2FC
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 */

int *__fastcall COcclusionContext::CalcContentOnTopRect(__int64 a1, int *a2, __int64 a3)
{
  bool v3; // zf
  __m128i v4; // xmm1
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  double v10; // xmm3_8
  double v11; // xmm2_8
  float v12; // xmm5_4
  float v13; // xmm3_4
  unsigned __int128 v15; // [rsp+20h] [rbp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 1296) == 0;
  v4.m128i_i32[0] = 0;
  v15 = 0LL;
  if ( !v3 )
  {
    v4 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 1288) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 1296) - 1)));
    v15 = (unsigned __int128)v4;
  }
  v6 = *(float *)(a1 + 568);
  if ( v6 > *(float *)v4.m128i_i32 )
  {
    LODWORD(v15) = *(_DWORD *)(a1 + 568);
    *(float *)v4.m128i_i32 = v6;
  }
  v7 = *((float *)&v15 + 1);
  v8 = *(float *)(a1 + 572);
  v9 = *((float *)&v15 + 1);
  if ( v8 > *((float *)&v15 + 1) )
  {
    DWORD1(v15) = *(_DWORD *)(a1 + 572);
    v7 = v8;
    v9 = v8;
  }
  *(_QWORD *)&v10 = *(unsigned int *)(a1 + 576);
  *(_QWORD *)&v11 = DWORD2(v15);
  if ( *((float *)&v15 + 2) > *(float *)&v10 )
  {
    DWORD2(v15) = *(_DWORD *)(a1 + 576);
    v11 = v10;
  }
  v12 = *(float *)(a1 + 580);
  v13 = *((float *)&v15 + 3);
  if ( *((float *)&v15 + 3) > v12 )
  {
    HIDWORD(v15) = *(_DWORD *)(a1 + 580);
    v13 = v12;
  }
  if ( *(float *)&v11 <= *(float *)v4.m128i_i32 || v13 <= v9 )
  {
    v7 = 0.0;
    v4.m128i_i32[0] = 0;
    v15 = 0uLL;
    v11 = 0.0;
    v13 = 0.0;
  }
  if ( *(float *)&v11 <= *(float *)v4.m128i_i32 || v13 <= v7 )
  {
    *(_OWORD *)a2 = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (const struct D2D_RECT_F *)&v15, (float *)&v15);
    PixelAlign(a2, (unsigned int *)&v15, v11);
  }
  return a2;
}
