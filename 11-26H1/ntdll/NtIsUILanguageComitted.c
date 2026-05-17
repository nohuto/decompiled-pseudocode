/*
 * XREFs of NtIsUILanguageComitted @ 0x1801610B0
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x180004B30 (RtlpAddNeutralsToMergedList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18000A750 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  __int64 result; // rax

  result = 268LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
