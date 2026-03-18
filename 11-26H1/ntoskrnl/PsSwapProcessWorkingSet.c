/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1407F0C88
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 * Callees:
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspComputeExecutionState @ 0x140A8FE0C (PspComputeExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140ADE6AC (PspChangeProcessExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x140AF9C6C (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  ULONG_PTR v13[10]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v13, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
  v6 = Process[1].Padding[3];
  if ( v6 )
  {
    ExInitializeFastOwnerEntry((__int64)v13);
    ExAcquireFastResourceShared((__int64 *)(v6 + 56), (ULONG_PTR)v13, 1);
    v5 = PspComputeExecutionState(v6);
  }
  v7 = v5 | 2u;
  if ( !a2 )
    v7 = v5 & 0xFD;
  PspRequestProcessExecutionState(Process, v7, 1LL);
  if ( v6 )
    ExReleaseFastResourceShared(v6 + 56, (ULONG_PTR)v13, v8, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((unsigned __int64)&Process[1]);
  v10 = PspChangeProcessExecutionState(Process);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11);
  return v10;
}
