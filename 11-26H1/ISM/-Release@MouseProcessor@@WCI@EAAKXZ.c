/*
 * XREFs of ?Release@MouseProcessor@@WCI@EAAKXZ @ 0x18019C5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(__int64 a1)
{
  return GazeProcessor::Release((GazeProcessor *)(a1 - 40));
}
