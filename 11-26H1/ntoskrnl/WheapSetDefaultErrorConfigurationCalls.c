/*
 * XREFs of WheapSetDefaultErrorConfigurationCalls @ 0x1406DAD4C
 * Callers:
 *     WheaUnconfigureErrorSource @ 0x140C06080 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     <none>
 */

void (*__fastcall WheapSetDefaultErrorConfigurationCalls(_QWORD *a1))()
{
  void (*result)(); // rax

  a1[2] = HalSystemVectorDispatchEntry;
  a1[3] = xHalPciEarlyRestore;
  a1[4] = WheapDefaultErrSrcCreateRecord;
  a1[5] = HalSystemVectorDispatchEntry;
  result = xHalTimerWatchdogStop;
  a1[6] = xHalTimerWatchdogStop;
  a1[7] = 0LL;
  return result;
}
