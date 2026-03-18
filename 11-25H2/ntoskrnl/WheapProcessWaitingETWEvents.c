/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x1407B8EC0
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x1406522D0 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x1407B8B70 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x1404782CC (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1404782FC (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 */

LONG WheapProcessWaitingETWEvents()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v0 = (__int64 *)WheapWaitingETWEvents;
    if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents
      || (v1 = *(_QWORD *)WheapWaitingETWEvents,
          *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents) )
    {
LABEL_9:
      __fastfail(3u);
    }
    WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
    *(_QWORD *)(v1 + 8) = &WheapWaitingETWEvents;
    KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
    if ( v0 == &WheapWaitingETWEvents )
      break;
    WheapGenerateETWEvents((__int64)(v0 + 5));
    WheapFreeErrorRecord((__int64)v0);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
    v2 = WheapDeferredInternalLogs;
    if ( *(__int64 **)(WheapDeferredInternalLogs + 8) != &WheapDeferredInternalLogs )
      goto LABEL_9;
    v3 = *(_QWORD *)WheapDeferredInternalLogs;
    if ( *(_QWORD *)(*(_QWORD *)WheapDeferredInternalLogs + 8LL) != WheapDeferredInternalLogs )
      goto LABEL_9;
    WheapDeferredInternalLogs = *(_QWORD *)WheapDeferredInternalLogs;
    *(_QWORD *)(v3 + 8) = &WheapDeferredInternalLogs;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (__int64 *)v2 == &WheapDeferredInternalLogs )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
