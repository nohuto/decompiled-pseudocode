/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18018BF10
 * Callers:
 *     ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1801E3C80 (-ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIO.c)
 *     ?CalcOverlaySize@COverlayContext@@IEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180211294 (-CalcOverlaySize@COverlayContext@@IEBA-AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239844 (-CanFastDisableDesktopPlane@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18023DD58 (-SupportedPanelFitterAttributes@OverlayCaps@@QEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18018BF94 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
        unsigned int *a1,
        _DWORD *a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // r9
  char v4; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] )
    return 1;
  v2 = a1[2];
  v3 = a1 + 1;
  if ( (v2 <= *a1 || a1[3] <= *v3) && (a2[2] <= *a2 || a2[3] <= a2[1]) )
    return 1;
  if ( (v4 = 0, v2 == -1) && !*a1 || !*v3 && a1[3] == -1 )
  {
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(a2) )
      return 1;
  }
  return v4;
}
