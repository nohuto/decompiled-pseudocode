/*
 * XREFs of ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180004A88
 * Callers:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000474C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18000488C (-UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180004AB8 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180005F68 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18000CD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  if ( this[3].cx != a2->cx || this[3].cy != a2->cy )
  {
    this[3] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1u, 0x2000u);
  }
}
