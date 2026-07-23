/*
 * XREFs of VfAddVerifierEntry @ 0x140B8C34C
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifier @ 0x140B7A270 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B7A3D4 (VfDriverEnableVerifierForAll.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B8A6C0 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *Lock; // rbx
  void *Entry; // rsi
  struct _KTHREAD *v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  DestinationString = 0LL;
  if ( InitSafeBootMode )
  {
    v2 = -1073738742;
  }
  else
  {
    if ( ViWdmThunksWithIatIndex )
      return 3221228555LL;
    VfDriverLock();
    VfInitSystemNoRebootNeeded(v4, 0, v5, v6);
    ViDriversLoadLockOwner = 0LL;
    KeReleaseMutex(&ViDriversLoadLock, 0);
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(0x40uLL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644uLL);
    if ( ViWdmThunksWithIatIndex )
    {
      RtlInitUnicodeString(&DestinationString, L"*");
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
      {
        Lock = (struct _KTHREAD *)MmAcquireLoadLock();
        v2 = VfDriverEnableVerifierForAll();
        MmReleaseLoadLock(Lock);
      }
      else
      {
        Entry = (void *)VfSuspectDriversAllocateEntry(String2);
        if ( Entry )
        {
          v11 = 0;
          v9 = (struct _KTHREAD *)MmAcquireLoadLock();
          v2 = VfDriverEnableVerifier((__int64)Entry, 0LL, &v11);
          MmReleaseLoadLock(v9);
          if ( !v11 )
            ExFreePoolWithTag(Entry, 0);
        }
        else
        {
          v2 = -1073741670;
        }
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  if ( ViWdmThunksWithIatIndex )
  {
    ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
    ViWdmThunksWithIatIndex = 0LL;
  }
  return v2;
}
