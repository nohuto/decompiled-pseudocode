/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140C284F8
 * Callers:
 *     VfDriverInitSuccess @ 0x140C282F0 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140C219D8 (VfUtilIsProtectedDriver.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140C35250 (VfThunkApplyDriverAddedThunks.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     VfSuspectDriversIsLoaded @ 0x140CDF3D8 (VfSuspectDriversIsLoaded.c)
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
