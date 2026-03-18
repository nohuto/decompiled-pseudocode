/*
 * XREFs of ACPITableLoadCallBack @ 0x1400510E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIPowerScheduleDpc @ 0x140027488 (ACPIPowerScheduleDpc.c)
 *     ACPIInternalMoveList @ 0x140039EE8 (ACPIInternalMoveList.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051218 (ACPIGpeBuildWakeMasks.c)
 *     Simulator_RefreshTree @ 0x14006CC50 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (__int64)ACPITableLoadNotifyPnp, 0LL) < 0 )
      ACPIInternalError(0x1100A6uLL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
