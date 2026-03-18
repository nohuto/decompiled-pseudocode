/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140075184
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x140203128 (rimAbRemoveGlobalPenDeadzone.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, int a2, int a3)
{
  _UNKNOWN **result; // rax
  int v5; // edx
  int v6; // r8d
  char v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  result = (_UNKNOWN **)W32GetUserSessionState(a1, a2, a3);
  if ( !*((_DWORD *)result + 61) )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 704) )
    {
      rimAbRemoveGlobalPenDeadzone(a1);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v7 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v7;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v11,
                              v10,
                              *(_QWORD *)(UserSessionState + 19368),
                              4,
                              1,
                              11,
                              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
    }
  }
  return result;
}
