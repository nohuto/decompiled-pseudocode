/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140030980
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1401DD3E0 (rimAbRemoveGlobalPenDeadzone.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rdx
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  result = (_UNKNOWN **)W32GetUserSessionState(a1, a2);
  if ( !*((_DWORD *)result + 61) )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 704) )
    {
      rimAbRemoveGlobalPenDeadzone(a1);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v5 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
        LOBYTE(v8) = v6;
        LOBYTE(v9) = v5;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v9,
                              v8,
                              *(_QWORD *)(UserSessionState + 19336),
                              4,
                              1,
                              11,
                              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
    }
  }
  return result;
}
