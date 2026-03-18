/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1400A05C4
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1400A1BE8 (rimProcessKeyboardInput.c)
 * Callees:
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401FE198 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // r15
  __int64 v8; // rbx
  char v10; // bp
  int v11; // edx
  int v12; // r8d
  bool v13; // r12
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-88h] BYREF

  v5 = 0;
  v8 = a2;
  v10 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 507LL);
  if ( *(_QWORD *)(a1 + 32) == PsGetCurrentProcess(a1) )
    goto LABEL_4;
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 32), &ApcState);
    v10 = 1;
LABEL_4:
    rimProcessInput(a1, v8, a3, a4, a5);
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    v5 = 1;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqqD(*((_QWORD *)WPP_GLOBAL_Control + 3), v16, v15, *(_QWORD *)(UserSessionState + 19368));
    v8 = a2;
  }
  *(_BYTE *)(a1 + 776) = 1;
  InputTraceLogging::RIM::DropInput(v8, 12LL);
}
