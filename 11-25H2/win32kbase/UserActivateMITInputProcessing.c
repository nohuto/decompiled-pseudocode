/*
 * XREFs of UserActivateMITInputProcessing @ 0x14018D99C
 * Callers:
 *     NtMITActivateInputProcessing @ 0x14016E560 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CC030 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x14014A3E0 (PerfomInitialReadInputOnSharedThread.c)
 *     HandleInputThreadActivated @ 0x14015ED44 (HandleInputThreadActivated.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x140181FB8 (rimScheduleUserModeRimPnpRegistration.c)
 *     ApiSetEditionActivateMitInput @ 0x140194AF4 (ApiSetEditionActivateMitInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x14019FAF0 (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020EA60 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020F40C (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     IOCPDispatcher_Destroy @ 0x140210EC0 (IOCPDispatcher_Destroy.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  void *v4; // rcx
  char v5; // bl
  char v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *IocpHandleForUserMode; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // di
  __int64 v17; // rdx
  char v18; // si
  bool v19; // bp
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      10,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( *(_QWORD *)(W32GetUserSessionState(v4, a2) + 19216) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 31LL);
  *v2 = 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(UserSessionState + 19216)) >= 0
    && (v12 = W32GetUserSessionState(v11, v10),
        (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(*(IOCPDispatcher **)(v12 + 19216))) != 0LL)
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 18768) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
    v24 = W32GetUserSessionState(v23, v22);
    CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v24 + 18752));
    v27 = W32GetUserSessionState(v26, v25);
    InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v27 + 16408), 0LL);
    HandleInputThreadActivated(v29, v28);
    rimScheduleUserModeRimPnpRegistration(v31, v30);
    *(_QWORD *)(W32GetUserSessionState(v33, v32) + 3280) = a1;
    *v2 = IocpHandleForUserMode;
    PerfomInitialReadInputOnSharedThread(v35, v34);
    v16 = 1;
  }
  else
  {
    v16 = 0;
    IOCPDispatcher_Destroy();
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v21) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v19,
        *(_QWORD *)(v20 + 69144),
        2,
        2,
        11,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v17 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      12,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v16;
}
