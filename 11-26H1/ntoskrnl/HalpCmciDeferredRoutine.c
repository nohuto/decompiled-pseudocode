/*
 * XREFs of HalpCmciDeferredRoutine @ 0x140580B80
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x14044BC14 (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x14057D0BC (HalpCmcStartPolling.c)
 */

void __fastcall HalpCmciDeferredRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( DeferredContext[128] )
    HalpCmcStartPolling();
  else
    HalpCmciPollProcessor(*(_QWORD *)(DeferredContext + 172));
}
