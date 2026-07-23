/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x1404B19E4
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409AE908 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140F843E8);
  if ( *(ULONG **)&PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140F843B8 == (_QWORD)&qword_140F843B8;
  KeReleaseSpinLock(&qword_140F843E8, v1);
  return v0;
}
