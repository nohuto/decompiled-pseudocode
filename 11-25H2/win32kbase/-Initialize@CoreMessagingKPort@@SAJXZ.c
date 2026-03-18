/*
 * XREFs of ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401AAE70
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CoreMessagingKPort::Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // di
  bool v7; // si
  char CurrentWin32kSessionId; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 72184) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  v2 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x6B637375u);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 72184) = v2;
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      UserSessionState = W32GetUserSessionState(v10, v9);
      LOBYTE(v12) = v7;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        3,
        13,
        (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
        CurrentWin32kSessionId);
    }
    return 3221225495LL;
  }
}
