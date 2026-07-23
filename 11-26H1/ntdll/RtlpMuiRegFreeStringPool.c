/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180059064
 * Callers:
 *     RtlpInitializeUserList @ 0x180056710 (RtlpInitializeUserList.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180058F70 (RtlpUpdateTEBLanguage.c)
 *     RtlpFreeTebLanguageList @ 0x18008FD78 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DACF0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014D91C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
