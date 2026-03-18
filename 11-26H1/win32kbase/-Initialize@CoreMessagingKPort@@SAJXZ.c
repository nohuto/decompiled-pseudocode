/*
 * XREFs of ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401CDC30
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CoreMessagingKPort::Initialize(int a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  char v8; // di
  bool v9; // si
  char CurrentWin32kSessionId; // bl
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 72168) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 210);
  v3 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x6B637375u);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 72168) = v3;
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
      UserSessionState = W32GetUserSessionState(v12, v11, v13);
      LOBYTE(v15) = v9;
      LOBYTE(v16) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        3,
        13,
        (__int64)&WPP_3ccbe7d519863ea957e7d8c580b69285_Traceguids,
        CurrentWin32kSessionId);
    }
    return 3221225495LL;
  }
}
