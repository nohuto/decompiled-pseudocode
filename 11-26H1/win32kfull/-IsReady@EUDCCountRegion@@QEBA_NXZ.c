/*
 * XREFs of ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C
 * Callers:
 *     GreGetTextMetricsW @ 0x140122B58 (GreGetTextMetricsW.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x14020CC00 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetLinkedUFIs @ 0x14027D690 (NtGdiGetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x14027D880 (NtGdiStartDoc.c)
 *     NtGdiGetStringBitmapW @ 0x14027DD90 (NtGdiGetStringBitmapW.c)
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 *     NtGdiExtTextOutW @ 0x14027F4B0 (NtGdiExtTextOutW.c)
 *     NtGdiFontIsLinked @ 0x14027F9A0 (NtGdiFontIsLinked.c)
 *     NtGdiGetCharABCWidthsW @ 0x14027FA40 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetCharWidthInfo @ 0x14027FCD0 (NtGdiGetCharWidthInfo.c)
 *     NtGdiGetCharWidthW @ 0x14027FDD0 (NtGdiGetCharWidthW.c)
 *     NtGdiGetFontData @ 0x140280030 (NtGdiGetFontData.c)
 *     NtGdiGetFontUnicodeRanges @ 0x140280260 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetGlyphOutline @ 0x140280390 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetKerningPairs @ 0x140280640 (NtGdiGetKerningPairs.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140280790 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x140280940 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextCharsetInfo @ 0x140280AC0 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetTextExtent @ 0x140280C10 (NtGdiGetTextExtent.c)
 *     NtGdiGetTextExtentExW @ 0x140280E20 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetTextMetricsW @ 0x1402811C0 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetUFI @ 0x1402812D0 (NtGdiGetUFI.c)
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x140281810 (NtGdiQueryFontAssocInfo.c)
 *     GreGetTextCharsetInfo @ 0x14031CA90 (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharacterPlacementW @ 0x14032A5F0 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x14032AB90 (NtGdiGetEmbUFI.c)
 *     NtGdiPolyTextOutW @ 0x14032B530 (NtGdiPolyTextOutW.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14032A224 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall EUDCCountRegion::IsReady(EUDCCountRegion *this)
{
  if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    return *((_BYTE *)this + 48);
  else
    return 1;
}
