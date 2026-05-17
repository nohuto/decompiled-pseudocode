/*
 * XREFs of NtQueryInstallUILanguage @ 0x180161AD0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18000A750 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143D50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DB60 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 349LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
