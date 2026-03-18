/*
 * XREFs of PdcPoPerfOverride @ 0x140A390F8
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A370F0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1404A6098 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1404A6170 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404DC108 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

void PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  PpmEndHighPerfRequest(1);
}
