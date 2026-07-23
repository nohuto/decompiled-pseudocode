/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1402F3138
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x1402540F0 (PpmHvSnapPerformanceAccumulation.c)
 *     HvlSharedIsr @ 0x1402F3080 (HvlSharedIsr.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405BBA90 (HvlGetApicIdFromLpIndex.c)
 *     HvlGetLpStatsPageByLpIndex @ 0x1405BBB00 (HvlGetLpStatsPageByLpIndex.c)
 *     HvlGetVpSintMessagePage @ 0x1405BBD00 (HvlGetVpSintMessagePage.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1405BBDC0 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1405BBF20 (HvlQueryProcessorTopologyEx.c)
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall HvlpGetLpcbByLpIndex(unsigned int a1)
{
  _LIST_ENTRY *result; // rax
  _DWORD *v2; // rdx
  unsigned int i; // r8d

  if ( a1 >= (unsigned int)HvlpLogicalProcessorCount
    || (result = (_LIST_ENTRY *)((char *)HvlpLogicalProcessorRegions + 104 * a1), HIDWORD(result->Flink) != a1) )
  {
    v2 = HvlpLogicalProcessorRegions;
    result = 0LL;
    for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
    {
      if ( v2[1] == a1 )
        return (_LIST_ENTRY *)v2;
      v2 += 26;
    }
    if ( !a1 )
      return &stru_140E3EAA8.ThreadListEntry;
  }
  return result;
}
