/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x1405E806C
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x14061A1B0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAdjustThreadTimer @ 0x1405F8DC8 (KiAdjustThreadTimer.c)
 */

void __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r14
  _QWORD *i; // rbx
  unsigned __int8 v8; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  KiAcquireProcessLockExclusive(a1, &v8);
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, CurrentPrcb, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v8);
}
