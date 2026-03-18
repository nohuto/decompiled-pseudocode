/*
 * XREFs of CitModerncoreShutdown @ 0x14024A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB954 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitModerncoreShutdown(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax

  if ( CitIsEnabled(a1, a2, a3) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    CitpLogoff(*(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18952) + 32LL));
  }
}
