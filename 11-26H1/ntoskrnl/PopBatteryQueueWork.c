/*
 * XREFs of PopBatteryQueueWork @ 0x1404DA29C
 * Callers:
 *     PopBatteryIrpComplete @ 0x1404DA220 (PopBatteryIrpComplete.c)
 *     PopPowerAdapterIrpComplete @ 0x1404F0F10 (PopPowerAdapterIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x14060F900 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x14060F970 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407DB440 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x1407DD720 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopPowerAdapterRemove @ 0x1407DDB70 (PopPowerAdapterRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1407DDD30 (PopUsbErrorWNFNotificationCallback.c)
 *     PopSpoilBatteryEstimate @ 0x1409F7E00 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140AAF2C0 (PopBatteryUpdateCurrentState.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
