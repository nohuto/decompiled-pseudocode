/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x14084F860
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x1406DB340 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x14084F4D0 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x1403E2E20 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 */

LONG WheapProcessWaitingETWEvents()
{
  struct _KTHREAD *Thread; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&CmpContextListLock.SchedulerApcFill5[24], Executive, 0, 0, 0LL);
    Thread = CmpContextListLock.SchedulerApc.Thread;
    if ( (unsigned __int8 *)CmpContextListLock.SchedulerApc.Thread->Header.WaitListHead.Flink != &CmpContextListLock.SchedulerApcFill5[8]
      || (v1 = *(_QWORD *)CmpContextListLock.SchedulerApc.Thread,
          *(struct _KTHREAD **)(*(_QWORD *)CmpContextListLock.SchedulerApc.Thread + 8LL) != CmpContextListLock.SchedulerApc.Thread) )
    {
LABEL_9:
      __fastfail(3u);
    }
    CmpContextListLock.SchedulerApc.Thread = *(struct _KTHREAD **)CmpContextListLock.SchedulerApc.Thread;
    *(_QWORD *)(v1 + 8) = &CmpContextListLock.SchedulerApc.Thread;
    KeSetEvent((PRKEVENT)&CmpContextListLock.SchedulerApcFill5[24], 0, 0);
    if ( Thread == (struct _KTHREAD *)&CmpContextListLock.SchedulerApcFill5[8] )
      break;
    WheapGenerateETWEvents((__int64)&Thread->InitialStack);
    WheapFreeErrorRecord((__int64)Thread);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
    v2 = *(_QWORD *)&CmpContextListLock.SuspendEvent.Header.Lock;
    if ( *(struct _KTHREAD **)(*(_QWORD *)&CmpContextListLock.SuspendEvent.Header.Lock + 8LL) != (struct _KTHREAD *)&CmpContextListLock.SuspendEvent )
      goto LABEL_9;
    v3 = **(_QWORD **)&CmpContextListLock.SuspendEvent.Header.Lock;
    if ( *(_QWORD *)(**(_QWORD **)&CmpContextListLock.SuspendEvent.Header.Lock + 8LL) != *(_QWORD *)&CmpContextListLock.SuspendEvent.Header.Lock )
      goto LABEL_9;
    *(_QWORD *)&CmpContextListLock.SuspendEvent.Header.Lock = **(_QWORD **)&CmpContextListLock.SuspendEvent.Header.Lock;
    *(_QWORD *)(v3 + 8) = &CmpContextListLock.SuspendEvent;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (_KEVENT *)v2 == &CmpContextListLock.SuspendEvent )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
