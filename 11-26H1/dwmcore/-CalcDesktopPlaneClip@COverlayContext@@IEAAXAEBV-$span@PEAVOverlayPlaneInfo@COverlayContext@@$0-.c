/*
 * XREFs of ?CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239620
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?IsCandidateSupportedSingleton@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x18023CC48 (-IsCandidateSupportedSingleton@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PE.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8 (-TrimCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239844 (-CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 */

__int64 __fastcall COverlayContext::CalcDesktopPlaneClip(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  char v5; // di
  struct tagRECT v6; // xmm0
  bool v7; // zf
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  result = COverlayContext::CanFastDisableDesktopPlane();
  v5 = 0;
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 19052) = 0;
  }
  else
  {
    v8 = 0LL;
    if ( COverlayContext::CalcDesktopClip(a1, a2, &v8) )
    {
      if ( *(_BYTE *)(a1 + 46) )
        v6 = *(struct tagRECT *)(a1 + 19008);
      else
        v6 = v8;
      v7 = *a2 == 0;
      v5 = 1;
      *(struct tagRECT *)(a1 + 19024) = v6;
      *(_BYTE *)(a1 + 19053) = !v7;
    }
    result = 19052LL;
    *(_BYTE *)(a1 + 19052) = v5;
  }
  return result;
}
