/*
 * XREFs of ZwQueryBootOptions @ 0x14072A940
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x1406B3880 (DifZwQueryBootOptionsWrapper.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     BiQueryBootOptions @ 0x1409A2A60 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
