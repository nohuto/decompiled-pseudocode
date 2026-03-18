/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x14021D720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     InitializeInputSensorsOnSharedThread @ 0x14021B944 (InitializeInputSensorsOnSharedThread.c)
 */

_BOOL8 UserActivateMITInputProcessingHelper()
{
  int v0; // ecx
  char v1; // di
  char v2; // dl
  char v3; // r8
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  char v8; // dl

  v0 = (int)WPP_GLOBAL_Control;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  if ( !*(_QWORD *)(W32GetUserSessionState(v0, v2, v3) + 19248) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 154);
  v7 = InitializeInputSensorsOnSharedThread(v5, v4, v6);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v8 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v1 = 0;
  if ( v8 || v1 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v1,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      18,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  return v7 >= 0;
}
