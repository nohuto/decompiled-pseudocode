/*
 * XREFs of PspExitProcess @ 0x140A43620
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExCleanTimerResolutionRequest @ 0x1404E2B78 (ExCleanTimerResolutionRequest.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x140530204 (PspProcessUnbindVirtualizedTimers.c)
 *     PsSetProcessTelemetryAppState @ 0x140953E54 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x14096E118 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x140A43714 (PspCallProcessNotifyRoutines.c)
 *     DbgkFlushErrorPort @ 0x140A43A48 (DbgkFlushErrorPort.c)
 *     PfProcessExitNotification @ 0x140A43B50 (PfProcessExitNotification.c)
 */

void __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState((PRKPROCESS)a2, 3);
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcess((struct _KPROCESS *)a2, 770);
    if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7);
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
