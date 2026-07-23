/*
 * XREFs of RtlTimeFieldsToTime @ 0x14044A410
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x140782CE4 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlCutoverTimeToSystemTime @ 0x140806884 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExGetExpirationDate @ 0x14083DE1C (ExGetExpirationDate.c)
 *     I_MinAsn1AdjustFileTime @ 0x1408AA124 (I_MinAsn1AdjustFileTime.c)
 *     I_MinAsn1ConvertTime @ 0x1408AA30C (I_MinAsn1ConvertTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C0E944 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140C108F0 (HaliSetWakeAlarm.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time);
}
