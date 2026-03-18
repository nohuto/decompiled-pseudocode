/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140355130
 * Callers:
 *     FioFwReadUshortAtOffset @ 0x140354CB8 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140354CF0 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x140718FF4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadBearings @ 0x140719334 (RaspLoadBearings.c)
 *     FioFwReadUlongAtOffset @ 0x140719794 (FioFwReadUlongAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x140D13BF0 (FopGetTableOffsetAndSize.c)
 *     FopReadCmapTable @ 0x140D13E48 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140D13FB4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140D141B8 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140D14364 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140D14E80 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
