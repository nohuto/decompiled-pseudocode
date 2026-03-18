/*
 * XREFs of ImpReleaseLock @ 0x1400889B8
 * Callers:
 *     ImpQueueCharacter @ 0x140087F18 (ImpQueueCharacter.c)
 *     ImpWorkerRoutine @ 0x1400881F0 (ImpWorkerRoutine.c)
 *     ImpInitializeWork @ 0x14013882C (ImpInitializeWork.c)
 *     ImpShutdownWorker @ 0x140149AD8 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x14015208C (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x140155268 (ImpWaitForWorkerShutdown.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ImpReleaseLock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v4; // rcx

  if ( *(struct _KTHREAD **)(a1 + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(struct _ERESOURCE **)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
}
