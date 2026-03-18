/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x1406D7014
 * Callers:
 *     WheapEtwEnableCallback @ 0x140849200 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(&CmpCallbackListLock.SchedulerApcFill5[32], 0, 0x70uLL);
  *(_DWORD *)&CmpCallbackListLock.SchedulerApcFill5[32] = 275;
  CmpCallbackListLock.SchedulerApc.SystemArgument1 = &CmpCallbackListLock.SchedulerApcFill5[32];
  CmpCallbackListLock.SchedulerApc.NormalContext = WheaFlushETWEventsDpcRoutine;
  CmpCallbackListLock.ThreadListEntry.Flink = (struct _LIST_ENTRY *)WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  CmpCallbackListLock.MutantListHead.Blink = (struct _LIST_ENTRY *)WheapProcessWaitingETWEvents;
  *(_QWORD *)&CmpCallbackListLock.SuspendEvent.Header.Lock = 0LL;
  CmpCallbackListLock.SchedulerApc.Reserved[2] = 0LL;
  CmpCallbackListLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)&CmpCallbackListLock.SchedulerApcFill5[32];
  CmpCallbackListLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  LODWORD(CmpCallbackListLock.MutantListHead.Flink) = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}
