/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x140421C6C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x140421CB8 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_140F100F0 )
    v2 = PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_140F100F8 = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
