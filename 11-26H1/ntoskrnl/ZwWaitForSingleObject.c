/*
 * XREFs of ZwWaitForSingleObject @ 0x140728040
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404F45F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1406C33C0 (DifZwWaitForSingleObjectWrapper.c)
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140790E68 (FsRtlpRegisterProviderWithMUP.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140AEF17C (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140AF3568 (PfSnVolumeCheckSeekPenalty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
