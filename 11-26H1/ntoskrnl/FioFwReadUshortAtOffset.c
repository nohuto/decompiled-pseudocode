/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140356A58
 * Callers:
 *     RaspInitializeGlyphData @ 0x140356A90 (RaspInitializeGlyphData.c)
 *     RaspMapGlyphIndexToLocation @ 0x140530C90 (RaspMapGlyphIndexToLocation.c)
 *     RaspGetCompositeGlyphList @ 0x14071D7F4 (RaspGetCompositeGlyphList.c)
 *     RaspLoadBearings @ 0x14071E024 (RaspLoadBearings.c)
 *     RaspLoadCompositeGlyphData @ 0x14071E19C (RaspLoadCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14071E3A0 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
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
