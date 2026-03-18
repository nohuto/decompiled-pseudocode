/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14091A194
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407A4A08 (PnpRegCopyKeySecurityTree.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B5EC0 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140897798 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigExists @ 0x140CC1AA4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140CC2540 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140CC7200 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14091A1C0 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
