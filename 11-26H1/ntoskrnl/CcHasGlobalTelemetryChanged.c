/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1404EBA50
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140B114C0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( EmpParseLock.WaitBlock[0].WaitListEntry.Flink
    || __PAIR128__((unsigned __int64)EmpParseLock.WaitBlock[0].WaitListEntry.Blink, 0LL) != *(unsigned __int64 *)&EmpParseLock.WaitBlockFill11[16]
    || __PAIR128__((unsigned __int64)EmpParseLock.WaitBlock[0].Thread, 0LL) != (unsigned __int64)EmpParseLock.WaitBlock[0].Object )
  {
    return 1;
  }
  return result;
}
