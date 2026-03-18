/*
 * XREFs of rimProcessMouseInput @ 0x1400A0798
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1401FE198 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // r14
  int v6; // edx
  int v7; // r8d
  char v8; // r12
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  bool v12; // [rsp+60h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  if ( *(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056) )
  {
    v4 = *(_DWORD *)(a2 + 168);
    if ( (v4 & 0x2000) != 0 && (v4 & 0x80000) != 0 && (v4 & 0x1000000) == 0 )
    {
      if ( (v4 & 0x400000) == 0 )
      {
        *(_DWORD *)(a2 + 168) = v4 | 0x400000;
        ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
      }
      *(_BYTE *)(a1 + 776) = 1;
      return;
    }
  }
  v5 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 507LL);
  if ( *(_QWORD *)(a1 + 32) == PsGetCurrentProcess(a1) )
  {
LABEL_7:
    rimProcessInput(a1, a2, a2 + 452, a2 + 240, 0);
    if ( v5 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 32), &ApcState);
    v5 = 1;
    goto LABEL_7;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v8 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v12;
    WPP_RECORDER_AND_TRACE_SF_qqqD(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v11, *(_QWORD *)(UserSessionState + 19368));
  }
  *(_BYTE *)(a1 + 776) = 1;
  InputTraceLogging::RIM::DropInput(a2, 12LL);
}
