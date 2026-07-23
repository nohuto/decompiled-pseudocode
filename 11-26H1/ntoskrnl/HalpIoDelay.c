/*
 * XREFs of HalpIoDelay @ 0x140727680
 * Callers:
 *     HalMakeBeep @ 0x1405812C0 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140581388 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x14058EAB0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x14058EAF0 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1405A4C50 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1405A4D50 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1405A4D7C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140BF2A00 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
