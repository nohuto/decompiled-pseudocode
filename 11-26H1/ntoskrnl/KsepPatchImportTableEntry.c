/*
 * XREFs of KsepPatchImportTableEntry @ 0x1407C0D84
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1404BD460 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MmReplaceImportEntry @ 0x1406EBD38 (MmReplaceImportEntry.c)
 */

__int64 __fastcall KsepPatchImportTableEntry(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  int v5; // ebx
  _QWORD *v7; // rdi
  unsigned int v8; // esi
  ULONG_PTR v9; // rax
  __int64 v10; // r14
  unsigned int i; // ecx

  v5 = 0;
  v7 = a2;
  if ( !a2 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  v8 = a3 >> 3;
  v9 = MmLockLoadedDataTableEntry(*(_QWORD *)(a1 + 48));
  v10 = v9;
  for ( i = 0; i < v8; ++i )
  {
    if ( *v7 == a4 )
    {
      MmReplaceImportEntry(v9, (ULONG_PTR)v7, a5);
      v5 = 1;
      break;
    }
    ++v7;
  }
  MmUnlockLoadedDataTableEntry(v10);
  return v5 == 0 ? 0xC0000225 : 0;
}
