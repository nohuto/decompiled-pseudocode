/*
 * XREFs of RtlSetBit @ 0x140469B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) |= 1 << (BitNumber & 7);
}
