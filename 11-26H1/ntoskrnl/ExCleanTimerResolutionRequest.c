/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x1404DC1EC
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x14072B820 (ZwSetTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagFreeUsermodeStack @ 0x140B3A09C (PoDiagFreeUsermodeStack.c)
 */

__int64 ExCleanTimerResolutionRequest()
{
  _KPROCESS *Process; // rbx
  KIRQL v1; // al
  unsigned __int64 DeepFreezeStartTime; // r9
  _KAFFINITY_EX *Affinity; // r8
  void *AutoBoostState2; // rdi
  __int64 result; // rax
  ULONG ActualTime; // [rsp+30h] [rbp+8h] BYREF

  ActualTime = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualTime);
  ExAcquireTimeRefreshLockExclusive();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  DeepFreezeStartTime = Process[3].DeepFreezeStartTime;
  if ( *(_KPROCESS **)(DeepFreezeStartTime + 8) != (_KPROCESS *)&Process[3].DeepFreezeStartTime
    || (Affinity = Process[3].Affinity, *(_KPROCESS **)&Affinity->Count != (_KPROCESS *)&Process[3].DeepFreezeStartTime) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Affinity->Count = DeepFreezeStartTime;
  *(_QWORD *)(DeepFreezeStartTime + 8) = Affinity;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v1);
  AutoBoostState2 = Process[3].AutoBoostState2;
  Process[3].AutoBoostState2 = 0LL;
  result = ExReleaseTimeRefreshLockExclusive();
  if ( AutoBoostState2 )
    return PoDiagFreeUsermodeStack(AutoBoostState2);
  return result;
}
