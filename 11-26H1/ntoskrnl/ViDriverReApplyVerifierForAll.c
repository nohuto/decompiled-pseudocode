/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140C2E500
 * Callers:
 *     VfDriverInitSuccess @ 0x140C2E2FC (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140C279E8 (VfUtilIsProtectedDriver.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140C3B260 (VfThunkApplyDriverAddedThunks.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     VfSuspectDriversIsLoaded @ 0x140CE5770 (VfSuspectDriversIsLoaded.c)
 */

__int64 ViDriverReApplyVerifierForAll()
{
  unsigned int v0; // edi
  PVOID *i; // rbx
  __int64 v2; // rcx

  v0 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead )
    return 0LL;
  MmAcquireLoadLock();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && ((_DWORD)i[13] & 0x2000000) != 0 )
    {
      VfDriverLock(v2);
      if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
      {
        if ( !(unsigned int)VfUtilIsProtectedDriver() )
          v0 = VfThunkApplyDriverAddedThunks((ULONG_PTR)i);
      }
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
    }
  }
  MmReleaseLoadLock(0LL);
  return v0;
}
