/*
 * XREFs of PspExitProcess @ 0x1409FE380
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExCleanTimerResolutionRequest @ 0x1404DC1EC (ExCleanTimerResolutionRequest.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x140532704 (PspProcessUnbindVirtualizedTimers.c)
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     DbgkFlushErrorPort @ 0x140AF614C (DbgkFlushErrorPort.c)
 */

void __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v5; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState((PRKPROCESS)a2, 3);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((struct _KPROCESS *)a2, 770);
    if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v5 = *(void **)(a2 + 840);
  if ( !v5 )
    goto LABEL_3;
  if ( v5 != (void *)1 )
  {
    ObfDereferenceObject(v5);
LABEL_3:
    *(_QWORD *)(a2 + 840) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 500) < 0 )
      ExCleanTimerResolutionRequest();
    DbgkFlushErrorPort(a2);
    PfProcessExitNotification(a2);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
