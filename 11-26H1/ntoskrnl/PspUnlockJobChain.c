/*
 * XREFs of PspUnlockJobChain @ 0x140AACA94
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspSetUILimitJobObject @ 0x1407FF958 (PspSetUILimitJobObject.c)
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAC5A4 (PspGetCpuAndMemoryPartitionImplicit.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAC9DC (PspUnlockJobsAndProcessExclusive.c)
 * Callees:
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 */

void __fastcall PspUnlockJobChain(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rdi

  if ( a1[167] > 1uLL )
    ExReleaseFastResourceExclusive(a1[164] + 56LL, 0LL, a3, a4);
  v6 = a1[167];
  if ( v6 > 2 )
  {
    for ( i = v6 - 2; i; --i )
      ExReleaseFastResourceExclusive(*(_QWORD *)(a1[168] + 8 * i - 8) + 56LL, 0LL, a3, a4);
  }
  if ( a1[167] )
    ExReleaseFastResourceExclusive(a1[163] + 56LL, 0LL, a3, a4);
  PspUnlockJobExclusive((__int64)a1, a2, a3, a4);
}
