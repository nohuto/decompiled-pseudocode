/*
 * XREFs of rimSleep @ 0x1401FDBE0
 * Callers:
 *     RIMOpenDevWorker @ 0x140093824 (RIMOpenDevWorker.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     <none>
 */

NTSTATUS rimSleep()
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  return KeDelayExecutionThread(1, 0, &Interval);
}
