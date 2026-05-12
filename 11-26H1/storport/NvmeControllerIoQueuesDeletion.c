/*
 * XREFs of NvmeControllerIoQueuesDeletion @ 0x1400F6E60
 * Callers:
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     NvmeControllerCancelIoPollingTimerForCompletionQueue @ 0x1400F1510 (NvmeControllerCancelIoPollingTimerForCompletionQueue.c)
 *     NvmeControllerIoCompletionQueueDelete @ 0x1400F6BE8 (NvmeControllerIoCompletionQueueDelete.c)
 *     NvmeControllerIoSubmissionQueueDelete @ 0x1400F7ED4 (NvmeControllerIoSubmissionQueueDelete.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 */

__int64 __fastcall NvmeControllerIoQueuesDeletion(__int64 a1)
{
  int v2; // esi
  unsigned __int16 v4; // di
  __int16 v5; // di
  unsigned __int16 v6; // bp

  v2 = 0;
  if ( (*(_QWORD *)(a1 + 968) & 0x1000000LL) != 0 )
    return 0LL;
  NvmeControllerWaitForOutstandingIoComplete(a1, 1LL);
  v4 = 0;
  while ( v4 < *(_WORD *)(a1 + 22) )
  {
    v2 = NvmeControllerIoSubmissionQueueDelete(a1, ++v4);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 1192) = 15;
  }
  if ( *(_WORD *)(a1 + 26) )
  {
    v5 = 1;
    do
    {
      v6 = v5;
      NvmeControllerCancelIoPollingTimerForCompletionQueue(a1, v5);
      v2 = NvmeControllerIoCompletionQueueDelete((union _SLIST_HEADER *)a1, v5);
      if ( v2 < 0 )
        *(_DWORD *)(a1 + 1192) = 16;
      ++v5;
    }
    while ( v6 < *(_WORD *)(a1 + 26) );
  }
  return (unsigned int)v2;
}
