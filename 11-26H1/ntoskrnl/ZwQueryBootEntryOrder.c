/*
 * XREFs of ZwQueryBootEntryOrder @ 0x140725D50
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1406AFB30 (DifZwQueryBootEntryOrderWrapper.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x1409D2430 (BiQueryBootEntryOrder.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B6E708 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
