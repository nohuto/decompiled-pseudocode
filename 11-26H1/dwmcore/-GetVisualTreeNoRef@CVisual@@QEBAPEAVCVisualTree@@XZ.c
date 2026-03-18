/*
 * XREFs of ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800D34F8 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x1800D3560 (-GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x18014BA2C (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801E2A9C (-Channel_VisualCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802088B0 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802579B0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CVisual::GetVisualTreeNoRef(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  _BYTE *v3; // r9
  unsigned __int64 v4; // rcx
  unsigned int v5; // r8d

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x8000000) != 0 )
  {
    v2 = (unsigned int)v1[1];
    v3 = v1 + 2;
    v4 = 0LL;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      while ( *v3 != 5 )
      {
        ++v5;
        ++v3;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v5 >= (unsigned int)v2 )
        return *(struct CVisualTree **)v4;
    }
    v4 = (unsigned __int64)&v1[2 * v5] + ((v2 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    return *(struct CVisualTree **)v4;
  }
  return 0LL;
}
