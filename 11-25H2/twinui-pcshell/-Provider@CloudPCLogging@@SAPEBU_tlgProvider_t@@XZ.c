/*
 * XREFs of ?Provider@CloudPCLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18061BBB0
 * Callers:
 *     ??$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z @ 0x180616464 (--$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z.c)
 *     ??$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z @ 0x18061659C (--$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z.c)
 *     ??$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z @ 0x1806307FC (--$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$ProviderProcessDestroyedEventFired@AEBIPEBG@CloudPCTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x180630B3C (--$ProviderProcessDestroyedEventFired@AEBIPEBG@CloudPCTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x180630BC8 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z @ 0x180630C38 (--$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z.c)
 *     ??$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z @ 0x180630CA8 (--$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z.c)
 *     ??$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z @ 0x180639E30 (--$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z @ 0x180639EBC (--$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z.c)
 *     ??$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTelemetry@@SAX$$QEAPEBG0$$QEA_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@Z @ 0x1806463E4 (--$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTel.c)
 * Callees:
 *     ?get@?$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z @ 0x18061D4EC (-get@-$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CloudPCLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CloudPCLogging>::get(
                                             a1,
                                             _lambda_dfea9040a9b7ae3ffb0f12b39947d7d1_::_lambda_invoker_cdecl_)
                                         + 8);
}
