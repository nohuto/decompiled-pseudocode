/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x14023FCA4
 * Callers:
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156AC8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  CitpCleanupGlobalImpactContext((struct _CIT_IMPACT_CONTEXT **)(v2 + 32), v3);
  *(_WORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 1) = 1;
}
