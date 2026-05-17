/*
 * XREFs of DbgPrintEx @ 0x1800413D0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180040250 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpLocateActivationContextSection @ 0x180041090 (RtlpLocateActivationContextSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionString @ 0x180041C30 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x180042150 (RtlpFindUnicodeStringInSection.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpNotOwnerCriticalSection @ 0x18004A6E0 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     TpCheckTerminateWorker @ 0x180086AD0 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x180088D10 (RtlDeactivateActivationContext.c)
 *     RtlCreateActivationContext @ 0x1800A1F40 (RtlCreateActivationContext.c)
 *     RtlpValidateActivationContextData @ 0x1800A20D8 (RtlpValidateActivationContextData.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800A21EC (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A23B0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800A2738 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800A3374 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A48D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800C09D0 (RtlFindActivationContextSectionGuid.c)
 *     RtlAcquireResourceShared @ 0x1800C75D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800CC470 (RtlAcquireResourceExclusive.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800D5700 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E4260 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x1800E4530 (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlpQueryRunLevel @ 0x180102E48 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1801092B4 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180113B3C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F2F0 (RtlUnhandledExceptionFilter2.c)
 *     UninitUser32Proc @ 0x18013A930 (UninitUser32Proc.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800DE698 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintEx(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return vDbgPrintExWithPrefixInternal((unsigned int)&unk_180176D3C, a1, a2, (_DWORD)a3, (__int64)va, 1, 0LL);
}
