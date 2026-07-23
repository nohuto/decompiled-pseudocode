/*
 * XREFs of RtlWriteRegistryValue @ 0x140A10F00
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140602270 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x14061CC50 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x14069AB30 (DifRtlWriteRegistryValueWrapper.c)
 *     RtlSetActiveTimeBias @ 0x14080A6D4 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14080AC68 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14082A63C (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpEnumerateAutologgerPath @ 0x140833C18 (EtwpEnumerateAutologgerPath.c)
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 *     WheaWritePolicyValueToRegistry @ 0x14084FE10 (WheaWritePolicyValueToRegistry.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpEnumerateKeyProviders @ 0x140B40078 (EtwpEnumerateKeyProviders.c)
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 *     IopStoreBootDriveLetter @ 0x140CC4270 (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
