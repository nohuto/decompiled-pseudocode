/*
 * XREFs of PspUnlockJobChain @ 0x140AAEE38
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     PspChargeJobWakeCounter @ 0x140AAE650 (PspChargeJobWakeCounter.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAE944 (PspGetCpuAndMemoryPartitionImplicit.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAED7C (PspUnlockJobsAndProcessExclusive.c)
 * Callees:
 *     ExReleaseFastResourceExclusive @ 0x1404912F0 (ExReleaseFastResourceExclusive.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 */

void __fastcall PspUnlockJobChain(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // rdi

  v4 = a3;
  if ( a1[167] > 1uLL )
    ExReleaseFastResourceExclusive(a1[164] + 56LL, 0LL, a3, a4);
  v7 = a1[167];
  if ( v7 > 2 )
  {
    for ( i = v7 - 2; i; --i )
      ExReleaseFastResourceExclusive(*(_QWORD *)(a1[168] + 8 * i - 8) + 56LL, 0LL, a3, a4);
  }
  if ( a1[167] )
    ExReleaseFastResourceExclusive(a1[163] + 56LL, 0LL, a3, a4);
  if ( (v4 & 1) == 0 )
    PspUnlockJobExclusive((__int64)a1, a2, a3, a4);
}
