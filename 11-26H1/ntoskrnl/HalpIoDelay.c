/*
 * XREFs of HalpIoDelay @ 0x140722AB0
 * Callers:
 *     HalMakeBeep @ 0x14057EDA0 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x14057EE68 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x14058C330 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x14058C370 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1405A2440 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1405A2540 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1405A256C (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140BECA00 (HalpRestoreLegacyDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
