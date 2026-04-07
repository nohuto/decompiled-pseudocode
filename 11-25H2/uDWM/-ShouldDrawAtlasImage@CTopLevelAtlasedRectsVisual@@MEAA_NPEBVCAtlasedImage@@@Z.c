/*
 * XREFs of ?ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z @ 0x1800044D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800044F0 (-IsSqueegeePart@CAtlasedImage@@QEBAHXZ.c)
 */

bool __fastcall CTopLevelAtlasedRectsVisual::ShouldDrawAtlasImage(
        CTopLevelAtlasedRectsVisual *this,
        const struct CAtlasedImage *a2)
{
  return (unsigned int)CAtlasedImage::IsSqueegeePart(a2) == 0;
}
