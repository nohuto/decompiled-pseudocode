/*
 * XREFs of ViPendingCompleteAtDPC @ 0x140B81E90
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x140B81D48 (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
