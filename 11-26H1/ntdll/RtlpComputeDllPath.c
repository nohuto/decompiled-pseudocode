/*
 * XREFs of RtlpComputeDllPath @ 0x18009AE10
 * Callers:
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x18009A5DC (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = (char *)&unk_180178CDC;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_1801CA390;
  if ( !dword_1801CA390 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180170AD0, 1u, &dword_1801CA390);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_180178CA0 + 20 * v3;
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
