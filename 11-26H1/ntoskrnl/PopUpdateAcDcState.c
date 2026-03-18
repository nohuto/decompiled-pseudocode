/*
 * XREFs of PopUpdateAcDcState @ 0x1404EA054
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceAcDcStateChange @ 0x1407D2424 (PopDiagTraceAcDcStateChange.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // di
  KIRQL v4; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( dword_140F106CC == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  dword_140F106CC = a1;
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v4);
  v2 = 1;
  PopCurrentPowerState(&v5);
  PopDiagTraceAcDcStateChange(a1, HIDWORD(v5), DWORD2(v5));
  return v2;
}
