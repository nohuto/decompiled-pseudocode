/*
 * XREFs of PpDevNodeUnlockTree @ 0x140A96CF4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D0F6C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1405DBFD0 (IoTranslateBusAddress.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     PpSystemHiveLimitCallback @ 0x1407A6E80 (PpSystemHiveLimitCallback.c)
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1407A7A18 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x1407A8080 (PipSetDevNodeStateFlags.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1407B0090 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407B7ACC (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC85F0 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExConvertExclusiveToSharedLite @ 0x14041E930 (ExConvertExclusiveToSharedLite.c)
 */

__int64 __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v3 = a1 - 1;
  if ( !v3 || (v4 = v3 - 1) == 0 || (v5 = v4 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v5 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
