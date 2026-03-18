/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140485178
 * Callers:
 *     PoEnergyContextCleanup @ 0x14095042C (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409505D0 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1);
}
