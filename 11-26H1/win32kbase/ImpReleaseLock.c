/*
 * XREFs of ImpReleaseLock @ 0x1400BF30C
 * Callers:
 *     ImpCleanupWork @ 0x1400BDA18 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1400BDAA4 (ImpWaitForWorkerShutdown.c)
 *     ImpShutdownWorker @ 0x1400BDB60 (ImpShutdownWorker.c)
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 *     ImpQueueCharacter @ 0x1400BE898 (ImpQueueCharacter.c)
 *     ImpWorkerRoutine @ 0x1400BEB90 (ImpWorkerRoutine.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
