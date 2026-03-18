/*
 * XREFs of KeCanUseHaltOnAddress @ 0x1403E5790
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402B4950 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSignalCallDpcSynchronize @ 0x1402BCAD0 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x1402BCDA0 (ExpGetPoolTagInfoTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1402BD0A0 (KiSwapDirectoryTableBaseTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x1402BDB50 (MiDemoteSlabEntriesDpc.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403E4820 (MiUpdatePageThresholdsDpc.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     KiSetSystemTimeDpc @ 0x1403E4EA0 (KiSetSystemTimeDpc.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x1406CC4E0 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406D40D0 (ExpAeThresholdInitWorker.c)
 *     MiAddMemoryDpcTarget @ 0x1406E7B40 (MiAddMemoryDpcTarget.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1406E8960 (MiFreeUnusedPfnPagesDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 *     MiMakeIoRangePermanentDpc @ 0x1406F4A20 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationIsr @ 0x1406FB670 (MiReapplyImportOptimizationIsr.c)
 *     MiDbgCopyMemoryTarget @ 0x1406FDA80 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140705CE0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14070CDD0 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
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
