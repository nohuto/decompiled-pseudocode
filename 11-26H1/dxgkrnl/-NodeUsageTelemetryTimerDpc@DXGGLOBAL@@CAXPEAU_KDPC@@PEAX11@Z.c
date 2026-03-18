/*
 * XREFs of ?NodeUsageTelemetryTimerDpc@DXGGLOBAL@@CAXPEAU_KDPC@@PEAX11@Z @ 0x14007BEB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGGLOBAL::NodeUsageTelemetryTimerDpc(
        struct _KDPC *Dpc,
        struct _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1265072196LL);
  if ( Pool2 )
  {
    Pool2->Parameter = Pool2;
    Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGGLOBAL::NodeUsageTelemetryThread;
    Pool2->List.Flink = 0LL;
    Pool2[1].List.Flink = DeferredContext;
    ExQueueWorkItem(Pool2, NormalWorkQueue);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1412;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to  allocate pNodeUsageTelemetryWorkItem",
      1412LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
