/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14069DA80
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x140637E30 (DifZwQueryBootEntryOrderWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407A5FD4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x140A2609C (BiQueryBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
