/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1404A4708
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x1404A4648 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1409E6340 (LdrpResGetMappingSize.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x140701EA0 (MmUnlockLoadedDataTableEntryShared.c)
 */

__int64 __fastcall LdrpKrnGetDataTableEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = MiLockLoadedDataTableEntry(a1, 0LL);
  v2 = v1;
  if ( v1 )
    MmUnlockLoadedDataTableEntryShared(v1);
  return v2;
}
