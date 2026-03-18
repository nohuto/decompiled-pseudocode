/*
 * XREFs of PopSstDiagInitializeResumeTimer @ 0x140C03050
 * Callers:
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405B8EB8 (HvlQueryHypervisorTscAdjustment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 PopSstDiagInitializeResumeTimer()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  char v2; // si
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v4; // rdi
  __int64 HypervisorTscAdjustment; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v1 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v2 = guard_dispatch_icall_no_overrides((__int64)&v7, (__int64)&v8);
  if ( LOBYTE(stru_140F10828.OtherOperationCount) )
  {
    v2 = 1;
    v7 = qword_140F0B0C0;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.QuadPart - PpmConvertTime(__rdtsc() - v8 - v7, v1, PopQpcFrequency);
  if ( v2 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    v7 -= HypervisorTscAdjustment;
    v0 = HypervisorTscAdjustment;
    v4 -= PpmConvertTime(v7, v1, PopQpcFrequency);
  }
  result = v7;
  qword_140F0B0C8 = v0;
  qword_140F0B0C0 = v7;
  qword_140F0B0D0 = v4;
  return result;
}
