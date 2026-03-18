/*
 * XREFs of OSOpenHandle @ 0x1400C8D44
 * Callers:
 *     ACPIThermalGetOverrideHandle @ 0x1400A9848 (ACPIThermalGetOverrideHandle.c)
 *     ACPIInitGlobalHeapSize @ 0x1400AAC9C (ACPIInitGlobalHeapSize.c)
 *     ACPIOverrideUsb4Control @ 0x1400AB060 (ACPIOverrideUsb4Control.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400B3D60 (AcpiUseFlexibleOscHandoff.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400B687C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400B6F30 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1400B7244 (OSOpenNextSubkey.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitReadRegistryKeys @ 0x1400D7F6C (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400D8538 (ACPIInitGetPlatformOverrides.c)
 *     AcpiDiagInitialize @ 0x1400D8B98 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     OSOpenUnicodeHandle @ 0x1400C8E14 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v6 >= 0 )
  {
    v6 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      12,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
