/*
 * XREFs of RtlTimeToTimeFields @ 0x140451D20
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E0808 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     RtlCutoverTimeToSystemTime @ 0x140800DE4 (RtlCutoverTimeToSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1408358B8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1408389A0 (ExpKernelExpirationDateCacheProvider.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AB012C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AD39B4 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B268C4 (HalpUtcTimeToAcpiRealTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B363D8 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140C0A6E0 (HaliSetWakeAlarm.c)
 *     HdlspProcessDumpCommand @ 0x140C4CFF0 (HdlspProcessDumpCommand.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140451D40 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
