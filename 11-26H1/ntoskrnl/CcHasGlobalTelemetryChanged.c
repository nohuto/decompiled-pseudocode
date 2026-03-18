/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1404F2470
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140B0FC90 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)&EmpParseLock.Timer.Processor
    || EmpParseLock.WaitBlock[0].WaitListEntry.Flink
    || __PAIR128__((unsigned __int64)EmpParseLock.WaitBlock[0].WaitListEntry.Blink, 0LL) != *(unsigned __int64 *)&EmpParseLock.WaitBlockFill11[16]
    || EmpParseLock.WaitBlock[0].Thread )
  {
    return 1;
  }
  return result;
}
