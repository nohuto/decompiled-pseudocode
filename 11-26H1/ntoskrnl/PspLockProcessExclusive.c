/*
 * XREFs of PspLockProcessExclusive @ 0x140481AF8
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     PspSyscallProviderOptIn @ 0x1407F35B0 (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x1408022F0 (PspCreatePicoProcess.c)
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
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a2 + 484);
  v4 = (unsigned __int64 *)(a1 + 456);
  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
