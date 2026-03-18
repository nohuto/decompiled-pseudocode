/*
 * XREFs of rimSetupPalmTelemetry @ 0x1401E1FF8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1401F61DC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  __int64 v3; // rdx
  PalmTelemetry *v4; // rbx
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  if ( !*(_QWORD *)(a1 + 1048) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInitImpl(256LL, 0x3010uLL, 0x76656B52u);
    v4 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v4 + 4) = 0;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *(_QWORD *)(a1 + 1048) = v4;
    }
    else
    {
      v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
        LOBYTE(v8) = v6;
        LOBYTE(v9) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v8,
          *(_QWORD *)(UserSessionState + 19336),
          3,
          1,
          11,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
      }
    }
  }
}
