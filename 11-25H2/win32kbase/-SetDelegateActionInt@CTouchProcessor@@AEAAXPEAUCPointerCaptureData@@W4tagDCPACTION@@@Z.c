/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x140209374
 * Callers:
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1400D21F8 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1401FD424 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D901C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  bool v4; // bp
  bool v5; // bl
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // eax

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      break;
    case 4:
      if ( (*(_DWORD *)(a2 + 304) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12656);
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12657);
      if ( (*(_DWORD *)(a2 + 304) & 8) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12658);
      *(_DWORD *)(a2 + 304) |= 8u;
      break;
    case 5:
      if ( !gbIgnoreStressedOutStuff )
      {
        v9 = *(_DWORD *)(a2 + 304);
        if ( (v9 & 4) == 0 && (v9 & 8) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12664);
      }
      *(_DWORD *)(a2 + 304) |= 0x10u;
      break;
    case 6:
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12671);
      *(_DWORD *)(a2 + 304) |= 0x20u;
      break;
    default:
      v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v7) = v5;
        LOBYTE(v8) = v4;
        WPP_RECORDER_AND_TRACE_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v8,
          v7,
          *(_QWORD *)(UserSessionState + 69144),
          2);
      }
      break;
  }
}
