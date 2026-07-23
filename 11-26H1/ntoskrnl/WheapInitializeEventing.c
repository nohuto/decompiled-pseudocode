/*
 * XREFs of WheapInitializeEventing @ 0x140CEE860
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  *(_WORD *)&CmpContextListLock.SchedulerApcFill5[24] = 1;
  CmpContextListLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)&CmpContextListLock.SchedulerApcFill5[8];
  CmpContextListLock.SchedulerApc.Thread = (struct _KTHREAD *)&CmpContextListLock.SchedulerApcFill5[8];
  CmpContextListLock.SchedulerApcFill3[26] = 6;
  CmpContextListLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&CmpContextListLock.SuspendEvent;
  *(_QWORD *)&CmpContextListLock.SuspendEvent.Header.Lock = &CmpContextListLock.SuspendEvent;
  *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[28] = 1;
  CmpContextListLock.SchedulerApc.Reserved[1] = &CmpContextListLock.SchedulerApcFill5[32];
  CmpContextListLock.SchedulerApc.Reserved[0] = &CmpContextListLock.SchedulerApcFill5[32];
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  CmpContextListLock.SchedulerApc.SystemArgument2 = 0LL;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  *(_OWORD *)&CmpContextListLock.SchedulerApcFill5[56] = 0LL;
  if ( EtwRegister(
         &WHEA_ETW_PROVIDER,
         (PETWENABLECALLBACK)WheapEtwEnableCallback,
         0LL,
         (PREGHANDLE)&CmpContextListLock.SchedulerApcFill5[80]) )
  {
    *(_QWORD *)&CmpContextListLock.SchedulerApcFill5[80] = 0LL;
  }
  if ( ((unsigned __int8)&WheapIpmiLogEntryList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &WheapIpmiLogEntry;
  WheapIpmiLogEntryList = 0LL;
  v1 = 128LL;
  do
  {
    memset_0(v0, 0, 0x70uLL);
    result = RtlpInterlockedPushEntrySList(&WheapIpmiLogEntryList, v0);
    v0 += 7;
    --v1;
  }
  while ( v1 );
  return result;
}
