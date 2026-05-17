/*
 * XREFs of GetGlobalizationUserModelType @ 0x18000CF80
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C970 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18000DFB0 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801CB2C0;
  if ( !dword_1801CB2C0 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_1801CB2C0 = result;
  }
  return result;
}
