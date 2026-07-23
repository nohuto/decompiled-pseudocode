/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14029AC70
 * Callers:
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14029ABE0 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x1404D3B24 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x1404F8178 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // ebx
  int v6; // r15d
  char v7; // bp
  unsigned int InterruptCount; // r14d
  volatile signed __int32 v9; // ecx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // [rsp+70h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v13 = 0;
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
    InterruptCount = 0;
  }
  else
  {
    v7 = 1;
    v11 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = v11;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v9 = *a1;
  if ( (v9 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      KeYieldProcessorEx(&v13);
      v9 = *a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000001 );
    v3 = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v3;
  if ( v7 )
  {
    PerfLogSpinLockRelease(a1, a2, __rdtsc());
    v12 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v12, v12 - v6, v3, InterruptCount, 4);
  }
  return 1LL;
}
