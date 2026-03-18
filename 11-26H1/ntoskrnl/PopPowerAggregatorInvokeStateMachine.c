/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140ABB450
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140ABB2C0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140A40154 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceHandlerInvoke @ 0x140ABB508 (PopPowerAggregatorDiagTraceHandlerInvoke.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx

  LogEntry = PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink, 3);
  *(_OWORD *)(LogEntry + 24) = *(_OWORD *)&PopPowerAggregatorLock.QuantumTarget;
  *(_OWORD *)(LogEntry + 40) = *(_OWORD *)&PopPowerAggregatorLock.StackLimit;
  *(_QWORD *)(LogEntry + 56) = PopPowerAggregatorLock.ThreadLock;
  *(_OWORD *)(LogEntry + 64) = *(_OWORD *)&PopPowerAggregatorLock.CycleTime;
  *(_OWORD *)(LogEntry + 80) = *(_OWORD *)&PopPowerAggregatorLock.KernelStack;
  PopPowerAggregatorDiagTraceHandlerInvoke(&PopPowerAggregatorLock.QuantumTarget, &PopPowerAggregatorLock.CycleTime);
  v1 = guard_dispatch_icall_no_overrides(
         (__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink,
         3LL * SLODWORD(PopPowerAggregatorLock.QuantumTarget));
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink, 4) + 24) = v1;
  return v1;
}
