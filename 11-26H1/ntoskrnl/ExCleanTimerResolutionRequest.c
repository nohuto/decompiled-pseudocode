/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x1404E2B78
 * Callers:
 *     PspExitProcess @ 0x140A43620 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x140726C50 (ZwSetTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagFreeUsermodeStack @ 0x140B37E8C (PoDiagFreeUsermodeStack.c)
 */

__int64 ExCleanTimerResolutionRequest()
{
  _KPROCESS *Process; // rbx
  KIRQL v1; // al
  unsigned __int64 DeepFreezeStartTime; // r9
  _KAFFINITY_EX *Affinity; // r8
  void *AutoBoostState2; // rdi
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution((unsigned int)KeMaximumIncrement, 0LL, &v6);
  ExAcquireTimeRefreshLockExclusive();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread);
  DeepFreezeStartTime = Process[3].DeepFreezeStartTime;
  if ( *(_KPROCESS **)(DeepFreezeStartTime + 8) != (_KPROCESS *)&Process[3].DeepFreezeStartTime
    || (Affinity = Process[3].Affinity, *(_KPROCESS **)&Affinity->Count != (_KPROCESS *)&Process[3].DeepFreezeStartTime) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Affinity->Count = DeepFreezeStartTime;
  *(_QWORD *)(DeepFreezeStartTime + 8) = Affinity;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v1);
  AutoBoostState2 = Process[3].AutoBoostState2;
  Process[3].AutoBoostState2 = 0LL;
  result = ExReleaseTimeRefreshLockExclusive();
  if ( AutoBoostState2 )
    return PoDiagFreeUsermodeStack(AutoBoostState2);
  return result;
}
