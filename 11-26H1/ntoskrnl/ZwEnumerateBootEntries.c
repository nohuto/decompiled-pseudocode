/*
 * XREFs of ZwEnumerateBootEntries @ 0x1407250D0
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1406A5190 (DifZwEnumerateBootEntriesWrapper.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     BiEnumerateBootEntries @ 0x1409D0464 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B6E708 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
