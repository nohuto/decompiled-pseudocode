/*
 * XREFs of PspUnlockProcessExclusive @ 0x14048FE44
 * Callers:
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     PspSyscallProviderOptIn @ 0x1407EDA50 (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x1407FC8C0 (PspCreatePicoProcess.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x140953E54 (PsSetProcessTelemetryAppState.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     PspProcessClose @ 0x140A8E3E0 (PspProcessClose.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessFaultInformation @ 0x140ABDE90 (PsSetProcessFaultInformation.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 *     PsSetProcessWin32Process @ 0x140ADC300 (PsSetProcessWin32Process.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v3 = a1 + 456;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 456));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2, v4, v5);
}
