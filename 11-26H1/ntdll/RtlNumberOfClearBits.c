/*
 * XREFs of RtlNumberOfClearBits @ 0x1800E4370
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800E4390 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // ebx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  return SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
