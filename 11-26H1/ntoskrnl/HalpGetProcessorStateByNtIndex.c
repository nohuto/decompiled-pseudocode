/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x140432C88
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140432590 (HalGetMessageRoutingInfo.c)
 *     HalGetProcessorIdByNtNumber @ 0x140432C50 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140593A28 (HalpInterruptStartBlockedProcessors.c)
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
