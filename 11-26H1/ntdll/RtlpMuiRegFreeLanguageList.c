/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180006B20
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180001AEC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x1800038D0 (LdrpMergeLangFallbackLists.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180008900 (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 *     RtlpUpdateTEBLanguage @ 0x18000D840 (RtlpUpdateTEBLanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18006F490 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x18006F850 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegFreeLanguageList(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 0x40) == 0 )
      return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
