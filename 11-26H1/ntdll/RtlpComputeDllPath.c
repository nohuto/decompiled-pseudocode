/*
 * XREFs of RtlpComputeDllPath @ 0x18009BCE0
 * Callers:
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x18009B4AC (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v4 = (char *)&unk_180179D0C;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_1801CB340;
  if ( !dword_1801CB340 )
    v3 = RtlpLookupCurDirSetting((__int64)L"\"$", 1u, &dword_1801CB340);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_180179CD0 + 20 * v3;
LABEL_5:
  v5 = RtlpComputePath(v4, 5LL, a1, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = EnvironmentVersion;
    *(_BYTE *)(v5 + 116) = 0;
  }
  return v5;
}
