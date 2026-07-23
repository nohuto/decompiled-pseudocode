/*
 * XREFs of KiResumeClockTimer @ 0x1405262C8
 * Callers:
 *     KeResumeClockTimer @ 0x1405262B0 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1405F0A60 (KeResumeClockTimerSafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiEventClockStateChange @ 0x1404866E0 (KiEventClockStateChange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiResumeClockTimer(__int64 a1, __int64 a2)
{
  char v2; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  LARGE_INTEGER InterruptTimePrecise; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockState;
  result = (unsigned int)KiClockTimerOwner;
  v10 = 0LL;
  if ( CurrentPrcb->Number == (_DWORD)KiClockTimerOwner )
  {
    v2 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    goto LABEL_8;
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  LOBYTE(v7) = 1;
  if ( !KiClockTimerPerCpuTickScheduling )
    LOBYTE(v7) = v2;
  result = guard_dispatch_icall_no_overrides(v7, v6);
  if ( !v2 )
  {
LABEL_8:
    if ( !KiClockTimerPerCpuTickScheduling )
      return result;
    goto LABEL_9;
  }
  ++KiClockStats;
  CurrentPrcb->ClockOwner = 1;
LABEL_9:
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KiSetClockTimer(
      (__int64)CurrentPrcb,
      InterruptTimePrecise,
      -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
      KeMinimumIncrement,
      3,
      1,
      0);
    if ( v2 || !KiSerializeTimerExpiration )
      KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, InterruptTimePrecise, v2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  result = KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v10, (int *)&v11);
  if ( v2 )
  {
    if ( v4 == 2 )
      LOBYTE(v4) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v4, &v11, &v10);
    result = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  return result;
}
