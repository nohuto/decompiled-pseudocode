/*
 * XREFs of KeRebaselineInterruptTime @ 0x140514E68
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140C078A0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
