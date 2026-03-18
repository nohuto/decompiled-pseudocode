/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140952394
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PnpRegCopyKeySecurityTree @ 0x14071765C (PnpRegCopyKeySecurityTree.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14072B4B0 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140809E68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigExists @ 0x140C0F864 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C102F4 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C14C50 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x1409525D4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
