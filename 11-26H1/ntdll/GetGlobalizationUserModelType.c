/*
 * XREFs of GetGlobalizationUserModelType @ 0x1800586B0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800580A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800D8790 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x1800596E0 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801CA310;
  if ( !dword_1801CA310 )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_1801CA310 = result;
  }
  return result;
}
