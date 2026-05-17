/*
 * XREFs of RtlpComputeSearchPath @ 0x18009AC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x18009B4AC (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
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
      v0 = dword_1801CB360;
      if ( !dword_1801CB360 )
        v0 = RtlpLookupCurDirSetting(L"*,", 0LL, &dword_1801CB360);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath((char *)&unk_180179CD0 + 20 * v0, 5LL, 0LL, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 88) = EnvironmentVersion;
    *(_BYTE *)(v2 + 116) = 0;
  }
  return v2;
}
