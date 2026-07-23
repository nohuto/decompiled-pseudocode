/*
 * XREFs of PspUnlockProcessExclusive @ 0x1404898F4
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     PspSyscallProviderOptIn @ 0x1407F35B0 (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x1408022F0 (PspCreatePicoProcess.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     PspProcessClose @ 0x140A930B0 (PspProcessClose.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessFaultInformation @ 0x140AC0480 (PsSetProcessFaultInformation.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 *     PsSetProcessWin32Process @ 0x140AD9850 (PsSetProcessWin32Process.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3FE50 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  v3 = a1 + 456;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 456));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
