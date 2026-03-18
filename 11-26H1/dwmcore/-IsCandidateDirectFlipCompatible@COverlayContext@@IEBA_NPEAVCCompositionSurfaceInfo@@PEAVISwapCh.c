/*
 * XREFs of ?IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18023CAF0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x1802398DC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18023CEC8 (-IsDirectFlipSupportedOnTarget@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsCandidateDirectFlipCompatible(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a4,
        unsigned int a5,
        bool a6)
{
  char v6; // bl
  __int64 v11; // rcx

  v6 = 0;
  if ( *((int *)this + 4806) <= 0
    && (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 168LL))(a3)
    && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 136LL))(a3)
    && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 152LL))(a3)
    && (*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 200LL))(a2)
    && (*(_BYTE *)a4 & 3) == 0 )
  {
    if ( OverlayCaps::SupportedPanelFitterAttributes(this, a4) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 120LL))(a2)
        && (a6 && *((_BYTE *)this + 19355)
         || *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
         || *((_BYTE *)this + 44)
         || a5 > 2)
        && COverlayContext::IsDirectFlipSupportedOnTarget(this, a2, a3) )
      {
        return 1;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      McTemplateU0xq_EventWriteTransfer(v11, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, *((_QWORD *)a2 + 5), 4);
    }
  }
  return v6;
}
