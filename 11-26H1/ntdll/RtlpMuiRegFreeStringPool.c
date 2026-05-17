/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x18000D934
 * Callers:
 *     RtlpInitializeUserList @ 0x18000AFE0 (RtlpInitializeUserList.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x18000D840 (RtlpUpdateTEBLanguage.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014DA6C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  return result;
}
