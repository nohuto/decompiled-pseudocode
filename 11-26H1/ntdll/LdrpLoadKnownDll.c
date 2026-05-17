/*
 * XREFs of LdrpLoadKnownDll @ 0x180082910
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800824B0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x1800825C0 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x180082A50 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindKnownDll @ 0x180082BE0 (LdrpFindKnownDll.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(char *a1)
{
  int v1; // eax
  __int64 v2; // rdi
  char *v3; // rbx
  char v4; // al
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int LoadedDllByNameLockHeld; // edi
  char ArgList[16]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = *((_QWORD *)a1 + 7);
  v3 = a1;
  *(_OWORD *)ArgList = 0LL;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = LdrpCheckKnownDllFullPath(a1, ArgList);
    a1 = ArgList;
  }
  else
  {
    v4 = (v1 & 0x28) == 32;
  }
  if ( !v4 )
    return 3221225781LL;
  v5 = v2 + 72;
  result = LdrpFindKnownDll((char)a1);
  if ( (int)result >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5285LL);
    v10 = 0LL;
    *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(v2 + 88));
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, v7);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                v2 + 88,
                                v2 + 72,
                                *((unsigned int *)v3 + 8),
                                &v10,
                                *(_DWORD *)(v2 + 264));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v10 )
    {
      LdrpLoadContextReplaceModule(v3);
    }
    else
    {
      LdrpLogDllState(0LL, v5, 5290LL);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, 0LL);
    }
    NtClose(0LL);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
