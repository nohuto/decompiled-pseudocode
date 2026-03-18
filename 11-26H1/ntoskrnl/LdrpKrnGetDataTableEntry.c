/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1404AB078
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x1404AAFB8 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x140A9B310 (LdrpResGetMappingSize.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1406FD1D0 (MmUnlockLoadedDataTableEntryShared.c)
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
