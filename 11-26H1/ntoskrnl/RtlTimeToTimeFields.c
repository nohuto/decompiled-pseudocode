/*
 * XREFs of RtlTimeToTimeFields @ 0x140449E50
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     RtlCutoverTimeToSystemTime @ 0x140806884 (RtlCutoverTimeToSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x14083BAF8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x14083EBE0 (ExpKernelExpirationDateCacheProvider.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADD7C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B28B24 (HalpUtcTimeToAcpiRealTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B385E8 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140C108F0 (HaliSetWakeAlarm.c)
 *     HdlspProcessDumpCommand @ 0x140C52FF0 (HdlspProcessDumpCommand.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
