/*
 * XREFs of OSQueueWorkItem @ 0x14000EA6C
 * Callers:
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 *     AMLIResumeInterpreter @ 0x140030690 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_14008F6E8;
  if ( *(__int64 **)qword_14008F6E8 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_14008F6E8 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
