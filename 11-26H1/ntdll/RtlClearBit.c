/*
 * XREFs of RtlClearBit @ 0x180108F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) &= ~(1 << (BitNumber & 7));
}
