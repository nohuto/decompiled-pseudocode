/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1403C03AC
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x1403C1500 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14060F3B0 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x1403C043C (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  int PowerThread; // esi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = 0;
  v4 = v2;
  if ( !v2 )
  {
    v3 = -1073741670;
    goto LABEL_4;
  }
  *v2 = a1;
  PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
  if ( PowerThread < 0 )
  {
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
    v3 = PowerThread;
LABEL_4:
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    --PopIrpWorkerPendingCount;
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  return v3;
}
