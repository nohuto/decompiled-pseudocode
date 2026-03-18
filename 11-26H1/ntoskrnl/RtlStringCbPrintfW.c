/*
 * XREFs of RtlStringCbPrintfW @ 0x140433060
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A4188 (PipServiceInstanceToDeviceInstance.c)
 *     PpmWmiRegisterInfo @ 0x1407D9FC4 (PpmWmiRegisterInfo.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1407E2024 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1407E2090 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     SepReadAndPopulateCapes @ 0x1408171AC (SepReadAndPopulateCapes.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140824A80 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140824DB0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x140825B64 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140826478 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408266A4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140826F90 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x14082D9D8 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x14084AEF0 (CmpCreatePerfKeys.c)
 *     SiGetEfiSystemDevice @ 0x140894F48 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x1408AB660 (LkmdTelCreateReport.c)
 *     EtwpAccessCheckFromState @ 0x140920BE0 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140920D60 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x14094522C (IopGetLegacyVetoListDrivers.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409B2A78 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x140A0F2C8 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A146BC (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x140A167FC (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x140A16914 (EtwpExpandFileName.c)
 *     EtwpGenerateFileName @ 0x140A1751C (EtwpGenerateFileName.c)
 *     PiNormalizeDeviceText @ 0x140A27F78 (PiNormalizeDeviceText.c)
 *     WmipSecurityMethod @ 0x140A2FD20 (WmipSecurityMethod.c)
 *     PfSnOperationProcess @ 0x140A43E74 (PfSnOperationProcess.c)
 *     KiSynchCounterSetCallback @ 0x140A67DA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A67EF0 (KiSynchNumaCounterSetCallback.c)
 *     ExProcessorCounterSetCallback @ 0x140A68560 (ExProcessorCounterSetCallback.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A9C030 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140AA7A68 (PiBuildDeviceNodeInstancePath.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140AD7354 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140AD7724 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD83D0 (EtwpGetAutoLoggerProviderFilter.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140AE8F00 (IoWMIDeviceObjectToInstanceName.c)
 *     MiCreateSectionForDriver @ 0x140AEBC54 (MiCreateSectionForDriver.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     PnpUnloadAttachedDriver @ 0x140B2AD18 (PnpUnloadAttachedDriver.c)
 *     SepSetSystemPaths @ 0x140B5D234 (SepSetSystemPaths.c)
 *     CreateSystemRootLink @ 0x140CA9EFC (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140CAB968 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140CD6094 (PoFxRegisterDebugger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE1C9C (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdInitialize @ 0x140D02894 (VhdInitialize.c)
 *     VhdiGetVolumeNumber @ 0x140D02D78 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 *     IopMountCimfsLayer @ 0x140D0336C (IopMountCimfsLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
