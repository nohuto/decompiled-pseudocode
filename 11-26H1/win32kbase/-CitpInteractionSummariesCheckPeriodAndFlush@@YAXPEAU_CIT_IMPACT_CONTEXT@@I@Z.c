/*
 * XREFs of ?CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400D653C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400D6810 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 */

void __fastcall CitpInteractionSummariesCheckPeriodAndFlush(struct _CIT_IMPACT_CONTEXT *a1, int a2, int a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  if ( (*(_DWORD *)(v5 + 12) & 1) != 0 && (unsigned int)(a2 - *((_DWORD *)a1 + 72)) > *(_DWORD *)(v5 + 16) )
    CitpInteractionSummariesFlush(a1, 0);
}
