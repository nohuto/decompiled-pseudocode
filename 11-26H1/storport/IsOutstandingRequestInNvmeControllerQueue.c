/*
 * XREFs of IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C
 * Callers:
 *     NvmeControllerIsOutstandingRequest @ 0x1400E1624 (NvmeControllerIsOutstandingRequest.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerIoPollingTimerCallback @ 0x1400F6D00 (NvmeControllerIoPollingTimerCallback.c)
 *     NvmeNamespaceIsOutstandingRequest @ 0x140107740 (NvmeNamespaceIsOutstandingRequest.c)
 *     NvmeIoPollingDpcRoutine @ 0x14011A450 (NvmeIoPollingDpcRoutine.c)
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsOutstandingRequestInNvmeControllerQueue(__int64 a1, __int64 a2)
{
  int v3; // ebx
  USHORT DepthSList; // ax
  __int64 v6; // rcx
  union _SLIST_HEADER *v8; // rcx

  v3 = *(_DWORD *)(a2 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 88) + 136LL) & 2) == 0 )
    --v3;
  DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a2 + 64));
  v6 = *(unsigned __int16 *)(a2 + 136);
  if ( !(_WORD)v6 )
    v3 -= *(unsigned __int16 *)(a2 + 150);
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
    return _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 148), 0, 0) != 0;
  if ( (_WORD)v6 )
    v8 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1184) - 16LL + 16 * v6);
  else
    v8 = (union _SLIST_HEADER *)(a1 + 1168);
  return DepthSList < v3 - (unsigned int)ExQueryDepthSList(v8);
}
