/*
 * XREFs of PpmResetIdlePolicy @ 0x1403E6300
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x1403E62E0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x140602D60 (PpmInstallNewIdleStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PpmApplyIdlePolicy @ 0x1403E6340 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403E6434 (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x1403E6518 (PpmScaleIdleStateValues.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues(a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
