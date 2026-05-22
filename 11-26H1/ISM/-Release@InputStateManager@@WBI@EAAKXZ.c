/*
 * XREFs of ?Release@InputStateManager@@WBI@EAAKXZ @ 0x1800CD1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall InputStateManager::Release(__int64 a1)
{
  return HeatProcessor::Release((HeatProcessor *)(a1 - 24));
}
