/*
 * XREFs of LdrpFindExistingModule @ 0x18007C62C
 * Callers:
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x18007D9B0 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180079850 (LdrpFindLoadedDllByNameLockHeld.c)
 */

__int64 __fastcall LdrpFindExistingModule(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, int a4, _QWORD *a5)
{
  _UNICODE_STRING *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(String1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
