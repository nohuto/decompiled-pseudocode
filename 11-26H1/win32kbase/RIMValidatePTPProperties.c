/*
 * XREFs of RIMValidatePTPProperties @ 0x140211240
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(int a1, _DWORD *a2, int a3)
{
  unsigned int v5; // edi
  char v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v5 = -1073741668;
  if ( a2[6] != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 21);
  if ( a1 == 3 && (a2[92] & 0x80u) != 0 && a2[194] <= 6u )
  {
    return 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v6 = 0;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        10,
        (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
    }
  }
  return v5;
}
