/*
 * XREFs of UserKSTWait @ 0x1400BD37C
 * Callers:
 *     NtKSTWait @ 0x1400BD1B0 (NtKSTWait.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400390A0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1400D8350 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     ?WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z @ 0x1400E79C0 (-WakeKST@KST@InputTraceLogging@@SAXJW4WaitCompletionPacketPurpose@@@Z.c)
 *     ?UserKSTWait@KST@InputTraceLogging@@SAXXZ @ 0x140152EC8 (-UserKSTWait@KST@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserKSTWait()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp
  __int64 UserSessionState; // rax
  unsigned int v8; // eax
  int ApcContext; // r14d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // di
  bool v24; // bp
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  ULONG v28; // eax
  char v29; // dl
  _FILE_IO_COMPLETION_INFORMATION v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v32; // [rsp+B8h] [rbp+10h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::UserKSTWait();
  v5 = 0;
  memset(&v31, 0, sizeof(v31));
  v6 = 1;
  while ( 1 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v8 = IOCPDispatcher::Wait(*(IOCPDispatcher **)(UserSessionState + 19224), 0LL, 1u, &v31);
    ApcContext = (int)v31.ApcContext;
    v10 = v8;
    InputTraceLogging::KST::WakeKST(v8, LODWORD(v31.ApcContext));
    if ( v10 < 0 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v32, "HandleKSTThreadSignal", 0LL);
    if ( v10 == 257 )
      goto LABEL_26;
    if ( SLODWORD(v31.ApcContext) >= 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
    v14 = W32GetUserSessionState(v13, v12);
    IOCPDispatcher::Dispatch(*(_QWORD *)(v14 + 19224), ApcContext, (unsigned int)v31.KeyContext);
    if ( ApcContext != -2147483647 )
      goto LABEL_26;
    v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19224);
    if ( LODWORD(v31.KeyContext) < *(_DWORD *)(v18 + 2896)
      && (v20 = 32LL * LODWORD(v31.KeyContext), *(_QWORD *)(v20 + v18 + 2584)) )
    {
      v19 = *(_QWORD *)(v20 + v18 + 2576);
    }
    else
    {
      v19 = 0LL;
    }
    v22 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 3104);
    if ( v19 == *(_QWORD *)(v22 + 48) )
    {
      v5 = 0;
LABEL_25:
      v6 = 0;
      goto LABEL_26;
    }
    if ( v19 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 3104) + 56LL) )
    {
      v5 = 2;
      goto LABEL_25;
    }
LABEL_26:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v32);
    if ( !v6 )
      goto LABEL_39;
  }
  if ( v10 == -1073741749 )
  {
    v5 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v23 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69144),
        2,
        2,
        16,
        (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids,
        v10);
    }
    v5 = 1;
  }
  v28 = RtlNtStatusToDosError(v10);
  UserSetLastError(v28);
LABEL_39:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v29 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v29 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return v5;
}
