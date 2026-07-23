/*
 * XREFs of WheapInitializeEventing @ 0x140C33838
 * Callers:
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(WheapWaitingETWEventLock.Header.Lock) = 1;
  qword_140EF9728 = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEvents = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEventLock.Header.Size = 6;
  qword_140EF86E8 = (__int64)&WheapDeferredInternalLogs;
  WheapDeferredInternalLogs = (__int64)&WheapDeferredInternalLogs;
  WheapWaitingETWEventLock.Header.SignalState = 1;
  WheapWaitingETWEventLock.Header.WaitListHead.Blink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapWaitingETWEventLock.Header.WaitListHead.Flink = &WheapWaitingETWEventLock.Header.WaitListHead;
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = 0LL;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  *(_OWORD *)&WheapDispatchPtr.Dpc.SystemArgument2 = 0LL;
  if ( EtwRegister(
         &WHEA_ETW_PROVIDER,
         (PETWENABLECALLBACK)WheapEtwEnableCallback,
         0LL,
         (PREGHANDLE)&WheapDispatchPtr.Dpc.DeferredRoutine) )
  {
    WheapDispatchPtr.Dpc.DeferredRoutine = 0LL;
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
