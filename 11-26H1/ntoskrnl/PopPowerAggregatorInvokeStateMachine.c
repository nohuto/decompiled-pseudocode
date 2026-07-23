/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140ABC910
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140ABC780 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409FBB74 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceHandlerInvoke @ 0x140ABC9C8 (PopPowerAggregatorDiagTraceHandlerInvoke.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  LARGE_INTEGER *LogEntry; // rax
  ULONG v1; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)PopPowerAggregatorContext, 3u);
  *(_OWORD *)&LogEntry[3].LowPart = xmmword_140F0D8D0;
  *(_OWORD *)&LogEntry[5].LowPart = xmmword_140F0D8E0;
  LogEntry[7].QuadPart = qword_140F0D8F0;
  *(_OWORD *)&LogEntry[8].LowPart = xmmword_140F0D8F8;
  *(_OWORD *)&LogEntry[10].LowPart = xmmword_140F0D908;
  PopPowerAggregatorDiagTraceHandlerInvoke(&xmmword_140F0D8D0, &xmmword_140F0D8F8);
  v1 = guard_dispatch_icall_no_overrides((__int64)PopPowerAggregatorContext, 3LL * (int)xmmword_140F0D8D0);
  PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)PopPowerAggregatorContext, 4u)[3].LowPart = v1;
  return v1;
}
