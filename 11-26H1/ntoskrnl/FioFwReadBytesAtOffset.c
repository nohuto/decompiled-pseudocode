/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140356ED0
 * Callers:
 *     FioFwReadUshortAtOffset @ 0x140356A58 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140356A90 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x14071DCE4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadBearings @ 0x14071E024 (RaspLoadBearings.c)
 *     FioFwReadUlongAtOffset @ 0x14071E484 (FioFwReadUlongAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x140D19DB8 (FopGetTableOffsetAndSize.c)
 *     FopReadCmapTable @ 0x140D1A010 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140D1A17C (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140D1A380 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140D1A52C (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140D1B048 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
