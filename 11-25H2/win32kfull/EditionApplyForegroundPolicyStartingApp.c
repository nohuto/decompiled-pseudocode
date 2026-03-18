/*
 * XREFs of EditionApplyForegroundPolicyStartingApp @ 0x1401D9F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EditionApplyForegroundPolicyStartingApp(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CForegroundLaunch::ApplyForegroundPolicy(*(CForegroundLaunch **)(UserSessionState + 18872), a1);
}
