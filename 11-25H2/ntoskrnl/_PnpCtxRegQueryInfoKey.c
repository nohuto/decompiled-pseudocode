/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1409519EC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14080A24C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14080A860 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14080DC50 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14080DF84 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14080E910 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408116CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140811B40 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     PipMigrateCleanService @ 0x140C102F4 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x140951A2C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
