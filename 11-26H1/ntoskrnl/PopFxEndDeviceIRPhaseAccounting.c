/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x14042D59C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x14042D5E8 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
  if ( stru_140F10828.Padding[2] )
    v2 = PopFxAccumulateDeviceIRPhaseAccounting(a1);
  LOBYTE(stru_140F10828.Padding[3]) = 0;
  KeReleaseSpinLock(&stru_140F10070.Spare35[1], v2);
}
