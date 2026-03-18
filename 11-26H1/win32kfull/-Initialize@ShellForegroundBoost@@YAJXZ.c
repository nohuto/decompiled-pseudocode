/*
 * XREFs of ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x14029118C
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ShellForegroundBoost::Initialize(ShellForegroundBoost *this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  struct _tagFOREGROUNDGLOBALS *UserForegroundGlobals; // rdi

  v1 = (_QWORD *)Win32AllocPoolZInit(32LL, 1935831893LL);
  v2 = v1;
  if ( v1 )
  {
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1[3] = 0LL;
    *v1 = 0LL;
    UserForegroundGlobals = W32GetUserForegroundGlobals();
    if ( *((_QWORD *)UserForegroundGlobals + 5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 196);
    *((_QWORD *)UserForegroundGlobals + 5) = v2;
  }
  else
  {
    v2 = 0LL;
  }
  return v2 == 0LL ? 0xC0000017 : 0;
}
