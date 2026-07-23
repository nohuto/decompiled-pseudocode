/*
 * XREFs of DbgPrintEx @ 0x18002B940
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionString @ 0x18002C1A0 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002C6C0 (RtlpFindUnicodeStringInSection.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpNotOwnerCriticalSection @ 0x180034C60 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     TpCheckTerminateWorker @ 0x18007DE70 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x180080110 (RtlDeactivateActivationContext.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     RtlCreateActivationContext @ 0x1800A1070 (RtlCreateActivationContext.c)
 *     RtlpValidateActivationContextData @ 0x1800A1208 (RtlpValidateActivationContextData.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800A131C (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A14E0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800A1868 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800A24A4 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A3A04 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800BE160 (RtlFindActivationContextSectionGuid.c)
 *     RtlAcquireResourceShared @ 0x1800C4D90 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800C9BE0 (RtlAcquireResourceExclusive.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800DD450 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E2114 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x1800E23E4 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlpQueryRunLevel @ 0x1801021C8 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180108C54 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1801133D4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F0A0 (RtlUnhandledExceptionFilter2.c)
 *     UninitUser32Proc @ 0x18013A6A0 (UninitUser32Proc.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800DB608 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((unsigned int)&Flags, ComponentId, Level, (_DWORD)Format, (__int64)va, 1, 0LL);
}
