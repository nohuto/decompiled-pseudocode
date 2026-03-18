/*
 * XREFs of ?Initialize@ForegroundLaunch@@YAJXZ @ 0x14028EDFC
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x1402479E0 (--0CForegroundLaunch@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ForegroundLaunch::Initialize(ForegroundLaunch *this)
{
  CForegroundLaunch *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  CForegroundLaunch *v4; // rbx
  __int64 UserSessionState; // rdi

  v1 = (CForegroundLaunch *)Win32AllocPoolZInit(448LL, 1650881365LL);
  if ( v1 )
  {
    v4 = CForegroundLaunch::CForegroundLaunch(v1);
    if ( v4 )
    {
      UserSessionState = W32GetUserSessionState(v3, v2);
      if ( *(_QWORD *)(UserSessionState + 18872) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1357);
      *(_QWORD *)(UserSessionState + 18872) = v4;
    }
  }
  else
  {
    v4 = 0LL;
  }
  return v4 == 0LL ? 0xC0000017 : 0;
}
