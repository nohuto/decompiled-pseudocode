/*
 * XREFs of ?Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802019DC
 * Callers:
 *     ?FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ @ 0x180201988 (-FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ.c)
 *     ??$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z @ 0x18056AC18 (--$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z @ 0x18056AFA4 (--$GetAppDisplayName@PEBGPEBG@AppUsageTelemetry@@SAX$$QEAPEBG0@Z.c)
 *     ??$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z @ 0x18056B670 (--$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z.c)
 *     ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x18056B6FC (--$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z.c)
 *     ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1805705D4 (-StartUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1805706B4 (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ??$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z @ 0x180571040 (--$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x1805737C0 (--$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0BK@$$CBG@AppUsageTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180573808 (--$DebugInfo@AEAY0BK@$$CBG@AppUsageTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0BO@$$CBG@AppUsageTelemetry@@SAXAEAY0BO@$$CBG@Z @ 0x180573850 (--$DebugInfo@AEAY0BO@$$CBG@AppUsageTelemetry@@SAXAEAY0BO@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z @ 0x180573898 (--$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1805738E0 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CL@$$CBG@AppUsageTelemetry@@SAXAEAY0CL@$$CBG@Z @ 0x180573924 (--$DebugInfo@AEAY0CL@$$CBG@AppUsageTelemetry@@SAXAEAY0CL@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CM@$$CBG@AppUsageTelemetry@@SAXAEAY0CM@$$CBG@Z @ 0x18057396C (--$DebugInfo@AEAY0CM@$$CBG@AppUsageTelemetry@@SAXAEAY0CM@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z @ 0x1805739B4 (--$DebugInfo@AEAY0DC@$$CBG@AppUsageTelemetry@@SAXAEAY0DC@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z @ 0x1805739FC (--$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z @ 0x180573A44 (--$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z.c)
 *     ??$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z @ 0x180573A8C (--$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x180573B18 (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z @ 0x180576584 (--$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1802019FC (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall AppUsageTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AppUsageTelemetry>::get(
                                             a1,
                                             _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)
                                         + 8);
}
