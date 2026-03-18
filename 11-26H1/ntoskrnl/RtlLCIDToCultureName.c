/*
 * XREFs of RtlLCIDToCultureName @ 0x140B5CEE0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14061D784 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408A7E84 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408A8798 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408A8F74 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408AA550 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408AA5F8 (_RtlpMuiRegValidateInstalled.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1409DAEF8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1409DB894 (PnpSetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404EF488 (DownLevelLangIDToLanguageName.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140E62240, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, word_140E62240);
          return 1;
        }
      }
    }
  }
  return v2;
}
