/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x18008657C
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x1800864B0 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800DA170 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
