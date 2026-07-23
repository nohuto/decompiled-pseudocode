/*
 * XREFs of BgpFmRoundUp @ 0x1403576F0
 * Callers:
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 *     BgpRasPrintGlyph @ 0x1404A69C8 (BgpRasPrintGlyph.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14071D6A8 (BgpRasGetGlyphTextCellDimensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
