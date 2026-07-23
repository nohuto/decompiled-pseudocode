/*
 * XREFs of HalpLegacyShutdown @ 0x140581D10
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
