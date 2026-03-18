/*
 * XREFs of MmCompactServiceTable @ 0x14087B270
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140CD79A8 (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1404C3C10 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
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
