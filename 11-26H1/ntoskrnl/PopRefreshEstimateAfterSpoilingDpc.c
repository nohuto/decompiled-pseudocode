/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x14060C810
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
