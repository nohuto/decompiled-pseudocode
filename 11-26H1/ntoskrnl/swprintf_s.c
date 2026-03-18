/*
 * XREFs of swprintf_s @ 0x14053B0E0
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x140496320 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x140496400 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x1404B16B0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1404B1800 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1405055E0 (RtlEthernetAddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x14058712C (HalpExtBuildResourceIdString.c)
 *     SddlpUuidToString @ 0x14081874C (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14083B0C4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14083B414 (ExpCreateOutputSIGNATURE.c)
 *     ExpGetDriveGeometry @ 0x14083B8C8 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     CmSetAcpiHwProfile @ 0x140851648 (CmSetAcpiHwProfile.c)
 *     CmpAddAcpiAliasEntry @ 0x140851EBC (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14085294C (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140853680 (CmpMoveBiosAliasTable.c)
 *     CmpRestampVersion @ 0x140856534 (CmpRestampVersion.c)
 *     BiEnumerateDiskPartitions @ 0x1408920E0 (BiEnumerateDiskPartitions.c)
 *     BiGetNtPartitionPathCallback @ 0x1408924F0 (BiGetNtPartitionPathCallback.c)
 *     BiGetPhysicalDriveName @ 0x1408928E0 (BiGetPhysicalDriveName.c)
 *     BiCreateBootEntry @ 0x140893864 (BiCreateBootEntry.c)
 *     SyspartEnumerateDisks @ 0x140894798 (SyspartEnumerateDisks.c)
 *     SiGetBiosSystemPartition @ 0x14089586C (SiGetBiosSystemPartition.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     BiUnloadHiveByName @ 0x1409D0360 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x1409D35AC (BiAddStoreFromFile.c)
 *     BiStringFromGUID @ 0x1409D3908 (BiStringFromGUID.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A61D64 (LocalConvertSDToStringSD_Rev1.c)
 *     ExpTranslateEfiPath @ 0x140A9512C (ExpTranslateEfiPath.c)
 *     ExpFindDiskSignature @ 0x140A9578C (ExpFindDiskSignature.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
 *     SiGetBootDeviceName @ 0x140B07A70 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140B363D8 (CmpUpdateReorganizeRegistryValues.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5BCF4 (PopPotsLogPowerTransitionReliability.c)
 *     CreateMiniNtBootKey @ 0x140CA9D20 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CD6D14 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x14053B110 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vswprintf_s(Dst, SizeInWords, Format, va);
}
