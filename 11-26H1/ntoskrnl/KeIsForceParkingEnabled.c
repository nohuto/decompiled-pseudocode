/*
 * XREFs of KeIsForceParkingEnabled @ 0x1404366F0
 * Callers:
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022C528 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E8664 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     <none>
 */

bool KeIsForceParkingEnabled()
{
  return KiForceParkingConfiguration != 0;
}
