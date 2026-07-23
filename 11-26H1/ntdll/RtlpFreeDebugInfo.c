/*
 * XREFs of RtlpFreeDebugInfo @ 0x180068290
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeDebugInfo(char *BaseAddress, __int64 a2, __int64 a3, __int64 a4)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)BaseAddress && BaseAddress < &RtlpForceCSToUseEvents )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, BaseAddress, a3, a4);
  }
  else
  {
    return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
