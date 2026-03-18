/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1400E69D8
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     rimProcessKeyboardInput @ 0x1400E68C0 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1400E694C (rimProcessMouseInput.c)
 *     rimDispatchCompleteFrames @ 0x1401342F4 (rimDispatchCompleteFrames.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 * Callees:
 *     rimProcessInput @ 0x1400BE050 (rimProcessInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401D6DD8 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, unsigned int *a3, __m128i *a4, int a5)
{
  char v5; // r15
  __int64 v8; // rbx
  char v10; // bp
  struct _KPROCESS *v11; // r13
  __int64 v12; // rdx
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
  v11 = *(struct _KPROCESS **)(a1 + 32);
  if ( v11 == (struct _KPROCESS *)PsGetCurrentProcess() )
    goto LABEL_6;
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(v11, &ApcState);
    v10 = 1;
LABEL_6:
    rimProcessInput(a1, v8, a3, a4, a5);
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    v5 = 1;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqqD(*((_QWORD *)WPP_GLOBAL_Control + 3), v16, v15, *(_QWORD *)(UserSessionState + 19336));
    v8 = a2;
  }
  *(_BYTE *)(a1 + 776) = 1;
  InputTraceLogging::RIM::DropInput(v8, 0xCu);
}
