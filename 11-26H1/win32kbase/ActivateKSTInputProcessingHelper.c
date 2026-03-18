/*
 * XREFs of ActivateKSTInputProcessingHelper @ 0x14021DCD0
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InitializeSensorExplicitly @ 0x140110F40 (InitializeSensorExplicitly.c)
 *     ?ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x140195108 (-ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x14021DCB4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 */

_BOOL8 ActivateKSTInputProcessingHelper()
{
  char v0; // di
  char v1; // dl
  char v2; // r8
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // r8d
  char v18; // dl

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  InputTraceLogging::KST::ActivateKSTInputProcessingHelper();
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19256) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 288);
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  v11 = InitializeSensorExplicitly(0, *(_QWORD *)(UserSessionState + 19256), v10);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && v11 >= 0
    && ShouldKSTInitializeHidSensor(v12) )
  {
    v16 = W32GetUserSessionState(v14, v13, v15);
    v11 = InitializeSensorExplicitly(2, *(_QWORD *)(v16 + 19256), v17);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v18 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v18 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v0,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  return v11 >= 0;
}
