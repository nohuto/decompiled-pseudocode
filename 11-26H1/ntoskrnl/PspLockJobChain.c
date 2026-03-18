/*
 * XREFs of PspLockJobChain @ 0x140AAEBB4
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     PspChargeJobWakeCounter @ 0x140AAE650 (PspChargeJobWakeCounter.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAE944 (PspGetCpuAndMemoryPartitionImplicit.c)
 *     PspLockJobsAndProcessExclusive @ 0x140AAEA78 (PspLockJobsAndProcessExclusive.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     PspLockJobAssignment @ 0x140AAECA4 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x140AAED18 (PspUnlockJobAssignment.c)
 */

char __fastcall PspLockJobChain(__int64 a1, __int64 a2, char a3)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  char result; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rsi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  if ( (a3 & 1) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    PspLockJobAssignment(a2);
  }
  v6 = *(_QWORD *)(a1 + 1336);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireFastResourceExclusive((struct _KTHREAD *)(*(_QWORD *)(a1 + 1312) + 56LL), 0LL, 1);
      v8 = *(_QWORD *)(a1 + 1336);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireFastResourceExclusive(
            (struct _KTHREAD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1344) + 8 * i - 8) + 56LL),
            0LL,
            1);
      }
    }
    ExAcquireFastResourceExclusive((struct _KTHREAD *)(*(_QWORD *)(a1 + 1304) + 56LL), 0LL, 1);
  }
  result = ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
  if ( !v5 )
    return PspUnlockJobAssignment(a2);
  return result;
}
