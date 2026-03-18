/*
 * XREFs of WheapInitializeEventing @ 0x140CE84C0
 * Callers:
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  struct _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(WheapWaitingETWEventLock.Header.Lock) = 1;
  qword_140EFE1C8 = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEvents = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEventLock.Header.Size = 6;
  qword_140EFD188 = (__int64)&WheapDeferredInternalLogs;
  WheapDeferredInternalLogs = (__int64)&WheapDeferredInternalLogs;
  WheapWaitingETWEventLock.Header.SignalState = 1;
  WheapWaitingETWEventLock.Header.WaitListHead.Blink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapWaitingETWEventLock.Header.WaitListHead.Flink = &WheapWaitingETWEventLock.Header.WaitListHead;
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  *(_QWORD *)CmpCallbackListLock.PriorityFloorCounts = 0LL;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  *(_OWORD *)&CmpCallbackListLock.PropagateBoostsEntry.Next = 0LL;
  if ( EtwRegister(
         &WHEA_ETW_PROVIDER,
         (PETWENABLECALLBACK)WheapEtwEnableCallback,
         0LL,
         (PREGHANDLE)&CmpCallbackListLock.PriorityFloorCounts[8]) )
  {
    *(_QWORD *)&CmpCallbackListLock.PriorityFloorCounts[8] = 0LL;
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
