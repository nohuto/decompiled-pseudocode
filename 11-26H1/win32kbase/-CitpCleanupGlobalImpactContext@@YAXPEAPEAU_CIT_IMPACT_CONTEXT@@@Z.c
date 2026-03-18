/*
 * XREFs of ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB9F4
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB954 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x14016BA00 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x140249A40 (-CitpCleanup@@YAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14016B8E8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1, int a2, int a3)
{
  __int64 v4; // rbx
  struct _CIT_IMPACT_CONTEXT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  v5 = *(struct _CIT_IMPACT_CONTEXT **)(v4 + 32);
  if ( v5 )
  {
    CitpContextCleanup(v5);
    GreDeleteFastMutex(*(char **)(v4 + 32), v6, v7, v8);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  *a1 = 0LL;
}
