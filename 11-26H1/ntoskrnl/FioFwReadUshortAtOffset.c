/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140354CB8
 * Callers:
 *     RaspInitializeGlyphData @ 0x140354CF0 (RaspInitializeGlyphData.c)
 *     RaspMapGlyphIndexToLocation @ 0x14052E770 (RaspMapGlyphIndexToLocation.c)
 *     RaspGetCompositeGlyphList @ 0x140718B04 (RaspGetCompositeGlyphList.c)
 *     RaspLoadBearings @ 0x140719334 (RaspLoadBearings.c)
 *     RaspLoadCompositeGlyphData @ 0x1407194AC (RaspLoadCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1407196B0 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140355130 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
