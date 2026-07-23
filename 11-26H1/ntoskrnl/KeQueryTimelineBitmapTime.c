/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x14047EAE8
 * Callers:
 *     PoEnergyContextCleanup @ 0x1409CBD6C (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return HIDWORD(KsepShimDbLock.UserWaitTime);
}
