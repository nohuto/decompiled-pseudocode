/*
 * XREFs of NtQueryInstallUILanguage @ 0x140B29800
 * Callers:
 *     DifNtQueryInstallUILanguageWrapper @ 0x1406878C0 (DifNtQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x140B297E0 (NtQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

NTSTATUS __cdecl NtQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  if ( KeGetCurrentThread()->PreviousMode )
    RtlWriteUShortToUser(InstallUILanguageId, PsInstallUILanguageId);
  else
    RtlCopyVolatileMemory(InstallUILanguageId, &PsInstallUILanguageId, 2uLL);
  return 0;
}
