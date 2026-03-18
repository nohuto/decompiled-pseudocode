/*
 * XREFs of UserKSTWait @ 0x1400F0898
 * Callers:
 *     NtKSTWait @ 0x140065900 (NtKSTWait.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x14009DA80 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?UserKSTWait@KST@InputTraceLogging@@SAXXZ @ 0x1400EFC0C (-UserKSTWait@KST@InputTraceLogging@@SAXXZ.c)
 *     ?WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z @ 0x1400F0D7C (-WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserKSTWait()
{
  char v0; // di
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  unsigned int v6; // esi
  char v7; // r14
  __int64 UserSessionState; // rax
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  int v12; // ebx
  int v13; // r15d
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  void **v17; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  char v22; // dl
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  __int64 v28; // rbx
  char v29; // bl
  bool v30; // r15
  char v31; // si
  bool v32; // r14
  ULONG v33; // eax
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rax
  int v38; // [rsp+28h] [rbp-48h]
  __int128 v39; // [rsp+50h] [rbp-20h] BYREF
  __int128 v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+B8h] [rbp+48h] BYREF
  void **v42; // [rsp+C0h] [rbp+50h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      15,
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  InputTraceLogging::KST::UserKSTWait();
  v6 = 0;
  v39 = 0LL;
  v7 = 1;
  v40 = 0LL;
  while ( 1 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    v41 = 0;
    v9 = *(_QWORD *)(UserSessionState + 19256);
    v39 = 0LL;
    v40 = 0LL;
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v30,
          *(_QWORD *)(v37 + 69136),
          2,
          2,
          26,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
      }
      v12 = -1073741749;
    }
    else
    {
      LOBYTE(v38) = 1;
      v12 = ZwRemoveIoCompletionEx(*(_QWORD *)(v9 + 2904), &v39, 1LL, &v41, 0LL, v38);
    }
    v13 = DWORD2(v39);
    InputTraceLogging::KST::WakeKST((unsigned int)v12, DWORD2(v39));
    if ( v12 < 0 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v42, "HandleKSTThreadSignal", 0LL);
    if ( v12 == 257 )
      goto LABEL_15;
    if ( (SDWORD2(v39) & 0x80000000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
    v16 = W32GetUserSessionState(v4, v3, v5);
    IOCPDispatcher::Dispatch(*(_QWORD *)(v16 + 19256), v13, v39);
    if ( v13 != -2147483647 )
      goto LABEL_15;
    v25 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19256);
    if ( (unsigned int)v39 < *(_DWORD *)(v25 + 2896) && (v27 = 32LL * (unsigned int)v39, *(_QWORD *)(v27 + v25 + 2584)) )
      v28 = *(_QWORD *)(v27 + v25 + 2576);
    else
      v28 = 0LL;
    v4 = *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 3104);
    if ( v28 == *(_QWORD *)(v4 + 48) )
    {
      v6 = 0;
      goto LABEL_33;
    }
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 3104);
    if ( v28 == *(_QWORD *)(v4 + 56) )
    {
      v6 = 2;
LABEL_33:
      v7 = 0;
    }
LABEL_15:
    v17 = v42;
    if ( v42 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v4, v3);
      if ( CurrentThreadWin32Thread )
        v21 = *CurrentThreadWin32Thread;
      else
        v21 = 0LL;
      *(_QWORD *)(v21 + 376) = v17[6];
      InputTraceLogging::ThreadLockedPerfRegion::Cleanup(&v42, v19, v20);
    }
    if ( !v7 )
      goto LABEL_20;
  }
  if ( v12 == -1073741749 )
  {
    v6 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v31 = 0;
    }
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      LOBYTE(v35) = v32;
      LOBYTE(v36) = v31;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        2,
        2,
        16,
        (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids,
        v12);
    }
    v6 = 1;
  }
  v33 = RtlNtStatusToDosError(v12);
  UserSetLastError(v33);
LABEL_20:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v22 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v22 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  return v6;
}
