/*
 * XREFs of rimSleep @ 0x1401D5CEC
 * Callers:
 *     RIMOpenDevWorker @ 0x1401307BC (RIMOpenDevWorker.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     <none>
 */

NTSTATUS rimSleep()
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  return KeDelayExecutionThread(1, 0, &Interval);
}
