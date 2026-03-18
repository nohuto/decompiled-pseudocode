/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x140425B78
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1404254A0 (HalGetMessageRoutingInfo.c)
 *     HalGetProcessorIdByNtNumber @ 0x140425B40 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405912A8 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProcessorStateByNtIndex(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 < (unsigned int)HalpInterruptProcessorCount )
    return *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8LL * a1);
  return result;
}
