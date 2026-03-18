/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140C20194
 * Callers:
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfUtilIsProtectedDriver @ 0x140C219D8 (VfUtilIsProtectedDriver.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140C388C4 (VfSuspectDriversAllocateEntryEx.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  struct _KTHREAD *Lock; // rbp
  PVOID *i; // rbx
  __int64 Entry; // rax
  void *v4; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  VfDriverLock();
  Lock = MmAcquireLoadLock();
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver(i) && (int)RtlImageNtHeaderEx(1, (unsigned __int64)i[6], 0LL, &v6) >= 0 )
    {
      Entry = VfSuspectDriversAllocateEntryEx(i);
      v4 = (void *)Entry;
      if ( !Entry )
      {
        v0 = -1073741670;
        break;
      }
      LODWORD(v6) = 0;
      v0 = VfDriverEnableVerifier(Entry, i, &v6);
      if ( !(_DWORD)v6 )
        ExFreePoolWithTag(v4, 0);
      if ( v0 < 0 )
        break;
    }
  }
  MmReleaseLoadLock(Lock);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
