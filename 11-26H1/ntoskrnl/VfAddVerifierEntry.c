/*
 * XREFs of VfAddVerifierEntry @ 0x140C46698
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfDriverEnableVerifierForAll @ 0x140C20194 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversAllocateEntry @ 0x140C20494 (VfSuspectDriversAllocateEntry.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *Entry; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned int v7; // edi
  struct _KTHREAD *Lock; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  DestinationString = 0LL;
  if ( (_DWORD)InitSafeBootMode )
  {
    v7 = -1073738742;
  }
  else
  {
    if ( ViWdmThunksWithIatIndex )
      return 3221228555LL;
    VfDriverLock(String2);
    VfInitSystemNoRebootNeeded(v2, 0, v3, v4);
    ViDriversLoadLockOwner = 0LL;
    KeReleaseMutex(&ViDriversLoadLock, 0);
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
    if ( ViWdmThunksWithIatIndex )
    {
      RtlInitUnicodeString(&DestinationString, L"*");
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
      {
        Lock = MmAcquireLoadLock();
        v7 = VfDriverEnableVerifierForAll();
        MmReleaseLoadLock(Lock);
      }
      else
      {
        Entry = (void *)VfSuspectDriversAllocateEntry(String2);
        if ( Entry )
        {
          v11 = 0;
          v6 = MmAcquireLoadLock();
          v7 = VfDriverEnableVerifier(Entry, 0LL, &v11);
          MmReleaseLoadLock(v6);
          if ( !v11 )
            ExFreePoolWithTag(Entry, 0);
        }
        else
        {
          v7 = -1073741670;
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( ViWdmThunksWithIatIndex )
  {
    ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
    ViWdmThunksWithIatIndex = 0LL;
  }
  return v7;
}
