/*
 * XREFs of rimSetupPalmTelemetry @ 0x140204AFC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1402111E0 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  int v3; // edx
  int v4; // r8d
  PalmTelemetry *v5; // rbx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( !*(_QWORD *)(a1 + 1048) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInitImpl(256LL, 0x3010uLL, 0x76656B52u);
    v5 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v5 + 4) = 0;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(a1 + 1048) = v5;
    }
    else
    {
      v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v4);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          11,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
      }
    }
  }
}
