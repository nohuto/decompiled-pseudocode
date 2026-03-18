/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x14042D72C
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14042D038 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A3D5AC (PopPdcIdleResiliencyCallback.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B668A8 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x14042D7D4 (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14042D820 (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // r15
  __int64 ParkNode; // rax
  KSPIN_LOCK *v8; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F10070.SchedulerAssistYieldCounter);
  ParkNode = PpmParkGetParkNode(0LL);
  if ( ParkNode )
  {
    v8 = *(KSPIN_LOCK **)(ParkNode + 1072);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F10070.SchedulerAssistYieldCounter, v6);
  if ( !a1 )
    *a3 -= *a2;
  *a2 = 0LL;
}
