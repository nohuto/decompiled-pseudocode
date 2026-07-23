/*
 * XREFs of HalpScanForProfilingCorruption @ 0x140461914
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140221DE0 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x140461810 (HalpTimerClockIpiRoutine.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x140461978 (HalpScanForProfilingCorruptionInternal.c)
 */

__int64 __fastcall HalpScanForProfilingCorruption(unsigned int a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    0LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    1LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    100LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
           101LL,
           a1,
           (LARGE_INTEGER)PerformanceCounter.QuadPart);
}
