/*
 * XREFs of ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1401697F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140137280 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedRestartFilter(struct _NDIS_FILTER_BLOCK **P)
{
  ndisQueueFilterRestart(P[4]);
  ndisDereferenceRef(&P[4]->PnPRef.SpinLock, 0x16u);
  ExFreePoolWithTag(P, 0);
}
