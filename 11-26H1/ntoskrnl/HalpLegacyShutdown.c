/*
 * XREFs of HalpLegacyShutdown @ 0x14057F7F0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
