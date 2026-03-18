/*
 * XREFs of ImpAcquireLock @ 0x1400BF35C
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

struct _KTHREAD *__fastcall ImpAcquireLock(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(a1 + 8) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)a1, 1u);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
