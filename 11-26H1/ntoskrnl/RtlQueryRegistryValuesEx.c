/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x140A10120
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1404C9BA0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14061CC94 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x140621B34 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x140650580 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x140699D70 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x140699F10 (DifRtlQueryRegistryValuesWrapper.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406C759C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1406C79F8 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1406C7CB8 (EtwpQuerySiloRegistrySettings.c)
 *     sub_1406D1320 @ 0x1406D1320 (sub_1406D1320.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140CE73E8 (EtwpReadConfigParameters.c)
 *     CmIsLastKnownGoodBoot @ 0x140CEF608 (CmIsLastKnownGoodBoot.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 *     SmQueryRegistry @ 0x140D10D28 (SmQueryRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  ULONG v6; // [rsp+20h] [rbp-18h]

  return RtlpQueryRegistryValues(RelativeTo, (int)Path, (int)QueryTable, (int)Context, v6, 1);
}
