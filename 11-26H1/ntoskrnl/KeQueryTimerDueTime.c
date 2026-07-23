/*
 * XREFs of KeQueryTimerDueTime @ 0x1404C2994
 * Callers:
 *     ExGetWakeTimerList @ 0x1404241AC (ExGetWakeTimerList.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x140532230 (ExGetNextWakeTimeForDeepSleep.c)
 *     NtQueryTimer @ 0x140840DA0 (NtQueryTimer.c)
 *     ExGetNextWakeTime @ 0x140C12EE0 (ExGetNextWakeTime.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx

  v3 = a1;
  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3, v6, a3);
  if ( (*(_BYTE *)(v3 + 3) & 0x40) != 0 )
    v4 = *(_QWORD *)(v3 + 24);
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
