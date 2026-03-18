/*
 * XREFs of PnpDeviceCompletionQueueAddCompletedRequest @ 0x14049397C
 * Callers:
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140493910 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddCompletedRequest(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)qword_140F84060;
  if ( *(__int64 **)qword_140F84060 != &qword_140F84058 )
    __fastfail(3u);
  *a2 = &qword_140F84058;
  a2[1] = v2;
  *v2 = a2;
  qword_140F84060 = (__int64)a2;
  return KeReleaseSemaphore(&Semaphore, 0, 1, 0) == 0;
}
