/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1800DBADC
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800DB8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x1800EBF50 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGrowLanguageList(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageList();
  return a1;
}
