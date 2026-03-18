/*
 * XREFs of ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08
 * Callers:
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800F50E4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1801277DC (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B23D0 (-AddTightDirtyRect@-$CTargetDirtyBase@$07@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x1801C7800 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x1801DC5F8 (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ @ 0x1801DECF0 (-MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ.c)
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4 (-MarkFullInvalid@CCachedTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRegion::SetRectangle(CRegion *this, const struct MilRectU *a2)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  _DWORD *v6; // rdx

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 >= v3 || (v4 = *((_DWORD *)a2 + 3), v5 = *((_DWORD *)a2 + 1), v5 >= v4) )
  {
    **(_DWORD **)this = 0;
  }
  else
  {
    v6 = *(_DWORD **)this;
    *v6 = 2;
    v6[1] = v2;
    v6[3] = v5;
    v6[2] = v3;
    v6[4] = 16;
    v6[7] = v2;
    v6[8] = v3;
    v6[5] = v4;
    v6[6] = 16;
  }
}
