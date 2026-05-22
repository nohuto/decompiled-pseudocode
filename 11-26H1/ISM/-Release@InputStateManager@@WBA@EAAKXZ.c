/*
 * XREFs of ?Release@InputStateManager@@WBA@EAAKXZ @ 0x1800CD1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall InputStateManager::Release(__int64 a1)
{
  return HeatProcessor::Release((HeatProcessor *)(a1 - 16));
}
