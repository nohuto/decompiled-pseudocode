/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x140218850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     InitializeInputSensorsOnSharedThread @ 0x140216318 (InitializeInputSensorsOnSharedThread.c)
 */

_BOOL8 __fastcall UserActivateMITInputProcessingHelper(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  char v3; // di
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ebx

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v4 = 0;
  }
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( !*(_QWORD *)(W32GetUserSessionState(v2, a2) + 19216) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 154);
  v8 = InitializeInputSensorsOnSharedThread(v6, v5);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(v7) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( (_BYTE)v7 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      18,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v8 >= 0;
}
