/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x18006F490
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlRestoreThreadPreferredUILanguages(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, a1, 1);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)a1;
  NtCurrentTeb()->MergedPrefLanguages = *(void **)(a1 + 8);
  NtCurrentTeb()->UserPrefLanguages = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 24) = 0;
  return RtlFreeHeap_0();
}
