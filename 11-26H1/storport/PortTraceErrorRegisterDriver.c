/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1401B2058
 * Callers:
 *     PortTraceInitTracing @ 0x1401304F0 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x140130258 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1401B207C (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
