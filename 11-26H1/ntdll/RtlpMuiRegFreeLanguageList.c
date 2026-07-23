/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180052250
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D21C (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18004F000 (LdrpMergeLangFallbackLists.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180054030 (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x180058F70 (RtlpUpdateTEBLanguage.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18008F8E0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x18008FCA0 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x18008FD78 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DACF0 (RtlpMuiRegFreeRegistryInfo.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
