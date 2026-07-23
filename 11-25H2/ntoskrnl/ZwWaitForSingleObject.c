/*
 * XREFs of ZwWaitForSingleObject @ 0x14069B1C0
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A5F80 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x14063DDB0 (DifZwWaitForSingleObjectWrapper.c)
 *     MiZeroPageThread @ 0x140685110 (MiZeroPageThread.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1406FEDF4 (FsRtlpRegisterProviderWithMUP.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1407B04DC (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408EB938 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1408EBC00 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
