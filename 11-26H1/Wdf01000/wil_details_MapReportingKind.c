/*
 * XREFs of wil_details_MapReportingKind @ 0x14008B320
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14008AE54 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(wil_ReportingKind kind, int enabled)
{
  unsigned __int8 v2; // cl

  if ( kind )
  {
    switch ( kind )
    {
      case wil_ReportingKind_UniqueUsage:
        return enabled == 0 ? 4 : 0;
      case wil_ReportingKind_UniqueOpportunity:
        return enabled != 0 ? 1 : 5;
      case wil_ReportingKind_DeviceUsage:
        return enabled != 0 ? 2 : 6;
      case wil_ReportingKind_DeviceOpportunity:
        return enabled != 0 ? 3 : 7;
      case wil_ReportingKind_TotalDuration:
        return enabled != 0 ? 8 : 10;
      case wil_ReportingKind_PausedDuration:
        return enabled != 0 ? 9 : 11;
    }
    v2 = kind - 100;
    if ( v2 <= 0x31u )
      return v2 + (enabled != 0 ? 100 : 150);
  }
  return 255LL;
}
