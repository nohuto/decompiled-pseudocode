/*
 * XREFs of PspTerminateAllProcessesInJobHierarchy @ 0x140A0717C
 * Callers:
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobClose @ 0x140A06ED0 (PspJobClose.c)
 *     NtTerminateJobObject @ 0x140A070E0 (NtTerminateJobObject.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     EtwTraceJob @ 0x140A07238 (EtwTraceJob.c)
 */

char __fastcall PspTerminateAllProcessesInJobHierarchy(PRKEVENT Event, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  _InterlockedOr((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x80u);
  LODWORD(v8) = a2;
  BYTE4(v8) = a3 != 0;
  PspEnumJobsAndProcessesInJobHierarchy(
    (__int64 *)&Event->Header.Lock,
    0,
    (int)PspTerminateProcessesJobCallback,
    0,
    (__int64)&v8,
    2);
  v6 = BYTE4(v8);
  if ( (v8 & 0x200000000LL) != 0 )
  {
    v3 = 1;
  }
  else
  {
    PspEvaluateAndNotifyEmptyJob(Event, 0, 0);
    v6 = BYTE4(v8);
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(Event, v6, a2, 1825LL);
  return v3;
}
