/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140C129A8
 * Callers:
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  KIRQL v3; // al

  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = 0;
  v2 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 160) = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&stru_140E66D40.InGlobalUpdateVpThreadPriorityList);
    *(_DWORD *)(v2 + 164) = ++stru_140E66D40.RealtimePriorityFloor;
    _InterlockedOr((_DWORD *)&xmmword_140F13528 + 1, 1u);
    KeReleaseSpinLock(&stru_140E66D40.InGlobalUpdateVpThreadPriorityList, v3);
    KeInitializeTimer((PKTIMER)(v2 + 64));
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
