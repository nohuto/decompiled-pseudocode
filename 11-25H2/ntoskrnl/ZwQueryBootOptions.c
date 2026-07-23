/*
 * XREFs of ZwQueryBootOptions @ 0x14069DAA0
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x140637FA0 (DifZwQueryBootOptionsWrapper.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     BiQueryBootOptions @ 0x140A26178 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
