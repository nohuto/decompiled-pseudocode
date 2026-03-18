/*
 * XREFs of ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x140080680 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetRealizationInfo @ 0x140080FE0 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextMetricsW @ 0x140082190 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetGlyphOutline @ 0x1400AED00 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetFontData @ 0x1400B0BF0 (NtGdiGetFontData.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1400BB700 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetWidthTable @ 0x1400BE340 (NtGdiGetWidthTable.c)
 *     NtGdiGetTextExtentExW @ 0x14016C1C0 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetKerningPairs @ 0x1401785E0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetTextFaceW @ 0x140179A20 (NtGdiGetTextFaceW.c)
 *     NtGdiGetCharABCWidthsW @ 0x140185970 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetLinkedUFIs @ 0x14018BEC0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetCharWidthW @ 0x1401AF3A0 (NtGdiGetCharWidthW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401B6AB0 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1401C7B20 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetUFI @ 0x1401DB280 (NtGdiGetUFI.c)
 *     NtGdiGetCharWidthInfo @ 0x1401DD760 (NtGdiGetCharWidthInfo.c)
 *     NtGdiForceUFIMapping @ 0x140200D80 (NtGdiForceUFIMapping.c)
 *     NtGdiGetTextExtent @ 0x140203B20 (NtGdiGetTextExtent.c)
 *     NtGdiGetStringBitmapW @ 0x1402093C0 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     NtGdiRemoveMergeFont @ 0x1403290B0 (NtGdiRemoveMergeFont.c)
 *     NtGdiGetCharacterPlacementW @ 0x140339260 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140339880 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall UAPIDCOBJ::~UAPIDCOBJ(UAPIDCOBJ *this)
{
  DCOBJ::~DCOBJ(this);
}
