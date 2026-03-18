/*
 * XREFs of ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x140194CF4
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9910 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TdrIsDisplayOnlyTdr(int a1)
{
  return ((a1 - 4) & 0xFFFFFFFC) == 0 && a1 != 6 || a1 == 8;
}
