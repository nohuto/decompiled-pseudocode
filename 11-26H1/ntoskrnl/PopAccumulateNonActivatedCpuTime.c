/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x140421DFC
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140421708 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopPdcIdleResiliencyCallback @ 0x1409F8FCC (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B69834 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x140421EA4 (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140421EF0 (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // r15
  __int64 ParkNode; // rax
  KSPIN_LOCK *v8; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea);
  ParkNode = PpmParkGetParkNode(0LL);
  if ( ParkNode )
  {
    v8 = *(KSPIN_LOCK **)(ParkNode + 1072);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea, v6);
  if ( !a1 )
    *a3 -= *a2;
  *a2 = 0LL;
}
