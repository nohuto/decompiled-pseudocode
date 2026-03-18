/*
 * XREFs of ?CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x14007C2FC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x14007C5C0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 */

void __fastcall CitpInteractionSummariesCheckPeriodAndFlush(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx

  v2 = a2;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  if ( (*(_DWORD *)(v4 + 12) & 1) != 0 && (unsigned int)(v2 - *((_DWORD *)a1 + 72)) > *(_DWORD *)(v4 + 16) )
    CitpInteractionSummariesFlush(a1, 0);
}
