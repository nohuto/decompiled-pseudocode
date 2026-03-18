/*
 * XREFs of RaspFreeMemory @ 0x140355DE4
 * Callers:
 *     RaspInitializeGlyphData @ 0x140354CF0 (RaspInitializeGlyphData.c)
 *     RaspScanConvert @ 0x1403551EC (RaspScanConvert.c)
 *     RaspDestroySegmentList @ 0x140355D24 (RaspDestroySegmentList.c)
 *     BgpRasPrintGlyph @ 0x1404AD338 (BgpRasPrintGlyph.c)
 *     RaspRasterize @ 0x1404AD80C (RaspRasterize.c)
 *     RaspGetUnscaledGlyphData @ 0x1404AD928 (RaspGetUnscaledGlyphData.c)
 *     RaspRectangleDestroy @ 0x140531D80 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x140718B04 (RaspGetCompositeGlyphList.c)
 *     RaspGetXExtent @ 0x140718E34 (RaspGetXExtent.c)
 *     RaspInitializeCompositeGlyphData @ 0x140718FF4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1407194AC (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140C54EA4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
