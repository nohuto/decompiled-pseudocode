/*
 * XREFs of KeIsForceParkingEnabled @ 0x14043DBE0
 * Callers:
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022AB98 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E5CF4 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     <none>
 */

bool KeIsForceParkingEnabled()
{
  return KiForceParkingConfiguration != 0;
}
