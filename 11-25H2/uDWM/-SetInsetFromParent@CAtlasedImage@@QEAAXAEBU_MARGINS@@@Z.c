/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180005B10
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180004AB8 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18000CD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180011CB0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180006734 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  if ( this[2].cxLeftWidth != a2->cxLeftWidth
    || this[2].cxRightWidth != a2->cxRightWidth
    || this[2].cyTopHeight != a2->cyTopHeight
    || this[2].cyBottomHeight != a2->cyBottomHeight )
  {
    this[2] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1u, 0x1000u);
  }
}
