/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x140249A40
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14024A3B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB9F4 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanup(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18952);
  CitpCleanupGlobalImpactContext((struct _CIT_IMPACT_CONTEXT **)(v3 + 32), v4, v5);
  *(_WORD *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 1) = 1;
}
