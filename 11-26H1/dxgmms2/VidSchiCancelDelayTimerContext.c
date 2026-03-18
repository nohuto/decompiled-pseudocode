/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x140041090
 * Callers:
 *     VidSchiCancelDelayTimerDevice @ 0x1400C06D4 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchFlushContext @ 0x140116BF0 (VidSchFlushContext.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x140041100 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl

  if ( !KeCancelTimer((PKTIMER)(a2 + 520)) )
    KeFlushQueuedDpcs();
  v3 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, (PVOID)a2, 0LL, 0LL);
  KeLowerIrql(v3);
}
