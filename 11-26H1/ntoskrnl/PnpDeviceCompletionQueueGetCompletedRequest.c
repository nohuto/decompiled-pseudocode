/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404EFCBC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14090C7D8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F84088);
  v1 = qword_140F84058;
  if ( *(__int64 **)(qword_140F84058 + 8) != &qword_140F84058
    || (v2 = *(_QWORD *)qword_140F84058, *(_QWORD *)(*(_QWORD *)qword_140F84058 + 8LL) != qword_140F84058) )
  {
    __fastfail(3u);
  }
  qword_140F84058 = *(_QWORD *)qword_140F84058;
  *(_QWORD *)(v2 + 8) = &qword_140F84058;
  KeReleaseSpinLock(&qword_140F84088, v0);
  return v1;
}
