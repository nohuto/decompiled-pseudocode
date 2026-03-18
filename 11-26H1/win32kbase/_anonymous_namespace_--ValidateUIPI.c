/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x14016C054 (-CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(UIPrivilegeIsolation *this, CInputDest *a2)
{
  CInputDest *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bp
  __int64 v10; // rdi
  int v11; // ebx
  struct tagTHREADINFO *v12; // rax
  char v13; // bl
  int v14; // edx
  int v15; // r8d
  bool v16; // di
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+78h] [rbp+10h]

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 183LL);
  if ( !CInputDest::GetUserWindow(a2) )
    return 1;
  v5 = *((_QWORD *)CInputDest::GetUserWindow(v4) + 2);
  if ( !v5 )
    return 1;
  v8 = UIPrivilegeIsolation::CheckAccessEx(this, (const struct tagUIPI_INFO *)(*(_QWORD *)(v5 + 456) + 864LL), 0LL);
  if ( !v8 )
  {
    v10 = *(_QWORD *)(v5 + 464);
    v11 = *(_DWORD *)(v10 + 480);
    v22 = *(_QWORD *)(v10 + 472);
    v12 = PtiCurrent(v7, v6);
    v21 = v11;
    v13 = 1;
    v20 = v22;
    EtwTraceUIPIInputError((__int64)v12, v5, v10, &v20, 1);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v13 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69136),
        3,
        6,
        10,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
  }
  return v8;
}
