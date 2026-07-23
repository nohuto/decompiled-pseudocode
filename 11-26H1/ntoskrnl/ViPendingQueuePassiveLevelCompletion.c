/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140C36480
 * Callers:
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // r9d
  unsigned int v5; // edx
  __int64 v6; // rbx

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ViPendingWorkersCount;
  v5 = ViPendingWorkerIndexHint;
  while ( 1 )
  {
    v6 = 48LL * v5;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)((char *)&ViPendingWorkers + v6 + 8), a1, 0LL) )
      break;
    v5 = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
    if ( !--v4 )
    {
      ++ViPendingWorkersBusyCount;
LABEL_7:
      KeLeaveCriticalRegion();
      return 0LL;
    }
  }
  ViPendingWorkerIndexHint = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
  if ( v5 == -1 )
    goto LABEL_7;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v6), PriorityThread);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v6 + 16), 0, 0);
  KeLeaveCriticalRegion();
  return 1LL;
}
