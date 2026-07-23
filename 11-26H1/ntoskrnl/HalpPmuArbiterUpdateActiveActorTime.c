/*
 * XREFs of HalpPmuArbiterUpdateActiveActorTime @ 0x14078442C
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x140B5F240 (HalpRequestPmuAccess.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LONGLONG HalpPmuArbiterUpdateActiveActorTime()
{
  __int64 v0; // rbx
  LONGLONG result; // rax
  __int128 v2; // rtt
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(__int64 *)((char *)&HalpPmuArbiter.116 + 4);
  PerformanceFrequency.QuadPart = 0LL;
  v2 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v0);
  result = v2 / PerformanceFrequency.QuadPart;
  *(_QWORD *)(*(_QWORD *)&HalpPmuArbiter.WaitRegister.Flags + 40LL) += result;
  return result;
}
