/*
 * XREFs of PspLockProcessExclusive @ 0x140487FB8
 * Callers:
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     PspSyscallProviderOptIn @ 0x1407EDA50 (PspSyscallProviderOptIn.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     PspCreatePicoProcess @ 0x1407FC8C0 (PspCreatePicoProcess.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     PsSetProcessTelemetryAppState @ 0x140953E54 (PsSetProcessTelemetryAppState.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     PspProcessClose @ 0x140A8E3E0 (PspProcessClose.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessFaultInformation @ 0x140ABDE90 (PsSetProcessFaultInformation.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 *     PsSetProcessWin32Process @ 0x140ADC300 (PsSetProcessWin32Process.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
