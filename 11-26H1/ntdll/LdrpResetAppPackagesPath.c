/*
 * XREFs of LdrpResetAppPackagesPath @ 0x1800DDE9C
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x1800DDDA0 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

__int64 LdrpResetAppPackagesPath()
{
  void *v0; // rbx

  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v0 = (void *)*((_QWORD *)&LdrpAppPackagesPath + 1);
    ++LdrpAppPackagesPathVersion;
    *((_QWORD *)&LdrpAppPackagesPath + 1) = 0LL;
    LODWORD(LdrpAppPackagesPath) = 0;
  }
  else
  {
    v0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v0 )
    RtlpSysVolFree(v0);
  return 0LL;
}
