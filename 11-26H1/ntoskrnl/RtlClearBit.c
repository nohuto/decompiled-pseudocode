/*
 * XREFs of RtlClearBit @ 0x140480CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) &= ~(1 << (BitNumber & 7));
}
