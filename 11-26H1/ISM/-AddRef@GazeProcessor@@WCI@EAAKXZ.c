/*
 * XREFs of ?AddRef@GazeProcessor@@WCI@EAAKXZ @ 0x18019BBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 40));
}
