/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140A9E908
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14071E5F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140CC8E20 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140CC9164 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CCD550 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CCD5FC (PipProcessPendingServices.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
