/*
 * XREFs of RtlSetBit @ 0x1404632E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)BitNumber >> 3)) |= 1 << (BitNumber & 7);
}
