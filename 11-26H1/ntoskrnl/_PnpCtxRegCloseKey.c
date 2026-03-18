/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140A9BD98
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140719960 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC1338 (PipCheckSystemFirmwareUpdated.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140CC2D50 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140CC3094 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CC6C40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CC6E70 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140CC7460 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140CC750C (PipProcessPendingServices.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
