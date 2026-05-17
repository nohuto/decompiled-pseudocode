/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x1800DDBD0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v1; // ebx

  if ( !a1 )
    return 3221225485LL;
  v1 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap_0();
  return v1;
}
