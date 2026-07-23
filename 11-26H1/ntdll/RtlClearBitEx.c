/*
 * XREFs of RtlClearBitEx @ 0x180140810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBitEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + (BitNumber >> 3)) &= ~(1 << (BitNumber & 7));
}
