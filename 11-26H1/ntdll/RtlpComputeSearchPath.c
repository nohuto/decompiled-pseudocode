/*
 * XREFs of RtlpComputeSearchPath @ 0x180099D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x18009A5DC (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  __int64 v2; // rbx

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_1801CA3B0;
      if ( !dword_1801CA3B0 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180170B98);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath((char *)&unk_180178CA0 + 20 * v0, 5LL, 0LL, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 88) = EnvironmentVersion;
    *(_BYTE *)(v2 + 116) = 0;
  }
  return v2;
}
