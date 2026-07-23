/*
 * XREFs of PdcPoPerfOverride @ 0x1409F4CB8
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409F2CB0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14049F800 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404D57E8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

void PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  PpmEndHighPerfRequest(1);
}
