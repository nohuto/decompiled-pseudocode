/*
 * XREFs of ZwEnumerateValueKey @ 0x18015F1A0
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x18000D360 (RtlpPopulateLanguageConfigList.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125AF4 (RtlpIsEmptyImageFileOptionsKey.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014E0C8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
