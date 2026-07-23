/*
 * XREFs of RtlpFreeTebLanguageList @ 0x18008FD78
 * Callers:
 *     RtlRestoreThreadPreferredUILanguages @ 0x18008F8E0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x18008FC0C (RtlpDupTebLanguageList.c)
 *     RtlCleanUpTEBLangLists @ 0x18008FCA0 (RtlCleanUpTEBLangLists.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x180059064 (RtlpMuiRegFreeStringPool.c)
 */

LOGICAL __fastcall RtlpFreeTebLanguageList(void **BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    v2 = *BaseAddress;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = BaseAddress[1];
    if ( v3 )
      RtlpMuiRegFreeStringPool(v3);
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
