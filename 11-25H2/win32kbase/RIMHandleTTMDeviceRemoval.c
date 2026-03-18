/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1401F6A34
 * Callers:
 *     RIMHandlePowerDeviceRemoval @ 0x14014B934 (RIMHandlePowerDeviceRemoval.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 151);
  if ( !*(_DWORD *)(a1 + 1296) )
    TtmNotifyDeviceDeparture(2LL, a1);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      13,
      (__int64)&WPP_47fcb3e514af360b9e8befda87f2f516_Traceguids,
      0);
  }
  return 0LL;
}
