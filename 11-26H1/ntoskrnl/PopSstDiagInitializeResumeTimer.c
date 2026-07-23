/*
 * XREFs of PopSstDiagInitializeResumeTimer @ 0x140C09260
 * Callers:
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1405BB728 (HvlQueryHypervisorTscAdjustment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 InGlobalForegroundList; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0LL;
  InGlobalForegroundList = 0LL;
  v8 = 0LL;
  v1 = 1000000LL * KeGetCurrentPrcb()->MHz;
  v2 = guard_dispatch_icall_no_overrides((__int64)&InGlobalForegroundList, (__int64)&v8);
  if ( PoResumeFromHibernate )
  {
    v2 = 1;
    InGlobalForegroundList = PopDirectedDripsDiagLock.InGlobalForegroundList;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.QuadPart - PpmConvertTime(__rdtsc() - v8 - InGlobalForegroundList, v1, PopQpcFrequency);
  if ( v2 )
  {
    HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
    InGlobalForegroundList -= HypervisorTscAdjustment;
    v0 = HypervisorTscAdjustment;
    v4 -= PpmConvertTime(InGlobalForegroundList, v1, PopQpcFrequency);
  }
  result = InGlobalForegroundList;
  PopDirectedDripsDiagLock.ReadOperationCount = v0;
  PopDirectedDripsDiagLock.InGlobalForegroundList = InGlobalForegroundList;
  PopDirectedDripsDiagLock.WriteOperationCount = v4;
  return result;
}
