/*
 * XREFs of CmSiAllocateMemory @ 0x1404BE3D8
 * Callers:
 *     CmpHiveCachePopulateHiveEntry @ 0x140862118 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x1408B58BC (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408B5DB0 (CmpQueryFileSecurityDescriptor.c)
 *     HvpViewMapCreateView @ 0x1408B868C (HvpViewMapCreateView.c)
 *     CmpVolumeContextCreate @ 0x1409062A8 (CmpVolumeContextCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 CmSiAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
