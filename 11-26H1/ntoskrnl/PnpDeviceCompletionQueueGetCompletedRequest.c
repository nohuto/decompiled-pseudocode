/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404E929C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409AE908 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F843E8);
  v1 = qword_140F843B8;
  if ( *(__int64 **)(qword_140F843B8 + 8) != &qword_140F843B8
    || (v2 = *(_QWORD *)qword_140F843B8, *(_QWORD *)(*(_QWORD *)qword_140F843B8 + 8LL) != qword_140F843B8) )
  {
    __fastfail(3u);
  }
  qword_140F843B8 = *(_QWORD *)qword_140F843B8;
  *(_QWORD *)(v2 + 8) = &qword_140F843B8;
  KeReleaseSpinLock(&qword_140F843E8, v0);
  return v1;
}
