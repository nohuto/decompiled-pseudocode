/*
 * XREFs of CitModerncoreShutdown @ 0x1402409A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156A20 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitModerncoreShutdown(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( CitIsEnabled(a1, a2) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    CitpLogoff(*(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18912) + 32LL));
  }
}
