/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14072AB60
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1406B5EC0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1408B00B4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
