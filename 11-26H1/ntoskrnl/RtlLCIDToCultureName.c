/*
 * XREFs of RtlLCIDToCultureName @ 0x140B60060
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1406207D4 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1408AE2F4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408AEC08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408AF3E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408B09C0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140A18148 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x140A18AE4 (PnpSetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140E623D0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140E623D0);
          return 1;
        }
      }
    }
  }
  return v2;
}
