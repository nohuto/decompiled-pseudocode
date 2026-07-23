/*
 * XREFs of SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0
 * Callers:
 *     SleepstudyHelper_Initialize @ 0x140B3E3F0 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelperCreateLibrary @ 0x140B47F20 (SleepstudyHelperCreateLibrary.c)
 *     PopPowerRequestStatsInitialize @ 0x140CDCEA8 (PopPowerRequestStatsInitialize.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpCacheInitializeLibraryCache @ 0x140B45C64 (SshpCacheInitializeLibraryCache.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
        v7 = (_QWORD *)qword_140F0AD28;
        if ( *(PVOID **)qword_140F0AD28 != &SshpLibraryList )
          __fastfail(3u);
        Pool2[1] = qword_140F0AD28;
        *Pool2 = &SshpLibraryList;
        *v7 = Pool2;
        qword_140F0AD28 = (__int64)Pool2;
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
