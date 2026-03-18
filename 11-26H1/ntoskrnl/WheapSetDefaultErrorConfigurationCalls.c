/*
 * XREFs of WheapSetDefaultErrorConfigurationCalls @ 0x1406D6C6C
 * Callers:
 *     WheaUnconfigureErrorSource @ 0x140BFFE70 (WheaUnconfigureErrorSource.c)
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
