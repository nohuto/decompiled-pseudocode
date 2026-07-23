/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14072A920
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1406B3710 (DifZwQueryBootEntryOrderWrapper.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x1409A3410 (BiQueryBootEntryOrder.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B71C48 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
