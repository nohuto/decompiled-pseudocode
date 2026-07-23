/*
 * XREFs of swprintf_s @ 0x14053D560
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14048FE70 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14048FF50 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x1404AAD40 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1404AAE90 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1404FEE90 (RtlEthernetAddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x14058964C (HalpExtBuildResourceIdString.c)
 *     SddlpUuidToString @ 0x14081E95C (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x140841304 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x140841654 (ExpCreateOutputSIGNATURE.c)
 *     ExpGetDriveGeometry @ 0x140841B08 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x140843330 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408434D0 (NtDeleteDriverEntry.c)
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 *     CmpAddAcpiAliasEntry @ 0x1408581CC (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140858C5C (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     CmpRestampVersion @ 0x14085C8CC (CmpRestampVersion.c)
 *     BiEnumerateDiskPartitions @ 0x1408984DC (BiEnumerateDiskPartitions.c)
 *     BiGetNtPartitionPathCallback @ 0x1408988F0 (BiGetNtPartitionPathCallback.c)
 *     BiGetPhysicalDriveName @ 0x140898CE0 (BiGetPhysicalDriveName.c)
 *     BiCreateBootEntry @ 0x140899C64 (BiCreateBootEntry.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     SiGetBiosSystemPartition @ 0x14089BC6C (SiGetBiosSystemPartition.c)
 *     BiUnloadHiveByName @ 0x1409A1340 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 *     BiStringFromGUID @ 0x1409A48E8 (BiStringFromGUID.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 *     ExpFindDiskSignature @ 0x140A2DFDC (ExpFindDiskSignature.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B385E8 (CmpUpdateReorganizeRegistryValues.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5F010 (PopPotsLogPowerTransitionReliability.c)
 *     CreateMiniNtBootKey @ 0x140CAFD20 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CDD068 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x14053D590 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vswprintf_s(Dst, SizeInWords, Format, va);
}
