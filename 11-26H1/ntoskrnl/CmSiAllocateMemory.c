/*
 * XREFs of CmSiAllocateMemory @ 0x1404B7C28
 * Callers:
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x1408BBE90 (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     HvpViewMapCreateView @ 0x1408BEC5C (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x140A2E5E0 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 CmSiAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
