/*
 * XREFs of RtlDeleteResource @ 0x180067CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  __int64 v2; // r8
  __int64 v3; // r9
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)DebugInfo && DebugInfo < (PRTL_RESOURCE_DEBUG)&RtlpForceCSToUseEvents )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo, v2, v3);
  }
  else
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  memset_thunk_772440563353939046(Resource, 0, 0x60uLL);
}
