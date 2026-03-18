/*
 * XREFs of ViPendingCompleteAtDPC @ 0x140C302F0
 * Callers:
 *     <none>
 * Callees:
 *     ViPendingCompleteAfterWait @ 0x140C301B4 (ViPendingCompleteAfterWait.c)
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
