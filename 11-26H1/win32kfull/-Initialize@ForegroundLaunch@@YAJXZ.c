/*
 * XREFs of ?Initialize@ForegroundLaunch@@YAJXZ @ 0x140266A80
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x14028EC80 (--0CForegroundLaunch@@QEAA@XZ.c)
 */

__int64 __fastcall ForegroundLaunch::Initialize(ForegroundLaunch *this)
{
  CForegroundLaunch *v1; // rax
  CForegroundLaunch *v2; // rbx
  struct _tagFOREGROUNDGLOBALS *UserForegroundGlobals; // rdi

  v1 = (CForegroundLaunch *)Win32AllocPoolZInit(448LL, 1650881365LL);
  if ( v1 )
  {
    v2 = CForegroundLaunch::CForegroundLaunch(v1);
    if ( v2 )
    {
      UserForegroundGlobals = W32GetUserForegroundGlobals();
      if ( *((_QWORD *)UserForegroundGlobals + 4) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1430LL);
      *((_QWORD *)UserForegroundGlobals + 4) = v2;
    }
  }
  else
  {
    v2 = 0LL;
  }
  return v2 == 0LL ? 0xC0000017 : 0;
}
