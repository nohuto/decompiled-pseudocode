/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x140B0DF2C
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x140781A08 (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0DFFC (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 */

void __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  __int64 DeviceDiagnostic; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v9 = a1;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PopDirectedDripsDiagLock, v4, (__int64)&PopDirectedDripsDiagLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(v9);
  if ( DeviceDiagnostic )
    ++*(_DWORD *)(DeviceDiagnostic + 144);
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE) )
  {
    UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    *(_QWORD *)&UserData.Size = 1LL;
    v11 = &v9;
    v12 = 8LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE, 0LL, 2u, &UserData);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
}
