/*
 * XREFs of KeRebaselineInterruptTime @ 0x14050E8D8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
