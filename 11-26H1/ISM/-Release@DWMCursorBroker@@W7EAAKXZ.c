/*
 * XREFs of ?Release@DWMCursorBroker@@W7EAAKXZ @ 0x1800CD190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DWMCursorBroker::Release(__int64 a1)
{
  return HeatProcessor::Release((HeatProcessor *)(a1 - 8));
}
