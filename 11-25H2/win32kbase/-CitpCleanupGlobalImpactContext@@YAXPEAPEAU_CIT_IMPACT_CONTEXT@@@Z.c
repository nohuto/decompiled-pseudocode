/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156AC8
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x140132BB0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156A20 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023FCA4 (-CitpCleanup@@YAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14023FCDC (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _CIT_IMPACT_CONTEXT *v4; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  v4 = *(struct _CIT_IMPACT_CONTEXT **)(v3 + 32);
  if ( v4 )
  {
    CitpContextCleanup(v4);
    GreDeleteFastMutex(*(char **)(v3 + 32));
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  *a1 = 0LL;
}
