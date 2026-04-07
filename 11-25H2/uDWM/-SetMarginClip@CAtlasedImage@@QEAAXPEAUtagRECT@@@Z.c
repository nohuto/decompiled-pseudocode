/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180005490
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180004F60 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180006734 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 116);
  if ( !a2 )
  {
    if ( !v2 )
      return;
    *((_BYTE *)this + 116) = 0;
LABEL_7:
    CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    return;
  }
  if ( !v2 || !EqualRect((const RECT *)((char *)this + 100), a2) )
  {
    *((_BYTE *)this + 116) = 1;
    *(struct tagRECT *)((char *)this + 100) = *a2;
    goto LABEL_7;
  }
}
