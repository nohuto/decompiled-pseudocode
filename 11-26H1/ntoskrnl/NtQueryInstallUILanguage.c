/*
 * XREFs of NtQueryInstallUILanguage @ 0x140B27B70
 * Callers:
 *     DifNtQueryInstallUILanguageWrapper @ 0x140683CE0 (DifNtQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408AA5F8 (_RtlpMuiRegValidateInstalled.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x140B27B50 (NtQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall NtQueryInstallUILanguage(_WORD *a1)
{
  if ( KeGetCurrentThread()->PreviousMode )
    RtlWriteUShortToUser(a1, PsInstallUILanguageId);
  else
    RtlCopyVolatileMemory(a1, &PsInstallUILanguageId, 2uLL);
  return 0LL;
}
