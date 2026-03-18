/*
 * XREFs of HalpCmciDeferredRoutine @ 0x14057E660
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x140453AE4 (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x14057AB8C (HalpCmcStartPolling.c)
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
