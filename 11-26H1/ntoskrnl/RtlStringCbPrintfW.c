/*
 * XREFs of RtlStringCbPrintfW @ 0x140420090
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1407A6CC8 (PipServiceInstanceToDeviceInstance.c)
 *     PpmWmiRegisterInfo @ 0x1407DDF64 (PpmWmiRegisterInfo.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1407E70B4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1407E7120 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     SepReadAndPopulateCapes @ 0x14081D3BC (SepReadAndPopulateCapes.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x14082ACC0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x14082AFF0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14082C6B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14082C8E4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x140833C18 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x140851200 (CmpCreatePerfKeys.c)
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x1408B1AA4 (LkmdTelCreateReport.c)
 *     EtwpAccessCheckFromState @ 0x1408FC6F0 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140983B38 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1409DAF9C (PiBuildDeviceNodeInstancePath.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x140A0E4A4 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 *     EtwpCreateNtFileName @ 0x140A15C6C (EtwpCreateNtFileName.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 *     WmipSecurityMethod @ 0x140A41BA0 (WmipSecurityMethod.c)
 *     KiSynchCounterSetCallback @ 0x140A74D70 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 *     ExProcessorCounterSetCallback @ 0x140A75530 (ExProcessorCounterSetCallback.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A9EBA0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140AD3DFC (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140AD41CC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD4E78 (EtwpGetAutoLoggerProviderFilter.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140AEB150 (IoWMIDeviceObjectToInstanceName.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     EtwpGenerateFileName @ 0x140B277B0 (EtwpGenerateFileName.c)
 *     PnpUnloadAttachedDriver @ 0x140B2CD98 (PnpUnloadAttachedDriver.c)
 *     SepSetSystemPaths @ 0x140B603B4 (SepSetSystemPaths.c)
 *     CreateSystemRootLink @ 0x140CAFEFC (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140CB19A8 (MfgInitSystem.c)
 *     IopFormatBootDevice @ 0x140CC3180 (IopFormatBootDevice.c)
 *     PoFxRegisterDebugger @ 0x140CDC3E8 (PoFxRegisterDebugger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140CE803C (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 *     VhdiGetVolumeNumber @ 0x140D09118 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
 *     IopMountCimfsLayer @ 0x140D0970C (IopMountCimfsLayer.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
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
