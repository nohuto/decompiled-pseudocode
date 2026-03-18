/*
 * XREFs of RtlWriteRegistryValue @ 0x140A11D10
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405FF820 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x140619C00 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x140696F50 (DifRtlWriteRegistryValueWrapper.c)
 *     RtlSetActiveTimeBias @ 0x140804C34 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408051C8 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1408243F0 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpEnumerateAutologgerPath @ 0x14082D9D8 (EtwpEnumerateAutologgerPath.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 *     WheaWritePolicyValueToRegistry @ 0x140849B00 (WheaWritePolicyValueToRegistry.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpEnumerateKeyProviders @ 0x140B3E040 (EtwpEnumerateKeyProviders.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
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
