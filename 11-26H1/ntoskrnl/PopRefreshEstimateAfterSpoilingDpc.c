/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x14060F970
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
