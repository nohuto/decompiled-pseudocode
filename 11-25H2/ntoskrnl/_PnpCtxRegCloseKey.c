/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140A0E4E4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140690E10 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C0F108 (PipCheckSystemFirmwareUpdated.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C10AE0 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C10E10 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C146B0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C148C0 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C14EB4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C14F5C (PipProcessPendingServices.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
