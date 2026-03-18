/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x140279DF0
 * Callers:
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 * Callees:
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1401EF48C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rax

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 66804);
  if ( (v3 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3726);
  result = IsForegroundWindow(a1, v3);
  if ( !result )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18888);
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == v8 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      return anonymous_namespace_::xxxLocalActivateWindow(
               a1,
               0LL,
               ~(unsigned __int16)(*(_DWORD *)(UserSessionState + 66804) >> 5) & 2);
    }
    else
    {
      v10 = W32GetUserSessionState(v8, v7);
      return (unsigned int)xxxSetForegroundWindow2(
                             (__int64)a1,
                             0LL,
                             ~(unsigned __int8)(*(_DWORD *)(v10 + 66804) >> 4) & 4 | 2u) != 0;
    }
  }
  return result;
}
