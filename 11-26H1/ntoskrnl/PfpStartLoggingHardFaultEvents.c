/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140C0C798
 * Callers:
 *     PfPowerActionNotify @ 0x140C071B0 (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
    v3 = KeAcquireSpinLockRaiseToDpc(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList);
    *(_DWORD *)(v2 + 164) = ++stru_140E66B30.RealtimePriorityFloor;
    _InterlockedOr((_DWORD *)&stru_140F12D20.Padding[2] + 1, 1u);
    KeReleaseSpinLock(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList, v3);
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
