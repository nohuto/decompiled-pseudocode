/*
 * XREFs of memmove @ 0x180164600
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1800012A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x18001D2F0 (LdrAddLoadAsDataTable.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18001DC20 (_GetOverlayPackageKeyForLanguage.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18001E32C (_GetOverlayPackageTypeFromKey.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18001E730 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180020470 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     SymCryptHashAppendInternal @ 0x180022EFC (SymCryptHashAppendInternal.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180027040 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180027170 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x180027580 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x180028780 (RtlGetPersistedStateLocation.c)
 *     TppPrepareDirectParams @ 0x18002AC40 (TppPrepareDirectParams.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18002DD10 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrGetDllFullName @ 0x18003D1A0 (LdrGetDllFullName.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     EtwpTrackBinaryForSession @ 0x18003FAD0 (EtwpTrackBinaryForSession.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x180040DE0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x1800413B8 (EtwpQueryRegString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180041A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpEventApiCallback @ 0x1800428D0 (EtwpEventApiCallback.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800447EC (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180044EB0 (RtlpQueryRegistryDirect.c)
 *     RtlpCreateServerAcl @ 0x18004556C (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1800460D0 (RtlpNormalizeAcl.c)
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpCombineAcls @ 0x180048430 (RtlpCombineAcls.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18004A930 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x18004B420 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x18004BDC0 (RtlpCopyAces.c)
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18004D9F0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180051870 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x180054740 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToChar @ 0x1800557B0 (RtlIntegerToChar.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180056F4C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800586F4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     RtlpHeapTrkTrackStack @ 0x18005BF90 (RtlpHeapTrkTrackStack.c)
 *     EtwpTraceUmEvent @ 0x18005C200 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18005C550 (EtwpRelogEvent.c)
 *     RtlpHeapTrkReportResult @ 0x18005F65C (RtlpHeapTrkReportResult.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlCopyUnicodeString @ 0x180064770 (RtlCopyUnicodeString.c)
 *     EtwpWriteBufferCompressed @ 0x180066FE8 (EtwpWriteBufferCompressed.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180067588 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18006AE68 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18006C80C (RtlpExtendFrontEndUsageArray.c)
 *     RtlSparseArrayElementAllocate @ 0x18006E788 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     LdrpAcquireTlsIndex @ 0x180072CBC (LdrpAcquireTlsIndex.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180075000 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180075B50 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180076560 (RtlQueryProcessBackTraceInformation.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180079470 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     ReportExceptionInternal @ 0x18007F9F4 (ReportExceptionInternal.c)
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x180082700 (RtlConvertDeviceFamilyInfoToString.c)
 *     GetImageTuple @ 0x18008E3A0 (GetImageTuple.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008FDC4 (RtlpMuiRegDupLanguageConfigList.c)
 *     LdrpResolvePatchDllName @ 0x1800982BC (LdrpResolvePatchDllName.c)
 *     sxsisol_RespectDotLocal @ 0x180098C80 (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180098E00 (RtlComputePrivatizedDllName_U.c)
 *     LdrAddDllDirectory @ 0x180099440 (LdrAddDllDirectory.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180099740 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x18009CB40 (RtlpScanEnvironment.c)
 *     RtlpQueryEnvironmentHashTable @ 0x18009D240 (RtlpQueryEnvironmentHashTable.c)
 *     RtlSetEnvironmentVar @ 0x18009D730 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x18009E1A0 (RtlCreateEnvironmentEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18009E510 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18009EA54 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18009F5C8 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentStrings @ 0x18009F800 (RtlSetEnvironmentStrings.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A14E0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800A24A4 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 *     RtlDosSearchPath_U @ 0x1800A3770 (RtlDosSearchPath_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A3A04 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A4170 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A5230 (RtlDosSearchPath_Ustr.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6190 (RtlNtPathNameToDosPathName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A976C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     RtlIpv6AddressToStringExW @ 0x1800AAB80 (RtlIpv6AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressW @ 0x1800ABF20 (RtlIpv6StringToAddressW.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800AC330 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 *     PsspDumpThread @ 0x1800B1008 (PsspDumpThread.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B3E84 (PsspCaptureVaSpaceInformation2.c)
 *     RtlInsertElementGenericTable @ 0x1800B50D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B5230 (RtlInsertElementGenericTableFull.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlFormatMessageEx @ 0x1800B9360 (RtlFormatMessageEx.c)
 *     EtwpTraceUmMessage @ 0x1800BB44C (EtwpTraceUmMessage.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800BBBE0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1800BBD20 (RtlInsertElementGenericTableAvl.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BC668 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpCopyXStateChunk @ 0x1800C14F8 (RtlpCopyXStateChunk.c)
 *     RtlpPushPageDescriptor @ 0x1800C1FB4 (RtlpPushPageDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C5290 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800C58D0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x1800C5B00 (RtlMakeSelfRelativeSD.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 *     LdrpProtectedCopyMemory @ 0x1800C76A0 (LdrpProtectedCopyMemory.c)
 *     CsrCaptureMessageBuffer @ 0x1800C7BD0 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800C7E2C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x1800C8020 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x1800C8474 (CsrpConnectToServer.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800C9A90 (RtlAddAccessAllowedAceEx.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CBA00 (LdrpLogFatalLdrEtwEvent.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CBD80 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpAllocatePlaceHolder @ 0x1800CF1F0 (LdrpAllocatePlaceHolder.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     LdrpRecordUnloadEvent @ 0x1800D3560 (LdrpRecordUnloadEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D4050 (LdrpLogNewDllLoadInternal.c)
 *     RtlpHpExtrasMove @ 0x1800D4520 (RtlpHpExtrasMove.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800D65D0 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800D8718 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800D8DE8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlIpv4AddressToStringExW @ 0x1800D9E20 (RtlIpv4AddressToStringExW.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DAF20 (RtlpMuiRegLoadLicInformation.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800DBCA0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlDuplicateUnicodeString @ 0x1800DC3B0 (RtlDuplicateUnicodeString.c)
 *     QueryRegistryValue @ 0x1800DC55C (QueryRegistryValue.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800DD450 (RtlQueryActivationContextApplicationSettings.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDDA0 (LdrUpdatePackageSearchPath.c)
 *     RtlIpv6StringToAddressA @ 0x1800E0F40 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E1810 (RtlIpv6AddressToStringExA.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800E1E00 (RtlCreateBoundaryDescriptor.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E2114 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     SaferpIsDllAllowed @ 0x1800E27A4 (SaferpIsDllAllowed.c)
 *     RtlpNtQueryValueKey @ 0x1800E4260 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800E56D0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E59E8 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E6530 (RtlIpv4AddressToStringExA.c)
 *     PsspHandleDumper @ 0x1800E67E0 (PsspHandleDumper.c)
 *     RtlCopySecurityDescriptor @ 0x1800E6A20 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800E7CE0 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800E8844 (RtlpInitParameterBlock.c)
 *     RtlpRegisterStackTrace @ 0x1800EB364 (RtlpRegisterStackTrace.c)
 *     EtwpAddEventToBuffer @ 0x1800EC0B4 (EtwpAddEventToBuffer.c)
 *     LZ4HC_compress_generic @ 0x1800ED00C (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800EFA3C (LZ4HC_compress_generic_dictCtx.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800F85C0 (RtlpCopyMappedMemoryEx.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 *     RtlDecompressBuffer2Xp10 @ 0x1800F8ED8 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     Xp10BitCopy @ 0x1800FA6B8 (Xp10BitCopy.c)
 *     RtlLargeIntegerToChar @ 0x1800FA860 (RtlLargeIntegerToChar.c)
 *     LZNT1CompressChunk @ 0x1800FAC6C (LZNT1CompressChunk.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     RtlGenerate8dot3Name @ 0x180100A40 (RtlGenerate8dot3Name.c)
 *     RtlAddAttributeActionToRXact @ 0x180101CF0 (RtlAddAttributeActionToRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlCopyString @ 0x180104F20 (RtlCopyString.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     RtlQuerySecurityObject @ 0x180107B60 (RtlQuerySecurityObject.c)
 *     RtlpCopyBitMapTailToHead @ 0x180108A40 (RtlpCopyBitMapTailToHead.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180108C54 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     LZ4_compress_fast_extState @ 0x1801094B4 (LZ4_compress_fast_extState.c)
 *     RtlpCheckDeviceName @ 0x18010ADE8 (RtlpCheckDeviceName.c)
 *     fill_window @ 0x18010B0DC (fill_window.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlExtractBitMap @ 0x18010D010 (RtlExtractBitMap.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010E270 (RtlDecompressBufferLZNT1.c)
 *     RtlSetFeatureConfigurations @ 0x18010E590 (RtlSetFeatureConfigurations.c)
 *     RtlConnectToSm @ 0x18010F390 (RtlConnectToSm.c)
 *     RtlLargeIntegerToUnicode @ 0x18010F568 (RtlLargeIntegerToUnicode.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801122E0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1801133D4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpAddSystemPath @ 0x180113E30 (RtlpAddSystemPath.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180113FC0 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180114FC0 (RtlpHpTagQueryHeapsRemote.c)
 *     EtwpTrackDebugIdForSession @ 0x1801155B8 (EtwpTrackDebugIdForSession.c)
 *     LdrpLoadEnclaveModule @ 0x180116A00 (LdrpLoadEnclaveModule.c)
 *     RtlQueryAtomInAtomTable @ 0x180117380 (RtlQueryAtomInAtomTable.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 *     RtlDecompressBufferLz4 @ 0x18011DCC0 (RtlDecompressBufferLz4.c)
 *     SymCryptSha256Append @ 0x180120F44 (SymCryptSha256Append.c)
 *     read_buf @ 0x1801210E0 (read_buf.c)
 *     RtlpQueryRegistryDirectStringValue @ 0x180121164 (RtlpQueryRegistryDirectStringValue.c)
 *     TpSetDefaultPoolCpuSets @ 0x1801217C0 (TpSetDefaultPoolCpuSets.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180125130 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125AA4 (RtlpAddLanguagesToMultiSZ.c)
 *     EtwTraceEventInstance @ 0x180125E80 (EtwTraceEventInstance.c)
 *     wcscpy @ 0x18012D6D0 (wcscpy.c)
 *     wcsncat @ 0x18012D980 (wcsncat.c)
 *     wcsncpy @ 0x18012DA30 (wcsncpy.c)
 *     RaiseException @ 0x180130830 (RaiseException.c)
 *     memcpy_s @ 0x1801338C0 (memcpy_s.c)
 *     memmove_s @ 0x180133960 (memmove_s.c)
 *     ReadString_1 @ 0x180136774 (ReadString_1.c)
 *     RtlSetProcessDebugInformation @ 0x18013A090 (RtlSetProcessDebugInformation.c)
 *     RtlInitializeNtUserPfn @ 0x18013A4B0 (RtlInitializeNtUserPfn.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013CFD0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x18013D2D0 (RtlReplaceSidInSd.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D6AC (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpFilterSacl @ 0x18013DBF0 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013EB30 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x180140690 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x180140710 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x180140900 (RtlCopyBitMap.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x180141C40 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801423F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x180144760 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180144AB0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180144F90 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180145910 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180145D70 (RtlRemovePropertyStore.c)
 *     RtlWriteNonVolatileMemory @ 0x1801472F0 (RtlWriteNonVolatileMemory.c)
 *     __ft_array_insert @ 0x180147CC8 (__ft_array_insert.c)
 *     RtlRemoteCall @ 0x180148130 (RtlRemoteCall.c)
 *     RtlQueryFeatureConfigurationBuffer @ 0x180148BC0 (RtlQueryFeatureConfigurationBuffer.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A124 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014D91C (RtlpMuiRegResizeStringPool.c)
 *     RtlGetImageEnclaveConfig @ 0x18014EFF4 (RtlGetImageEnclaveConfig.c)
 *     RtlpHpStackTraceEventWriter @ 0x18014F980 (RtlpHpStackTraceEventWriter.c)
 *     RtlDecompressFragmentLZNT1 @ 0x180151290 (RtlDecompressFragmentLZNT1.c)
 *     Xp10ScatteredCopy @ 0x180152B6C (Xp10ScatteredCopy.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x180152EC0 (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     inflate @ 0x1801530B0 (inflate.c)
 *     updatewindow @ 0x1801541F8 (updatewindow.c)
 *     deflate_stored @ 0x180155250 (deflate_stored.c)
 *     flush_pending @ 0x1801556B4 (flush_pending.c)
 *     _tr_stored_block @ 0x180156B40 (_tr_stored_block.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 *     RtlCopyVolatileMemory @ 0x180164580 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x180164590 (RtlMoveVolatileMemory.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x18016E008 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18016E884 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
