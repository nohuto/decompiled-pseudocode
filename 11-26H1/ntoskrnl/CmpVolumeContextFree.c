/*
 * XREFs of CmpVolumeContextFree @ 0x140905BAC
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x1408B7F90 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140906270 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup();
  CmSiFreeMemory(Privileges);
}
