/*
 * XREFs of RtlTimeFieldsToTime @ 0x1404522E0
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1407801E4 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407ABB48 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlCutoverTimeToSystemTime @ 0x140800DE4 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExGetExpirationDate @ 0x140837BDC (ExGetExpirationDate.c)
 *     I_MinAsn1AdjustFileTime @ 0x1408A3D14 (I_MinAsn1AdjustFileTime.c)
 *     I_MinAsn1ConvertTime @ 0x1408A3EFC (I_MinAsn1ConvertTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C08734 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140C0A6E0 (HaliSetWakeAlarm.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x1404522F8 (RtlpTimeFieldsToTime.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time);
}
