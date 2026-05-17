/*
 * XREFs of RtlpFreeTebLanguageList @ 0x18006F928
 * Callers:
 *     RtlRestoreThreadPreferredUILanguages @ 0x18006F490 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006F580 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x18006F7BC (RtlpDupTebLanguageList.c)
 *     RtlCleanUpTEBLangLists @ 0x18006F850 (RtlCleanUpTEBLangLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18000D934 (RtlpMuiRegFreeStringPool.c)
 */

__int64 __fastcall RtlpFreeTebLanguageList(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = a1[1];
    if ( v3 )
      RtlpMuiRegFreeStringPool(v3);
    return RtlFreeHeap_0();
  }
  return result;
}
