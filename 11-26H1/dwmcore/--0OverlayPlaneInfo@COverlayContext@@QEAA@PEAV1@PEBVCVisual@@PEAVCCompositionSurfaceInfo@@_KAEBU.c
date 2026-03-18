/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCCornerRects@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@8_N9W4OverlaySize@@@Z @ 0x1802390A0
 * Callers:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V8@_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@9_N_NW4OverlaySize@@@Z @ 0x180238B68 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVE.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _OWORD *a7,
        __int64 a8,
        __int64 a9,
        _OWORD *a10,
        _OWORD *a11,
        char a12,
        char a13,
        int a14)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 16),
    a4);
  *(_QWORD *)(a1 + 24) = a5;
  *(_OWORD *)(a1 + 32) = *a6;
  *(_OWORD *)(a1 + 48) = a6[1];
  *(_OWORD *)(a1 + 64) = a6[2];
  *(_OWORD *)(a1 + 80) = a6[3];
  *(_OWORD *)(a1 + 96) = a6[4];
  *(_OWORD *)(a1 + 112) = a6[5];
  *(_OWORD *)(a1 + 128) = a6[6];
  *(_OWORD *)(a1 + 144) = *a7;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)a8;
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a8 + 48);
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a8 + 64);
  *(_OWORD *)(a1 + 228) = *a10;
  *(_OWORD *)(a1 + 244) = *a11;
  *(_OWORD *)(a1 + 260) = *a11;
  *(_DWORD *)(a1 + 276) = 0;
  *(_OWORD *)(a1 + 280) = *(_OWORD *)a9;
  *(_OWORD *)(a1 + 296) = *(_OWORD *)(a9 + 16);
  *(_OWORD *)(a1 + 312) = *(_OWORD *)(a9 + 32);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a9 + 48);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a9 + 64);
  *(_DWORD *)(a1 + 348) = a14;
  *(_BYTE *)(a1 + 360) = a12;
  *(_BYTE *)(a1 + 361) = a13;
  result = a1;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 362) = 0;
  *(_BYTE *)(a1 + 366) = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_DWORD *)(a1 + 384) = 0;
  return result;
}
