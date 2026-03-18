/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0
 * Callers:
 *     PsTerminateServerSilo @ 0x1407EE820 (PsTerminateServerSilo.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     NtTerminateJobObject @ 0x140958500 (NtTerminateJobObject.c)
 *     PspJobClose @ 0x140958D70 (PspJobClose.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140959B30 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140A77CC8 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(volatile signed __int32 *Object, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr(Object + 388, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy((PVOID)Object, (__int64)&v8, 2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob((PVOID)Object);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(Object, v6, a2, 1825LL);
  return v3;
}
