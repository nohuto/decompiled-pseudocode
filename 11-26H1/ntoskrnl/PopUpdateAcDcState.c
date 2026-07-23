/*
 * XREFs of PopUpdateAcDcState @ 0x1404E3404
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceAcDcStateChange @ 0x1407D54C4 (PopDiagTraceAcDcStateChange.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // di
  KIRQL v4; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) = a1;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v4);
  v2 = 1;
  PopCurrentPowerState(&v5);
  PopDiagTraceAcDcStateChange(a1, HIDWORD(v5), DWORD2(v5));
  return v2;
}
