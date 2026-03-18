/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x1404B81B4
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14090C7D8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140F84088);
  if ( *(ULONG **)&PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140F84058 == (_QWORD)&qword_140F84058;
  KeReleaseSpinLock(&qword_140F84088, v1);
  return v0;
}
