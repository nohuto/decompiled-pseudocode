/*
 * XREFs of ?Initialize@LastWokenThread@@YAJXZ @ 0x1401CD438
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LastWokenThread::Initialize(LastWokenThread *this)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rbx
  __int64 UserSessionState; // rdi

  v1 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x776C7355u);
  v5 = v1;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_WORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)v1 = 0LL;
    UserSessionState = W32GetUserSessionState(v3, v2, v4);
    if ( *(_QWORD *)(UserSessionState + 3048) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 287);
    *(_QWORD *)(UserSessionState + 3048) = v5;
  }
  else
  {
    v5 = 0LL;
  }
  return v5 == 0 ? 0xC0000017 : 0;
}
