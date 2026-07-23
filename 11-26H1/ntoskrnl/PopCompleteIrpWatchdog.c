/*
 * XREFs of PopCompleteIrpWatchdog @ 0x1403BDEDC
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopIrpWatchdogBugcheck @ 0x140603508 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall PopCompleteIrpWatchdog(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx
  KIRQL v3; // bp

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 288));
  if ( *(_DWORD *)(v2 + 296) == 1 && !KeCancelTimer((PKTIMER)(v2 + 56)) )
    v1 = *(_DWORD *)(v2 + 296) == 1;
  *(_DWORD *)(v2 + 296) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 288), v3);
  if ( v1 )
    PopIrpWatchdogBugcheck(v2);
}
