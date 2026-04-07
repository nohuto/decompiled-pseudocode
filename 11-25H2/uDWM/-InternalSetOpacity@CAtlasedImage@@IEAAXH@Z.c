/*
 * XREFs of ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z @ 0x18000669C
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18001D23C (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180006734 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::InternalSetOpacity(CAtlasedImage *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2u, 0x2000u);
    *((_DWORD *)this + 17) = a2;
  }
}
