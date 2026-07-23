/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x18008F8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18008FD78 (RtlpFreeTebLanguageList.c)
 */

LOGICAL __fastcall RtlRestoreThreadPreferredUILanguages(__int64 BaseAddress)
{
  int v2; // ecx

  v2 = *(_DWORD *)(BaseAddress + 24);
  if ( v2 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, BaseAddress, 1);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)BaseAddress;
  NtCurrentTeb()->MergedPrefLanguages = *(void **)(BaseAddress + 8);
  NtCurrentTeb()->UserPrefLanguages = *(void **)(BaseAddress + 16);
  *(_DWORD *)(BaseAddress + 24) = 0;
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
}
