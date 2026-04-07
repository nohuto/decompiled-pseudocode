/*
 * XREFs of ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z @ 0x18001E118
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180011CB0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D7C (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001CF40 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsVisual::AddAtlasImage(CAtlasedRectsVisual *this, struct CAtlasedImage *a2)
{
  return CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, a2, *((_DWORD *)this + 56));
}
