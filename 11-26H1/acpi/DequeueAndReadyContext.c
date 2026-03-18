/*
 * XREFs of DequeueAndReadyContext @ 0x14000E1E8
 * Callers:
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     WriteCookAccess @ 0x14000F370 (WriteCookAccess.c)
 *     SignalASLEvent @ 0x14005579C (SignalASLEvent.c)
 * Callees:
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 */

_QWORD *__fastcall DequeueAndReadyContext(_QWORD **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = 0LL;
  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = *a1;
  if ( *a1 != a1 )
  {
    if ( (_QWORD **)v3[1] != a1 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *a1 = v4;
    v2 = v3 - 4;
    v4[1] = a1;
    v3[1] = v3;
    *v3 = v3;
    InsertReadyQueue(v3 - 4);
  }
  KeReleaseSpinLock(&SpinLock, byte_14008EB70);
  return v2;
}
