/*
 * XREFs of ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70
 * Callers:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     NtGdiGetTextCharsetInfo @ 0x140080680 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetRealizationInfo @ 0x140080FE0 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextMetricsW @ 0x140082190 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetGlyphOutline @ 0x1400AED00 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetFontData @ 0x1400B0BF0 (NtGdiGetFontData.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1400BB700 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetWidthTable @ 0x1400BE340 (NtGdiGetWidthTable.c)
 *     GreGetTextMetricsW @ 0x1400C0230 (GreGetTextMetricsW.c)
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
 *     NtGdiFontIsLinked @ 0x1401DF320 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1401E8510 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiForceUFIMapping @ 0x140200D80 (NtGdiForceUFIMapping.c)
 *     NtGdiGetTextExtent @ 0x140203B20 (NtGdiGetTextExtent.c)
 *     NtGdiGetStringBitmapW @ 0x1402093C0 (NtGdiGetStringBitmapW.c)
 *     GreGetAspectRatioFilter @ 0x140304FF0 (GreGetAspectRatioFilter.c)
 *     GreGetTextCharsetInfo @ 0x1403050AC (GreGetTextCharsetInfo.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     GreGetTextCharacterExtra @ 0x140311E10 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140311E58 (GreSetTextCharacterExtra.c)
 *     NtGdiSetTextJustification @ 0x140311EC0 (NtGdiSetTextJustification.c)
 *     NtGdiRemoveMergeFont @ 0x1403290B0 (NtGdiRemoveMergeFont.c)
 *     NtGdiGetCharacterPlacementW @ 0x140339260 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140339880 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

UAPIDCOBJ *__fastcall UAPIDCOBJ::UAPIDCOBJ(UAPIDCOBJ *this, HDC a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  DCOBJ::DCOBJ(this, a2);
  if ( *(_QWORD *)this )
  {
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      if ( *(_QWORD *)this )
        XDCOBJ::vUnlockFast(this);
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
