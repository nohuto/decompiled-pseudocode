/*
 * XREFs of LdrpLoadKnownDll @ 0x180079CB0
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180079850 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180079960 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x180079DF0 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindKnownDll @ 0x180079F80 (LdrpFindKnownDll.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(UNICODE_STRING *p_Source)
{
  int v1; // eax
  wchar_t *Buffer; // rdi
  UNICODE_STRING *v3; // rbx
  char v4; // al
  wchar_t *v5; // rsi
  __int64 result; // rax
  unsigned int LoadedDllByNameLockHeld; // edi
  UNICODE_STRING Source; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_DWORD *)&p_Source[2].Length;
  Buffer = p_Source[3].Buffer;
  Handle = 0LL;
  v3 = p_Source;
  Source = 0LL;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = LdrpCheckKnownDllFullPath(p_Source, &Source);
    p_Source = &Source;
  }
  else
  {
    v4 = (v1 & 0x28) == 32;
  }
  if ( !v4 )
    return 3221225781LL;
  v5 = Buffer + 36;
  result = LdrpFindKnownDll(p_Source, (PUNICODE_STRING)(Buffer + 44), (PUNICODE_STRING)(Buffer + 36), &Handle);
  if ( (int)result >= 0 )
  {
    LdrpLogDllState(*((_QWORD *)Buffer + 6), Buffer + 36, 5285LL);
    v10 = 0LL;
    *((_DWORD *)Buffer + 66) = LdrpHashUnicodeString(Buffer + 44);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (PUNICODE_STRING)(Buffer + 44),
                                (PUNICODE_STRING)(Buffer + 36),
                                *(_DWORD *)&v3[2].Length,
                                &v10,
                                *((_DWORD *)Buffer + 66));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v10 )
    {
      LdrpLoadContextReplaceModule(v3);
    }
    else
    {
      LdrpLogDllState(0LL, v5, 5290LL);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, Handle);
    }
    NtClose(Handle);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
