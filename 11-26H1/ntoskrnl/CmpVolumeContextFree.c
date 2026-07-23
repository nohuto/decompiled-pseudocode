/*
 * XREFs of CmpVolumeContextFree @ 0x140A2E2E0
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x1408BE560 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140A2E5A8 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup();
  CmSiFreeMemory(Privileges);
}
