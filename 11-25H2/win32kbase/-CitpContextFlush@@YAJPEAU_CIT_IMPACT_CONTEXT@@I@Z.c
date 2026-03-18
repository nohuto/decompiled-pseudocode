/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140156A6C
 * Callers:
 *     CitDisplayPowerChange @ 0x14007F0D4 (CitDisplayPowerChange.c)
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156A20 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023FB58 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x140240788 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x14007C5C0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2)
{
  struct tagPROCESSINFO *v2; // rdi
  unsigned int v3; // esi

  v2 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
  v3 = a2;
  if ( v2 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL);
    CitpSetForegroundProcess(a1, v3, v2, 0LL);
  }
  CitpInteractionSummariesFlush(a1, 0);
  return 0LL;
}
