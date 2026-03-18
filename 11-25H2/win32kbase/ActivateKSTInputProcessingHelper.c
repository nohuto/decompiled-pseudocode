/*
 * XREFs of ActivateKSTInputProcessingHelper @ 0x140218E00
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x1401A2014 (-ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     InitializeSensorExplicitly @ 0x140216570 (InitializeSensorExplicitly.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x140218DE4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 */

_BOOL8 ActivateKSTInputProcessingHelper()
{
  char v0; // di
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // dl

  v0 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      20,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::ActivateKSTInputProcessingHelper();
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19224) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 288);
  UserSessionState = W32GetUserSessionState(v6, v5);
  v8 = InitializeSensorExplicitly(0LL, *(struct IRegisterInputDispatcherObjects **)(UserSessionState + 19224));
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && v8 >= 0
    && ShouldKSTInitializeHidSensor() )
  {
    v11 = W32GetUserSessionState(v10, v9);
    v8 = InitializeSensorExplicitly(2LL, *(struct IRegisterInputDispatcherObjects **)(v11 + 19224));
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v12 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return v8 >= 0;
}
