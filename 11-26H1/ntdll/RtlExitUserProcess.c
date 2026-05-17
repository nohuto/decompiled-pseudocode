/*
 * XREFs of RtlExitUserProcess @ 0x1800869E0
 * Callers:
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x180087520 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180087568 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     EtwpShutdownPrivateLoggers @ 0x180087608 (EtwpShutdownPrivateLoggers.c)
 *     RtlReportSilentProcessExit @ 0x180087720 (RtlReportSilentProcessExit.c)
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockProcessHeapOnProcessTerminate();
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    LdrpReleaseLoaderLock(v4, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    LOBYTE(v2) = 1;
    RtlUnlockProcessHeapOnProcessTerminate(v2);
    qword_1801CB710 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801CB708 = -2;
    dword_1801CB70C = 1;
    qword_1801CB718 = 0LL;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
