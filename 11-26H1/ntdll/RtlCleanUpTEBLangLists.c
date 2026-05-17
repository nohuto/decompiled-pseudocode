/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18006F850
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap_0();
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
