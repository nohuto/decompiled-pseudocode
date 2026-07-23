/*
 * XREFs of MmCompactServiceTable @ 0x140881670
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140CDDD28 (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MiCompactServiceTable @ 0x14088106C (MiCompactServiceTable.c)
 */

__int64 __fastcall MmCompactServiceTable(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned int v4; // ebx

  v1 = MmLockLoadedDataTableEntry(a1);
  v2 = v1;
  if ( !v1 )
    return 3221226021LL;
  v4 = MiCompactServiceTable(v1);
  MmUnlockLoadedDataTableEntry(v2);
  return v4;
}
