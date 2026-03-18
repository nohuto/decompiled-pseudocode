/*
 * XREFs of UserActivateMITInputProcessing @ 0x1401101FC
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1401E09C0 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x140110B64 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14013365C (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x1401898F4 (PerfomInitialReadInputOnSharedThread.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x14018A614 (rimScheduleUserModeRimPnpRegistration.c)
 *     HandleInputThreadActivated @ 0x1401A2414 (HandleInputThreadActivated.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1401B56FC (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1401B80C4 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x140218AE0 (IOCPDispatcher_Destroy.c)
 *     ApiSetEditionActivateMitInput @ 0x14022739C (ApiSetEditionActivateMitInput.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  int v4; // ecx
  char v5; // bl
  char v6; // r8
  int v7; // edx
  int v8; // ecx
  char v9; // r8
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  char v13; // r8
  __int64 v14; // rax
  void *IocpHandleForUserMode; // rdi
  int v16; // edx
  int v17; // ecx
  char v18; // r8
  unsigned __int8 v19; // di
  int v20; // edx
  char v21; // r8
  char v22; // si
  bool v23; // bp
  __int64 v24; // rax
  int v25; // edx
  int v26; // edx
  int v27; // ecx
  char v28; // r8
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  char v32; // r8
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  char v36; // r8

  v2 = a2;
  v4 = (int)WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  if ( *(_QWORD *)(W32GetUserSessionState(v4, (_DWORD)a2, v6) + 19248) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 31LL);
  *v2 = 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  if ( (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(UserSessionState + 19248)) >= 0
    && (v14 = W32GetUserSessionState(v12, v11, v13),
        (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(*(IOCPDispatcher **)(v14 + 19248))) != 0LL)
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 18816) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
    v29 = W32GetUserSessionState(v27, v26, v28);
    CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v29 + 18800));
    v33 = W32GetUserSessionState(v31, v30, v32);
    InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v33 + 16400), 0LL);
    HandleInputThreadActivated();
    rimScheduleUserModeRimPnpRegistration();
    *(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 3280) = a1;
    *v2 = IocpHandleForUserMode;
    PerfomInitialReadInputOnSharedThread();
    v19 = 1;
  }
  else
  {
    v19 = 0;
    IOCPDispatcher_Destroy();
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
      LOBYTE(v25) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v23,
        *(_QWORD *)(v24 + 69136),
        2,
        2,
        11,
        (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v20 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      12,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  return v19;
}
