/*
 * XREFs of LongCapTraceDpc @ 0x140008B60
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x140008BD4 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 928, &PPM_ETW_LONG_CAP_INFO, &PPM_ETW_LONG_CAP_INFO_HV);
}
