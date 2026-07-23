/*
 * XREFs of RtlSetBit @ 0x180111360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) |= 1 << (BitNumber & 7);
}
