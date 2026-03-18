/*
 * XREFs of ?Initialize@LastWokenThread@@YAJXZ @ 0x1401AA39C
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LastWokenThread::Initialize(LastWokenThread *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 UserSessionState; // rdi

  v1 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x776C7355u);
  v4 = v1;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_WORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)v1 = 0LL;
    UserSessionState = W32GetUserSessionState(v3, v2);
    if ( *(_QWORD *)(UserSessionState + 3048) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 287);
    *(_QWORD *)(UserSessionState + 3048) = v4;
  }
  else
  {
    v4 = 0LL;
  }
  return v4 == 0 ? 0xC0000017 : 0;
}
