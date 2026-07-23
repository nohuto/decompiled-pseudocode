/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140C1081C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  qword_140F10B70 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PopDirectedDripsDiagLock.WriteOperationCount;
  Prcb = KeGetPrcb(0);
  v1 = &qword_140004D88;
  v2 = 59LL;
  qword_140F10B38 = 1000LL * *(unsigned int *)(Prcb + 68);
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140F10A58 + *v1);
      if ( v4 > PopDirectedDripsDiagLock.InGlobalForegroundList )
        v4 -= PopDirectedDripsDiagLock.ReadOperationCount;
      v3 = *v1;
      *(__int64 *)((char *)&qword_140F10A58 + v3) = PpmConvertTime(
                                                      v4,
                                                      1000000LL * KeGetCurrentPrcb()->MHz,
                                                      PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = qword_140F10B30 - qword_140F10AC8;
  qword_140F10AC0 = qword_140F10B30 - qword_140F10AC8;
  return result;
}
