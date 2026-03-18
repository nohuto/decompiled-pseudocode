/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x140211944
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x140095FA0 (RIMIsWakeCapableDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 188);
  v2 = RIMIsWakeCapableDevice(a1);
  TtmNotifyDeviceInput(2LL, a1, v2 != 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      14,
      (__int64)&WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
      0);
  }
  return 0LL;
}
