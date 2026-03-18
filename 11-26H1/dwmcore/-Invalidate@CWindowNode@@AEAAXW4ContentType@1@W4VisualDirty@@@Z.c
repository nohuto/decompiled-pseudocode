/*
 * XREFs of ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0
 * Callers:
 *     ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x1801FE3EC (-OnIsCursorChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetContentSize@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z @ 0x18020C84C (-SetContentSize@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z.c)
 *     ?SetContentRelativeWindowRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024AB58 (-SetContentRelativeWindowRect@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV-$TMilRect.c)
 *     ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024B7E8 (-SetIsClipToDirty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?SetIsLayoutRTL@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18024BA34 (-SetIsLayoutRTL@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::Invalidate(CVisual *a1, int a2, unsigned int a3)
{
  if ( a2 )
    CVisual::ClearContentTreeDataCaches(a1);
  return CVisual::PropagateFlags((__int64)a1, a3);
}
