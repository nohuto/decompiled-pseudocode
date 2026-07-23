/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x1800855C0
 * Callers:
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlNumberOfSetBits @ 0x1800E4390 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, void *a2, int a3)
{
  _RTL_SRWLOCK *v6; // rsi
  ULONG v7; // r14d
  NTSTATUS v8; // ebp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v7 = 8 * a3;
  v8 = NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadCpuSets, a2, v7);
  if ( v8 >= 0 )
  {
    BitMapHeader.SizeOfBitMap = v7;
    BitMapHeader.Buffer = (unsigned int *)a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(&BitMapHeader);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
