/*
 * XREFs of ?CalcInvertedContentOnTop@COverlayContext@@QEAA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA140
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 */

int *__fastcall COverlayContext::CalcInvertedContentOnTop(__int64 a1, int *a2, __int64 a3)
{
  __m128i v5; // xmm1
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  double v10; // xmm3_8
  double v11; // xmm2_8
  float v12; // xmm5_4
  float v13; // xmm3_4
  __m128i v14; // [rsp+20h] [rbp-10h] BYREF

  if ( *(float *)(a1 + 19168) <= *(float *)(a1 + 19160) || *(float *)(a1 + 19172) <= *(float *)(a1 + 19164) )
    goto LABEL_3;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 19160));
  v6 = *(float *)a3;
  v14 = v5;
  if ( v6 > *(float *)v5.m128i_i32 )
  {
    *(float *)v14.m128i_i32 = v6;
    *(float *)v5.m128i_i32 = v6;
  }
  v7 = *(float *)&v14.m128i_i32[1];
  v8 = *(float *)(a3 + 4);
  v9 = *(float *)&v14.m128i_i32[1];
  if ( v8 > *(float *)&v14.m128i_i32[1] )
  {
    v14.m128i_i32[1] = *(_DWORD *)(a3 + 4);
    v7 = v8;
    v9 = v8;
  }
  *(_QWORD *)&v10 = *(unsigned int *)(a3 + 8);
  *(_QWORD *)&v11 = v14.m128i_u32[2];
  if ( *(float *)&v14.m128i_i32[2] > *(float *)&v10 )
  {
    v14.m128i_i32[2] = *(_DWORD *)(a3 + 8);
    v11 = v10;
  }
  v12 = *(float *)(a3 + 12);
  v13 = *(float *)&v14.m128i_i32[3];
  if ( *(float *)&v14.m128i_i32[3] > v12 )
  {
    v14.m128i_i32[3] = *(_DWORD *)(a3 + 12);
    v13 = v12;
  }
  if ( *(float *)&v11 <= *(float *)v5.m128i_i32 || v13 <= v9 )
  {
    v7 = 0.0;
    v5.m128i_i32[0] = 0;
    v14 = 0uLL;
    v11 = 0.0;
    v13 = 0.0;
  }
  if ( *(float *)&v11 <= *(float *)v5.m128i_i32 || v13 <= v7 )
LABEL_3:
    *(_OWORD *)a2 = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  else
    PixelAlign(a2, (unsigned int *)&v14, v11);
  return a2;
}
