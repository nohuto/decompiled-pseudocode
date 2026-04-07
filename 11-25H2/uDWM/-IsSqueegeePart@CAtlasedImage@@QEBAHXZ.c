/*
 * XREFs of ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800044F0
 * Callers:
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x180003A30 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z.c)
 *     ?ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z @ 0x1800044D0 (-ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z.c)
 * Callees:
 *     ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000450C (-IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 */

_BOOL8 __fastcall CAtlasedImage::IsSqueegeePart(CAtlasedImage *this)
{
  return CTopLevelWindow::IsGlassSheetNCAreaPart(*((_DWORD *)this + 30));
}
