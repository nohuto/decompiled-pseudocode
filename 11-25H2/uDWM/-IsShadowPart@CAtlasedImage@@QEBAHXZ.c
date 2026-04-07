/*
 * XREFs of ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180005550
 * Callers:
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x180003A30 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800051EC (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000616C (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 */

_BOOL8 __fastcall CAtlasedImage::IsShadowPart(CAtlasedImage *this)
{
  return CTopLevelWindow::IsShadowNCAreaPart(*((_DWORD *)this + 30));
}
