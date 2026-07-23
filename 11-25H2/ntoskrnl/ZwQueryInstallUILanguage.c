/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14069DCC0
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x140639D90 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14081DF7C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
