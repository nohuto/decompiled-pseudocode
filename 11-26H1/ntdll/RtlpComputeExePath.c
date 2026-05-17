/*
 * XREFs of RtlpComputeExePath @ 0x18009A580
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  void *v3; // rcx
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_180179CF8;
  if ( !a1 )
    v3 = &unk_180179CD0;
  v4 = RtlpComputePath(v3, 5 - (unsigned int)(a1 != 0), 0LL, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 116) = 0;
  }
  return v4;
}
