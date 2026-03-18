/*
 * XREFs of ?IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18023CE2C
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18023A8A0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::IsDFlipOnMPO(COverlayContext::OverlayPlaneInfo *this)
{
  char v1; // dl

  if ( *((_BYTE *)this + 360)
    || **(_DWORD **)this > 1u
    || *((_DWORD *)this + 87) != 2
    || !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)this + 57) )
  {
    return 0;
  }
  return v1;
}
