/*
 * XREFs of CrmStateMonitorListenerRemove @ 0x1800227B0
 * Callers:
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x1800492F4 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006AD54 (CrmStateMonitorFanNoiseHysteresisCleanup.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x18006DED4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x180075FE4 (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x1800760A4 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x1800760F4 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x180076510 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x1800765BC (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x180076674 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x180076760 (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x180076910 (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x180076A2C (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180076ADC (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180076C04 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180076D44 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x180076EB8 (CrmStateMonitorResourceUsageCleanup.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall CrmStateMonitorListenerRemove(int *a1, __int64 a2)
{
  __int64 v2; // r12
  int *v3; // rdi
  int v5; // r14d
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  bool v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // rax
  bool v13; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  void *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  UUID *v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  _DWORD *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  bool *v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]

  v2 = *a1;
  v3 = a1;
  v14[0] = *a1;
  v5 = 1;
  RtlAcquireSRWLockExclusive(a1 + 2);
  v3[4] = GetCurrentThreadId();
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v7 + 8) != a2 + 8 || (v8 = *(_QWORD **)(a2 + 16), (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = v3 + 6;
  *(_QWORD *)(a2 + 16) = a2 + 8;
  *v6 = v6;
  if ( (_QWORD *)*v9 == v9 )
  {
    v3[4] = 0;
    v10 = 1;
    RtlReleaseSRWLockExclusive(v3 + 2);
    v5 = 0;
    RtlAcquireSRWLockExclusive(&CrmGlobals);
    dword_1800E37C8 = GetCurrentThreadId();
    if ( *((int **)&CrmGlobals + v2 + 2) != v3 )
    {
      dword_1800E37C8 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      v3 = 0LL;
      goto LABEL_5;
    }
    RtlAcquireSRWLockExclusive(v3 + 2);
    v3[4] = GetCurrentThreadId();
    v11 = (_QWORD *)*v9;
    v10 = *v9 == (_QWORD)v9;
    if ( (_QWORD *)*v9 == v9 && (v12 = *v3, *((int **)&CrmGlobals + v12 + 2) == v3) )
    {
      *((_QWORD *)&CrmGlobals + v12 + 2) = 0LL;
      v3[4] = 0;
      RtlReleaseSRWLockExclusive(v3 + 2);
      dword_1800E37C8 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      v5 = 0;
    }
    else
    {
      v3[4] = 0;
      RtlReleaseSRWLockExclusive(v3 + 2);
      dword_1800E37C8 = 0;
      v5 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      if ( v11 != v9 )
      {
LABEL_19:
        LODWORD(v2) = v14[0];
        goto LABEL_5;
      }
    }
    CrmStateMonitorCleanup(v3);
    HampFreeHeap(v3);
    goto LABEL_19;
  }
  v10 = 0;
LABEL_5:
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 8) != 0 && (qword_1800E1300 & 8) == qword_1800E1300 )
  {
    v21 = 16LL;
    v20 = &Uuid;
    v14[0] = v2;
    v22 = v14;
    v23 = 4LL;
    v24 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E12F0;
    v13 = v10;
    v25 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12F0;
    v17 = &unk_1800CCA4A;
    UserData.Reserved = 2;
    v18 = 66;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  if ( v5 )
  {
    v3[4] = 0;
    RtlReleaseSRWLockExclusive(v3 + 2);
  }
}
