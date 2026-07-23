/*
 * XREFs of HalpPicWriteEndOfInterrupt @ 0x1405A4D50
 * Callers:
 *     <none>
 * Callees:
 *     HalpIoDelay @ 0x140727680 (HalpIoDelay.c)
 */

__int64 HalpPicWriteEndOfInterrupt()
{
  __outbyte(0xA0u, 0x20u);
  __outbyte(0x20u, 0x20u);
  __inbyte(0x20u);
  return HalpIoDelay();
}
