/*
 * XREFs of swprintf_s @ 0x1405006D0
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14045F4B0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14045F590 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x140475330 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x140475480 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1404CA150 (RtlEthernetAddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x14054A474 (HalpExtBuildResourceIdString.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14068C720 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdEnumerateDisks @ 0x1406E95D8 (BcdEnumerateDisks.c)
 *     SddlpUuidToString @ 0x1407879A4 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1407AC248 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407AC584 (ExpCreateOutputSIGNATURE.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     CmSetAcpiHwProfile @ 0x1407C2E64 (CmSetAcpiHwProfile.c)
 *     CmpAddAcpiAliasEntry @ 0x1407C36A4 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407C411C (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407C4E54 (CmpMoveBiosAliasTable.c)
 *     CmpRestampVersion @ 0x1407C7FD8 (CmpRestampVersion.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CB130 (CmpUpdateReorganizeRegistryValues.c)
 *     BiGetNtPartitionPath @ 0x140804030 (BiGetNtPartitionPath.c)
 *     BiCreateBootEntry @ 0x140805084 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140805F34 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140806EA0 (SiGetBiosSystemPartition.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1409E8690 (LocalConvertSDToStringSD_Rev1.c)
 *     SiGetBootDeviceName @ 0x140A241AC (SiGetBootDeviceName.c)
 *     BiUnloadHiveByName @ 0x140A249A0 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 *     ExpTranslateEfiPath @ 0x140A6183C (ExpTranslateEfiPath.c)
 *     ExpFindDiskSignature @ 0x140A61EC0 (ExpFindDiskSignature.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A91E9C (PopPotsLogPowerTransitionReliability.c)
 *     ExpGetDriveGeometry @ 0x140AAD5E0 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AB04CC (BiGetPhysicalDriveName.c)
 *     CreateMiniNtBootKey @ 0x140BF9220 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C227FC (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x140500700 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
