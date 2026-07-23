/*
 * XREFs of PpmResetIdlePolicy @ 0x1402F31E0
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x1402F31C0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x140605810 (PpmInstallNewIdleStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmApplyIdlePolicy @ 0x1402F3220 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x1402F3314 (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x1402F33F8 (PpmScaleIdleStateValues.c)
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
