/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastVisit @ 0x140B0DB80
 * Callers:
 *     PopDirectedDripsVisitDevice @ 0x140B0D684 (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8 (PopDirectedDripsBuildBroadcastTreeFull.c)
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

void __fastcall PopDirectedDripsDiagTraceBroadcastVisit(__int64 a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  int v10; // eax
  __int64 DeviceDiagnostic; // rax
  __int64 v12; // rbx
  bool v13; // zf
  int v14; // ecx
  int v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  int v17; // [rsp+38h] [rbp-41h] BYREF
  int v18; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  __int64 *v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  int *v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  __int64 v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  int *v30; // [rsp+A0h] [rbp+27h]
  __int64 v31; // [rsp+A8h] [rbp+2Fh]

  v19 = a1;
  v17 = 0;
  v16 = 0;
  v18 = 0;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PopDirectedDripsDiagLock, v6, (__int64)&PopDirectedDripsDiagLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( a2 )
    v10 = *(_DWORD *)(a2 + 32);
  else
    v10 = -1;
  v15 = v10;
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(v19);
  v12 = DeviceDiagnostic;
  if ( DeviceDiagnostic )
  {
    v13 = (*(_DWORD *)(DeviceDiagnostic + 152) & 0x20000) == 0;
    *(_DWORD *)(DeviceDiagnostic + 148) = v15;
    if ( !v13 )
      v16 = 1;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT) )
    {
      v17 = *(unsigned __int16 *)(v19 + 40) >> 1;
      UserData.Ptr = (ULONGLONG)&v15;
      v21 = &v16;
      v23 = &v19;
      v25 = &v17;
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = 4LL;
      v24 = 8LL;
      v26 = 4LL;
      v14 = *(unsigned __int16 *)(v19 + 40);
      v27 = *(_QWORD *)(v19 + 48);
      v30 = &v18;
      v28 = v14;
      v29 = 0;
      v18 = a3;
      v31 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT, 0LL, 6u, &UserData);
    }
    *(_DWORD *)(v12 + 152) |= 0x40000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
}
