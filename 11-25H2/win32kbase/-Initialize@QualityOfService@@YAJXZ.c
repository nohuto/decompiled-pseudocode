/*
 * XREFs of ?Initialize@QualityOfService@@YAJXZ @ 0x1401A86B8
 * Callers:
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x14017705C (-InitializeProcessThreadGlobals@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall QualityOfService::Initialize(QualityOfService *this)
{
  _BYTE *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE *v4; // rbx
  _QWORD *v5; // rax
  __int64 UserSessionState; // rdi

  v1 = (_BYTE *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x72717355u);
  v4 = v1;
  if ( v1 )
  {
    *v1 = 0;
    v5 = v1 + 8;
    v5[1] = v5;
    *v5 = v5;
    UserSessionState = W32GetUserSessionState(v3, v2);
    if ( *(_QWORD *)(UserSessionState + 41304) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 555);
    *(_QWORD *)(UserSessionState + 41304) = v4;
  }
  else
  {
    v4 = 0LL;
  }
  return v4 == 0LL ? 0xC0000017 : 0;
}
