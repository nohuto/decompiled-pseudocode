/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140974BF4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407A7548 (PnpRegCopyKeySecurityTree.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14089DB98 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigExists @ 0x140CC7B74 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140CC8610 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140CCD2F0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
