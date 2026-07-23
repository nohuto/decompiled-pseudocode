/*
 * XREFs of KeCanUseHaltOnAddress @ 0x1403E8980
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402FF620 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x140307790 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x140307A60 (ExpGetPoolTagInfoTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140307D60 (KiSwapDirectoryTableBaseTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E7A10 (MiUpdatePageThresholdsDpc.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x1406D0510 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406D8150 (ExpAeThresholdInitWorker.c)
 *     MiAddMemoryDpcTarget @ 0x1406EC7F0 (MiAddMemoryDpcTarget.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1406ED600 (MiFreeUnusedPfnPagesDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiMakeIoRangePermanentDpc @ 0x1406F9690 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationIsr @ 0x140700340 (MiReapplyImportOptimizationIsr.c)
 *     MiDbgCopyMemoryTarget @ 0x140702750 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14070A9B0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x140711A80 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 */

bool KeCanUseHaltOnAddress()
{
  char v0; // bl
  unsigned __int8 CurrentIrql; // al

  v0 = KiHaltOnAddressFlags;
  if ( (KiHaltOnAddressFlags & 2) == 0 || !KeAreInterruptsEnabled() )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  return (v0 & 4) != 0 || CurrentIrql < 0xEu;
}
