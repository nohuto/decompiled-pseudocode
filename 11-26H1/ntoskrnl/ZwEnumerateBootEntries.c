/*
 * XREFs of ZwEnumerateBootEntries @ 0x140729CA0
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1406A8D70 (DifZwEnumerateBootEntriesWrapper.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     BiEnumerateBootEntries @ 0x1409A1444 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B71C48 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
