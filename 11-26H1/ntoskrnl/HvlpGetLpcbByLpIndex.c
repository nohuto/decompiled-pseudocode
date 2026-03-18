/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x1403E6258
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x140252790 (PpmHvSnapPerformanceAccumulation.c)
 *     HvlSharedIsr @ 0x1403E61A0 (HvlSharedIsr.c)
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405B9220 (HvlGetApicIdFromLpIndex.c)
 *     HvlGetLpStatsPageByLpIndex @ 0x1405B9290 (HvlGetLpStatsPageByLpIndex.c)
 *     HvlGetVpSintMessagePage @ 0x1405B9490 (HvlGetVpSintMessagePage.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1405B9550 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1405B96B0 (HvlQueryProcessorTopologyEx.c)
 *     HvlpInitializeBootProcessor @ 0x1405BA2EC (HvlpInitializeBootProcessor.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
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
      return &stru_140E3E928.ThreadListEntry;
  }
  return result;
}
