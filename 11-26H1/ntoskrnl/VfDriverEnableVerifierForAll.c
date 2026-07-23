/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x140C261A0
 * Callers:
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfUtilIsProtectedDriver @ 0x140C279E8 (VfUtilIsProtectedDriver.c)
 *     VfSuspectDriversAllocateEntryEx @ 0x140C3E8D4 (VfSuspectDriversAllocateEntryEx.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  struct _KTHREAD *Lock; // rbp
  PVOID *i; // rbx
  __int64 Entry; // rax
  void *v4; // rsi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  VfDriverLock();
  Lock = MmAcquireLoadLock();
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver(i) && RtlImageNtHeaderEx(1u, i[6], 0LL, &OutHeaders) >= 0 )
    {
      Entry = VfSuspectDriversAllocateEntryEx(i);
      v4 = (void *)Entry;
      if ( !Entry )
      {
        v0 = -1073741670;
        break;
      }
      LODWORD(OutHeaders) = 0;
      v0 = VfDriverEnableVerifier(Entry, i, &OutHeaders);
      if ( !(_DWORD)OutHeaders )
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
