/*
 * XREFs of PortpErrorInitDpc @ 0x140130258
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1401B2058 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
