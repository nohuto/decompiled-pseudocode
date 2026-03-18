/*
 * XREFs of SleepstudyHelperCreateLibraryEx @ 0x1404ED710
 * Callers:
 *     SleepstudyHelper_Initialize @ 0x140B3C170 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelperCreateLibrary @ 0x140B45EF0 (SleepstudyHelperCreateLibrary.c)
 *     PopPowerRequestStatsInitialize @ 0x140CD6B54 (PopPowerRequestStatsInitialize.c)
 *     PopSleepstudyInitialize @ 0x140D09A38 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140905BD0 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpCacheInitializeLibraryCache @ 0x140B43D74 (SshpCacheInitializeLibraryCache.c)
 *     CmSiRWLockInitialize @ 0x140B60560 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibraryEx(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v7; // rax

  v2 = 0;
  if ( a1 && *a1 <= 1u && (a1[2] & 0xFFFFFFF8) == 0 && a2 )
  {
    if ( SleepstudyHelperAccountingEnabled && SshpInitialized )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        *((_DWORD *)Pool2 + 6) = a1[1];
        CmSiRWLockInitialize((PRTL_RUN_ONCE)Pool2 + 2);
        Pool2[20] = Pool2 + 19;
        Pool2[19] = Pool2 + 19;
        Pool2[22] = Pool2 + 21;
        Pool2[21] = Pool2 + 21;
        SshpCacheInitializeLibraryCache(Pool2);
        CmpVolumeManagerLockContextListExclusive(&SshpLibraryListLock);
        v7 = (_QWORD *)qword_140F0A988;
        if ( *(PVOID **)qword_140F0A988 != &SshpLibraryList )
          __fastfail(3u);
        Pool2[1] = qword_140F0A988;
        *Pool2 = &SshpLibraryList;
        *v7 = Pool2;
        qword_140F0A988 = (__int64)Pool2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SshpLibraryListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&SshpLibraryListLock);
        KeAbPostRelease((unsigned __int64)&SshpLibraryListLock);
        *a2 = Pool2;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
