/*
 * XREFs of EngClearEvent @ 0x140329680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngClearEvent(PEVENT pEvent)
{
  KeClearEvent((PRKEVENT)pEvent->pKEvent);
}
