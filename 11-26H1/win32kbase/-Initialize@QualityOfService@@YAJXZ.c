/*
 * XREFs of ?Initialize@QualityOfService@@YAJXZ @ 0x1401CC4F0
 * Callers:
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x1401EC424 (-InitializeProcessThreadGlobals@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall QualityOfService::Initialize(QualityOfService *this)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rbx
  _QWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rdi

  v1 = (_BYTE *)Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x72717355u);
  v2 = v1;
  if ( v1 )
  {
    *v1 = 0;
    v3 = v1 + 8;
    v3[1] = v3;
    *v3 = v3;
    if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_QWORD *)v2 + 4) = v2 + 24;
      *((_QWORD *)v2 + 3) = v2 + 24;
    }
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    if ( *(_QWORD *)(UserSessionState + 41344) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 616);
    *(_QWORD *)(UserSessionState + 41344) = v2;
  }
  else
  {
    v2 = 0LL;
  }
  return v2 == 0LL ? 0xC0000017 : 0;
}
