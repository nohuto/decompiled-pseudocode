/*
 * XREFs of RtlSetBitEx @ 0x14045DD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetBitEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + (BitNumber >> 3)) |= 1 << (BitNumber & 7);
}
