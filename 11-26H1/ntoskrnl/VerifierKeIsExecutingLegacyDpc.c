/*
 * XREFs of VerifierKeIsExecutingLegacyDpc @ 0x140C39920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierKeIsExecutingLegacyDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 1;
}
