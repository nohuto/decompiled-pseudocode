/*
 * XREFs of memmove @ 0x180164700
 * Callers:
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800022C0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180003FC0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180006140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpComputeLangListCheckSum @ 0x180009010 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToChar @ 0x18000A080 (RtlIntegerToChar.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18000B81C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000BB60 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18000CFC4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     RtlpHeapTrkTrackStack @ 0x180010860 (RtlpHeapTrkTrackStack.c)
 *     EtwpTraceUmEvent @ 0x180010AD0 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x180010E20 (EtwpRelogEvent.c)
 *     RtlpHeapTrkReportResult @ 0x180013F2C (RtlpHeapTrkReportResult.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x180032AC0 (_GetOverlayPackageKeyForLanguage.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800331CC (_GetOverlayPackageTypeFromKey.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800335D0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180035310 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     RtlQueryAtomInAtomTable @ 0x180037300 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     SymCryptHashAppendInternal @ 0x18003898C (SymCryptHashAppendInternal.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18003C6F0 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x18003CAD0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x18003CC00 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 *     TppPrepareDirectParams @ 0x1800406D0 (TppPrepareDirectParams.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180042600 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x1800437A0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrGetDllFullName @ 0x180052C20 (LdrGetDllFullName.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     EtwpTrackBinaryForSession @ 0x180055550 (EtwpTrackBinaryForSession.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddBinaryInfoEvents @ 0x180056860 (EtwpAddBinaryInfoEvents.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180057510 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpEventApiCallback @ 0x180058350 (EtwpEventApiCallback.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x18005A26C (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x18005A930 (RtlpQueryRegistryDirect.c)
 *     RtlpCreateServerAcl @ 0x18005AFEC (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x18005BB50 (RtlpNormalizeAcl.c)
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpCombineAcls @ 0x18005DEB0 (RtlpCombineAcls.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1800603B0 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x180060A00 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180060EA0 (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x180061840 (RtlpCopyAces.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800622B0 (RtlConvertDeviceFamilyInfoToString.c)
 *     GetImageTuple @ 0x18006DF50 (GetImageTuple.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18006F974 (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlCopyUnicodeString @ 0x180075F50 (RtlCopyUnicodeString.c)
 *     EtwpWriteBufferCompressed @ 0x1800787C8 (EtwpWriteBufferCompressed.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180078D68 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18007C648 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18007E120 (RtlpExtendFrontEndUsageArray.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800820D0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     ReportExceptionInternal @ 0x180088674 (ReportExceptionInternal.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlSparseArrayElementAllocate @ 0x18008B350 (RtlSparseArrayElementAllocate.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800902A0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800917B0 (RtlQueryProcessBackTraceInformation.c)
 *     LdrpAcquireTlsIndex @ 0x180093AEC (LdrpAcquireTlsIndex.c)
 *     LdrpResolvePatchDllName @ 0x18009918C (LdrpResolvePatchDllName.c)
 *     sxsisol_RespectDotLocal @ 0x180099B50 (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180099CD0 (RtlComputePrivatizedDllName_U.c)
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18009A610 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18009AD18 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpScanEnvironment @ 0x18009DA10 (RtlpScanEnvironment.c)
 *     RtlpQueryEnvironmentHashTable @ 0x18009E110 (RtlpQueryEnvironmentHashTable.c)
 *     RtlSetEnvironmentVar @ 0x18009E600 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x18009F070 (RtlCreateEnvironmentEx.c)
 *     RtlCreateProcessParametersInternal @ 0x18009F3E0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18009F924 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x1800A0498 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentStrings @ 0x1800A06D0 (RtlSetEnvironmentStrings.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A23B0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800A3374 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlDosSearchPath_U @ 0x1800A4640 (RtlDosSearchPath_U.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A48D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A5040 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A7060 (RtlNtPathNameToDosPathName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     RtlIpv6AddressToStringExW @ 0x1800ABA50 (RtlIpv6AddressToStringExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     RtlIpv6StringToAddressW @ 0x1800ACDF0 (RtlIpv6StringToAddressW.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800AD200 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AE5B0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpHpSegReAlloc @ 0x1800B1A2C (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     PsspDumpThread @ 0x1800B3AE8 (PsspDumpThread.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B6964 (PsspCaptureVaSpaceInformation2.c)
 *     RtlInsertElementGenericTable @ 0x1800B7BB0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B7D10 (RtlInsertElementGenericTableFull.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlFormatMessageEx @ 0x1800BBE30 (RtlFormatMessageEx.c)
 *     EtwpTraceUmMessage @ 0x1800BD9EC (EtwpTraceUmMessage.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800BE180 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1800BE2C0 (RtlInsertElementGenericTableAvl.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800BEC08 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpCopyXStateChunk @ 0x1800C3E28 (RtlpCopyXStateChunk.c)
 *     RtlpPushPageDescriptor @ 0x1800C47F4 (RtlpPushPageDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1800C8110 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x1800C8340 (RtlMakeSelfRelativeSD.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     LdrpProtectedCopyMemory @ 0x1800C9F20 (LdrpProtectedCopyMemory.c)
 *     CsrCaptureMessageBuffer @ 0x1800CA460 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x1800CA6BC (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x1800CA8B0 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x1800CAD04 (CsrpConnectToServer.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800CC320 (RtlAddAccessAllowedAceEx.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CE290 (LdrpLogFatalLdrEtwEvent.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CE610 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D1A80 (LdrpAllocatePlaceHolder.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800D5700 (RtlQueryActivationContextApplicationSettings.c)
 *     LdrpRecordUnloadEvent @ 0x1800D65A0 (LdrpRecordUnloadEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D7090 (LdrpLogNewDllLoadInternal.c)
 *     RtlpHpExtrasMove @ 0x1800D7560 (RtlpHpExtrasMove.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x1800D9610 (RtlpMergeSecurityAttributeInformation.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800DB758 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800DBE78 (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlIpv4AddressToStringExW @ 0x1800DCEB0 (RtlIpv4AddressToStringExW.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800DDFB0 (RtlpMuiRegLoadLicInformation.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DE744 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800DED30 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlDuplicateUnicodeString @ 0x1800DF440 (RtlDuplicateUnicodeString.c)
 *     QueryRegistryValue @ 0x1800DF5EC (QueryRegistryValue.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E0500 (LdrUpdatePackageSearchPath.c)
 *     RtlIpv6StringToAddressA @ 0x1800E26E0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E2FB0 (RtlIpv6AddressToStringExA.c)
 *     RtlCreateBoundaryDescriptor @ 0x1800E35A0 (RtlCreateBoundaryDescriptor.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E4260 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     SaferpIsDllAllowed @ 0x1800E48F4 (SaferpIsDllAllowed.c)
 *     RtlpNtQueryValueKey @ 0x1800E6050 (RtlpNtQueryValueKey.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800E6C70 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E6F88 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E7AD0 (RtlIpv4AddressToStringExA.c)
 *     PsspHandleDumper @ 0x1800E7D80 (PsspHandleDumper.c)
 *     RtlCopySecurityDescriptor @ 0x1800E7FC0 (RtlCopySecurityDescriptor.c)
 *     RtlpNtEnumerateSubKey @ 0x1800E8AD0 (RtlpNtEnumerateSubKey.c)
 *     RtlpInitParameterBlock @ 0x1800E9634 (RtlpInitParameterBlock.c)
 *     RtlpRegisterStackTrace @ 0x1800EC194 (RtlpRegisterStackTrace.c)
 *     EtwpAddEventToBuffer @ 0x1800ECCC4 (EtwpAddEventToBuffer.c)
 *     LZ4HC_compress_generic @ 0x1800ED8A8 (LZ4HC_compress_generic.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800F02D8 (LZ4HC_compress_generic_dictCtx.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800F8DF0 (RtlpCopyMappedMemoryEx.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 *     RtlDecompressBuffer2Xp10 @ 0x1800F9768 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ScatteredReadBytes @ 0x1800FA940 (Xp10ScatteredReadBytes.c)
 *     Xp10BitCopy @ 0x1800FAF48 (Xp10BitCopy.c)
 *     RtlLargeIntegerToChar @ 0x1800FB0F0 (RtlLargeIntegerToChar.c)
 *     LZNT1CompressChunk @ 0x1800FB4EC (LZNT1CompressChunk.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FFE04 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     RtlGenerate8dot3Name @ 0x1801012F0 (RtlGenerate8dot3Name.c)
 *     RtlAddAttributeActionToRXact @ 0x1801025A0 (RtlAddAttributeActionToRXact.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlCopyString @ 0x1801056D0 (RtlCopyString.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     RtlQuerySecurityObject @ 0x180108160 (RtlQuerySecurityObject.c)
 *     RtlpCopyBitMapTailToHead @ 0x1801090A0 (RtlpCopyBitMapTailToHead.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1801092B4 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     LZ4_compress_fast_extState @ 0x180109AE8 (LZ4_compress_fast_extState.c)
 *     RtlpCheckDeviceName @ 0x18010B478 (RtlpCheckDeviceName.c)
 *     fill_window @ 0x18010B76C (fill_window.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlExtractBitMap @ 0x18010D4C0 (RtlExtractBitMap.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010E720 (RtlDecompressBufferLZNT1.c)
 *     RtlSetFeatureConfigurations @ 0x18010EA40 (RtlSetFeatureConfigurations.c)
 *     RtlConnectToSm @ 0x18010F800 (RtlConnectToSm.c)
 *     RtlLargeIntegerToUnicode @ 0x18010F9D8 (RtlLargeIntegerToUnicode.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x180112830 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180113B3C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpAddSystemPath @ 0x180114634 (RtlpAddSystemPath.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1801147C4 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801157E0 (RtlpHpTagQueryHeapsRemote.c)
 *     EtwpTrackDebugIdForSession @ 0x180115DD8 (EtwpTrackDebugIdForSession.c)
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpCompleteMapModule @ 0x18011C480 (LdrpCompleteMapModule.c)
 *     RtlDecompressBufferLz4 @ 0x18011DF10 (RtlDecompressBufferLz4.c)
 *     SymCryptSha256Append @ 0x180121194 (SymCryptSha256Append.c)
 *     read_buf @ 0x180121344 (read_buf.c)
 *     RtlpQueryRegistryDirectStringValue @ 0x1801213C8 (RtlpQueryRegistryDirectStringValue.c)
 *     TpSetDefaultPoolCpuSets @ 0x180121A24 (TpSetDefaultPoolCpuSets.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124AB8 (RtlpConvertAclToAutoInherit.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801253C0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125D34 (RtlpAddLanguagesToMultiSZ.c)
 *     EtwTraceEventInstance @ 0x180126110 (EtwTraceEventInstance.c)
 *     wcscpy @ 0x18012D960 (wcscpy.c)
 *     wcsncat @ 0x18012DC10 (wcsncat.c)
 *     wcsncpy @ 0x18012DCC0 (wcsncpy.c)
 *     RaiseException @ 0x180130AC0 (RaiseException.c)
 *     memcpy_s @ 0x180133B50 (memcpy_s.c)
 *     memmove_s @ 0x180133BF0 (memmove_s.c)
 *     ReadString_1 @ 0x180136A00 (ReadString_1.c)
 *     RtlSetProcessDebugInformation @ 0x18013A320 (RtlSetProcessDebugInformation.c)
 *     RtlInitializeNtUserPfn @ 0x18013A740 (RtlInitializeNtUserPfn.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013D120 (RtlNormalizeSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x18013D420 (RtlReplaceSidInSd.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D7FC (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpFilterSacl @ 0x18013DD40 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x18013E170 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E5A0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013EC80 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x180140790 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x180140810 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x180140A00 (RtlCopyBitMap.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x180141D40 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801424F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1801448B0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180144C00 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1801450E0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlCompareExchangePropertyStore @ 0x180145A60 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180145EC0 (RtlRemovePropertyStore.c)
 *     RtlWriteNonVolatileMemory @ 0x180147440 (RtlWriteNonVolatileMemory.c)
 *     __ft_array_insert @ 0x180147E18 (__ft_array_insert.c)
 *     RtlRemoteCall @ 0x180148280 (RtlRemoteCall.c)
 *     RtlQueryFeatureConfigurationBuffer @ 0x180148D10 (RtlQueryFeatureConfigurationBuffer.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A274 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegResizeStringPool @ 0x18014DA6C (RtlpMuiRegResizeStringPool.c)
 *     RtlGetImageEnclaveConfig @ 0x18014F144 (RtlGetImageEnclaveConfig.c)
 *     RtlpHpStackTraceEventWriter @ 0x18014FAD0 (RtlpHpStackTraceEventWriter.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1801513C0 (RtlDecompressFragmentLZNT1.c)
 *     Xp10ScatteredCopy @ 0x180152C9C (Xp10ScatteredCopy.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x180152FF0 (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     inflate @ 0x1801531E0 (inflate.c)
 *     updatewindow @ 0x180154328 (updatewindow.c)
 *     deflate_stored @ 0x180155380 (deflate_stored.c)
 *     flush_pending @ 0x1801557E4 (flush_pending.c)
 *     _tr_stored_block @ 0x180156C70 (_tr_stored_block.c)
 *     LdrpAddRedirectedFunction @ 0x18015DEAC (LdrpAddRedirectedFunction.c)
 *     RtlCopyVolatileMemory @ 0x180164680 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x180164690 (RtlMoveVolatileMemory.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x18016F008 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18016F884 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
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
