/*
 * XREFs of ?SetClip@CAtlasedImage@@QEAAXAEBUtagRECT@@@Z @ 0x180013D1C
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180006734 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetClip(RECT *this, const struct tagRECT *a2)
{
  if ( !EqualRect(this + 3, a2) )
  {
    this[3] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1, 0x2000u);
  }
}
