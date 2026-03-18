/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x140A10F30
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1404D0170 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140619C44 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x14061EAE4 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x14064C9A0 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x140696190 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x140696330 (DifRtlQueryRegistryValuesWrapper.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406C395C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1406C3DB8 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x1406C4078 (EtwpQuerySiloRegistrySettings.c)
 *     sub_1406CD2F0 @ 0x1406CD2F0 (sub_1406CD2F0.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CBD3BC (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140CE1048 (EtwpReadConfigParameters.c)
 *     CmIsLastKnownGoodBoot @ 0x140CE9268 (CmIsLastKnownGoodBoot.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 *     SmQueryRegistry @ 0x140D0AA58 (SmQueryRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(int a1, int a2, int a3, int a4)
{
  ULONG v5; // [rsp+20h] [rbp-18h]

  return RtlpQueryRegistryValues(a1, a2, a3, a4, v5, 1);
}
