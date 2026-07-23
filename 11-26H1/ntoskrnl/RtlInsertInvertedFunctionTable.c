/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x140429FF4
 * Callers:
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 * Callees:
 *     RtlpInsertInvertedFunctionTableEntry @ 0x14042A070 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042A1AC (MmUnlockLoadedModuleListExclusive.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052F5A4 (MmLockLoadedModuleListExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // r14d
  __int64 v4; // rsi
  ULONG v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // di
  int v9; // ecx
  __int64 v10; // rcx
  ULONG v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v3 = (int)a1;
  v4 = (__int64)RtlImageDirectoryEntryToData(a1, 1u, 3u, &v12);
  v5 = v4 != 0 ? v12 : 0;
  v8 = MmLockLoadedModuleListExclusive(v7, v6, -v4);
  RtlpInsertInvertedFunctionTableEntry(v9, v3, v4, a2, v5);
  LOBYTE(v10) = v8;
  return MmUnlockLoadedModuleListExclusive(v10);
}
