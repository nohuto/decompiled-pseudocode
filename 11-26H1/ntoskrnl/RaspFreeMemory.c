/*
 * XREFs of RaspFreeMemory @ 0x140357B8C
 * Callers:
 *     RaspInitializeGlyphData @ 0x140356A90 (RaspInitializeGlyphData.c)
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 *     RaspDestroySegmentList @ 0x140357ACC (RaspDestroySegmentList.c)
 *     BgpRasPrintGlyph @ 0x1404A69C8 (BgpRasPrintGlyph.c)
 *     RaspRasterize @ 0x1404A6E94 (RaspRasterize.c)
 *     RaspGetUnscaledGlyphData @ 0x1404A6FB0 (RaspGetUnscaledGlyphData.c)
 *     RaspRectangleDestroy @ 0x140534220 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14071D7F4 (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x14071DB24 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x14071DCE4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14071E19C (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140C5AEA4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
