/*
 * XREFs of PopBatteryQueueWork @ 0x1404E0BBC
 * Callers:
 *     PopBatteryIrpComplete @ 0x1404E0B40 (PopBatteryIrpComplete.c)
 *     PopPowerAdapterIrpComplete @ 0x1404F7900 (PopPowerAdapterIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x14060C7A0 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x14060C810 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryAdd @ 0x1407D7CF0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407D7E20 (PopBatteryRemove.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x1407D9AC0 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopPowerAdapterRemove @ 0x1407D9BD0 (PopPowerAdapterRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1407D9D90 (PopUsbErrorWNFNotificationCallback.c)
 *     PopSpoilBatteryEstimate @ 0x140A3C3E0 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140AB12D0 (PopBatteryUpdateCurrentState.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopWeakChargerLock.SListFaultAddress);
  if ( !_InterlockedOr((volatile signed __int32 *)&PopWeakChargerLock.SListFaultAddress, a1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWeakChargerLock.StackLimit, DelayedWorkQueue);
}
