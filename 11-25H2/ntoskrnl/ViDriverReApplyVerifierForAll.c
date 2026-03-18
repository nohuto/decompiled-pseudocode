/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140B7A904
 * Callers:
 *     VfDriverInitSuccess @ 0x140B7A4B4 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140B734CC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140B87038 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140C2AA4C (VfSuspectDriversIsLoaded.c)
 */

__int64 ViDriverReApplyVerifierForAll()
{
  unsigned int v0; // edi
  PVOID *i; // rbx

  v0 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead )
    return 0LL;
  MmAcquireLoadLock();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && ((_DWORD)i[13] & 0x2000000) != 0 )
    {
      VfDriverLock();
      if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
      {
        if ( !(unsigned int)VfUtilIsProtectedDriver() )
          v0 = VfThunkApplyDriverAddedThunks(i);
      }
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
    }
  }
  MmReleaseLoadLock(0LL);
  return v0;
}
