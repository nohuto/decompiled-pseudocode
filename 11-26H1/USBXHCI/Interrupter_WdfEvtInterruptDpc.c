/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x14002A500
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDpc(__int64 a1, __int64 a2)
{
  return Interrupter_DeferredWorkProcessor(a1, a2, 0LL);
}
