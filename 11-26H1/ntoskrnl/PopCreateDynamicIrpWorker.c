/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x1403B64AC
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x1403B7600 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x14060C250 (PopIrpWorkerControl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x1403B653C (PopCreatePowerThread.c)
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
    ExAcquireFastMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
    --*(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84];
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
  }
  return v3;
}
