/*
 * XREFs of ZwWaitForSingleObject @ 0x140723470
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E3E90 (CcDeletePrivateVolumeCacheMap.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404FAFE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1406BF7E0 (DifZwWaitForSingleObjectWrapper.c)
 *     MiZeroPageThread @ 0x14070F040 (MiZeroPageThread.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14078E338 (FsRtlpRegisterProviderWithMUP.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140AEC16C (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140AF0998 (PfSnVolumeCheckSeekPenalty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
