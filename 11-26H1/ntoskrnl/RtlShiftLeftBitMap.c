/*
 * XREFs of RtlShiftLeftBitMap @ 0x140618D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     RtlExtractBitMap @ 0x140618870 (RtlExtractBitMap.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall RtlShiftLeftBitMap(PRTL_BITMAP BitMapHeader, ULONG NumberToClear)
{
  unsigned int SizeOfBitMap; // r9d
  int v3; // eax

  if ( NumberToClear )
  {
    SizeOfBitMap = BitMapHeader->SizeOfBitMap;
    v3 = 0;
    if ( NumberToClear < BitMapHeader->SizeOfBitMap )
    {
      RtlExtractBitMap((__int64)BitMapHeader, &BitMapHeader->SizeOfBitMap, NumberToClear, SizeOfBitMap - NumberToClear);
      RtlClearBits(BitMapHeader, BitMapHeader->SizeOfBitMap - NumberToClear, NumberToClear);
    }
    else
    {
      LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
      memset_0(BitMapHeader->Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
    }
  }
}
