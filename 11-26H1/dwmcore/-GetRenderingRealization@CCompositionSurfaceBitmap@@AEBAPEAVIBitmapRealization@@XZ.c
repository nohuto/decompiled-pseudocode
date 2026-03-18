/*
 * XREFs of ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180186130 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180265FF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::GetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
    return (struct IBitmapRealization *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  else
    return 0LL;
}
