/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x180065170
 * Callers:
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlNumberOfSetBits @ 0x1800E6180 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rsi
  unsigned int v7; // r14d
  int v8; // ebp
  _DWORD v10[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v10[1] = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), a2);
  v7 = 8 * a3;
  v8 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 15LL, a2, v7);
  if ( v8 >= 0 )
  {
    v10[0] = v7;
    v11 = a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(v10);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
