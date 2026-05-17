/*
 * XREFs of LdrpResetAppPackagesPath @ 0x1800E05FC
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x1800E0500 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpResetAppPackagesPath(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, a2);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v2 = *((_QWORD *)&LdrpAppPackagesPath + 1);
    ++LdrpAppPackagesPathVersion;
    *((_QWORD *)&LdrpAppPackagesPath + 1) = 0LL;
    LODWORD(LdrpAppPackagesPath) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v2 )
    RtlpSysVolFree(v2);
  return 0LL;
}
