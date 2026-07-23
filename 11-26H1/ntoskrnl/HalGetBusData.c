/*
 * XREFs of HalGetBusData @ 0x14057BE70
 * Callers:
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14042C5F0 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
