/*
 * XREFs of PpDevNodeUnlockTree @ 0x140A921A4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D77A4 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D783C (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1405D97D0 (IoTranslateBusAddress.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     PpSystemHiveLimitCallback @ 0x1407A4340 (PpSystemHiveLimitCallback.c)
 *     PnpProcessCompletedEject @ 0x1407A4D50 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1407A4ED8 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x1407A5540 (PipSetDevNodeStateFlags.c)
 *     PpDevCfgProcessDevices @ 0x1407ACC4C (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1407AD030 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407B4A6C (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x1407B4C50 (IopWarmEjectDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC6A00 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExConvertExclusiveToSharedLite @ 0x140431900 (ExConvertExclusiveToSharedLite.c)
 */

__int64 __fastcall PpDevNodeUnlockTree(int a1, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rcx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( !a1 )
  {
    v3 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v3);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
  }
  v5 = a1 - 1;
  if ( !v5 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v3 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v7 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
}
