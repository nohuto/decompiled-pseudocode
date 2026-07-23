/*
 * XREFs of PnpDeviceCompletionQueueAddCompletedRequest @ 0x14048D4CC
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14048D460 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddCompletedRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)qword_140F843C0;
  if ( *(__int64 **)qword_140F843C0 != &qword_140F843B8 )
    __fastfail(3u);
  *a2 = &qword_140F843B8;
  a2[1] = v2;
  *v2 = a2;
  qword_140F843C0 = (__int64)a2;
  return KeReleaseSemaphore(&Semaphore, 0, 1, 0) == 0;
}
