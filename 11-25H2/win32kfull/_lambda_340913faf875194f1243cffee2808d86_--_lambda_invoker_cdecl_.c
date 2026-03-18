/*
 * XREFs of _lambda_340913faf875194f1243cffee2808d86_::_lambda_invoker_cdecl_ @ 0x140288300
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientEnableMMCSS @ 0x14021F090 (xxxClientEnableMMCSS.c)
 *     ?WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ @ 0x140226AFC (-WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall lambda_340913faf875194f1243cffee2808d86_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1, a2);
  if ( v2 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v4, v3) + 68480) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 941);
  InputTraceLogging::Win32k::WakeDTForMMCSS();
  UserSessionState = W32GetUserSessionState(v6, v5);
  return xxxClientEnableMMCSS((**(_DWORD **)(UserSessionState + 19872) >> 12) & 1);
}
