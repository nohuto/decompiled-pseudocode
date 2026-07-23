/*
 * XREFs of ZwEnumerateBootEntries @ 0x14069CE20
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x140633740 (DifZwEnumerateBootEntriesWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407A5FD4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     BiEnumerateBootEntries @ 0x140A27D38 (BiEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
