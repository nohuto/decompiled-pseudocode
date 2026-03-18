/*
 * XREFs of HalGetBusData @ 0x140579940
 * Callers:
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x140439D40 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
