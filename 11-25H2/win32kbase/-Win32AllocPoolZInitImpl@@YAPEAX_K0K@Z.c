/*
 * XREFs of ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C
 * Callers:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400240C4 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140048E6C (DirectComposition--Memory--AllocateAndClear.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x140068758 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x14007A488 (RIMSendLatencyMgtDeviceRequest.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x14007E668 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x14007EA58 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     PostUpdateKeyStateEvent @ 0x1400943F0 (PostUpdateKeyStateEvent.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x14009DBA8 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x14009E2CC (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14009EAA8 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     InitScancodeMap @ 0x1400AB2C0 (InitScancodeMap.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400AF980 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400B00B4 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1400B11D8 (RIMGetMouseDeviceHardwareId.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400B1E90 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400B2D30 (ReadPointerDeviceCfgDWORDSetting.c)
 *     rimProcessInput @ 0x1400BE050 (rimProcessInput.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C711C (EtwInitializeAsyncKeyMonitor.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CC030 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CC1C0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CC3D0 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CC828 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1400CE0A4 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x1400CEC24 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     CreateProp @ 0x1400DE2CC (CreateProp.c)
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1400E4408 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4820 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1400F5128 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D514 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14010E674 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     Win32AllocPoolNonPagedZInit @ 0x140113150 (Win32AllocPoolNonPagedZInit.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1401184C4 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011D058 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 *     GetWindowsDirectoryDevicePath @ 0x14011D32C (GetWindowsDirectoryDevicePath.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011D4A4 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     HMInitializeSecurityDescriptor @ 0x140126874 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140126F78 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140127118 (HMAllocateObjectSecurity.c)
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140127B28 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     UserPostNKAPCBuffer @ 0x140128DE0 (UserPostNKAPCBuffer.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMGetDeviceParent @ 0x14012AB40 (RIMGetDeviceParent.c)
 *     RIMRetrieveLinkCollection @ 0x14012D368 (RIMRetrieveLinkCollection.c)
 *     RIMCacheAxisChildIndex @ 0x14012D6C0 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x14012D940 (RIMGetPropertyCount.c)
 *     RIMSetDeviceIdleTimeout @ 0x14012E2EC (RIMSetDeviceIdleTimeout.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1401323A4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1401329F0 (-CitpStart@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x140132BB0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x140134AB8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140135068 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x140135590 (-UserCaptureSid@@YAJPEAXDPEAPEAX@Z.c)
 *     CreateKernelEvent @ 0x140135730 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x14013AA50 (CreateKernelSemaphore.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x14013BA20 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     RIMAssignTouchType @ 0x14013F638 (RIMAssignTouchType.c)
 *     RIMGetProductString @ 0x14013FD8C (RIMGetProductString.c)
 *     RIMGetKbdExId @ 0x140141078 (RIMGetKbdExId.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x140144064 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1401448FC (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140144994 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     UserPostNKAPC @ 0x140148780 (UserPostNKAPC.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x14014A5E0 (-Initialize@CInputGlobals@@SAJXZ.c)
 *     RIMCheckPressureDefaultSetting @ 0x14014BEC8 (RIMCheckPressureDefaultSetting.c)
 *     RIMIsDeviceExcluded @ 0x140151270 (RIMIsDeviceExcluded.c)
 *     CHidInput_CreateInstance @ 0x140153190 (CHidInput_CreateInstance.c)
 *     ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x140153D70 (-Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x140157444 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14015799C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140159F74 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015B2BC (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x14015D360 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x14015DB74 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMAllocKernelMem @ 0x14015FB20 (RIMAllocKernelMem.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1401601C0 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017D7A8 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     NtRIMDeviceIoControl @ 0x14017E770 (NtRIMDeviceIoControl.c)
 *     RIMOnDisplayStateChange @ 0x14017F184 (RIMOnDisplayStateChange.c)
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140182330 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x140182BD0 (rimStoreRawDataBlock.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140185D90 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Initialize@CDesktopInputSink@@SAJXZ @ 0x14018C3F8 (-Initialize@CDesktopInputSink@@SAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14018C774 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192E00 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192EE8 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     CMouseSensor_CreateInstance @ 0x14019AFA0 (CMouseSensor_CreateInstance.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019CD14 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     SendShellClipChanged @ 0x14019D470 (SendShellClipChanged.c)
 *     CreatePTPEngine @ 0x14019EB10 (CreatePTPEngine.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14019F620 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019F800 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     UserRtlAllocMem @ 0x1401A19B0 (UserRtlAllocMem.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1401A2690 (RIMIDEAllocateInjectedInfo.c)
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A7DC0 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401A86B8 (-Initialize@QualityOfService@@YAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401AA39C (-Initialize@LastWokenThread@@YAJXZ.c)
 *     CreateKernelTimer @ 0x1401AA760 (CreateKernelTimer.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401AAE70 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     Win32JobObject::_anonymous_namespace_::AllocateW32Job @ 0x1401ACB44 (Win32JobObject--_anonymous_namespace_--AllocateW32Job.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z @ 0x1401AD160 (-GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AEB58 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x1401B5A80 (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 *     UserGetLoadedImageInformation @ 0x1401B6DF0 (UserGetLoadedImageInformation.c)
 *     NtUserGetInputContainerId @ 0x1401BD5F0 (NtUserGetInputContainerId.c)
 *     UserCreateBaseWindowHandle @ 0x1401C18D0 (UserCreateBaseWindowHandle.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     NtRIMQueryDevicePath @ 0x1401D8210 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1401DD750 (RIMCreatePointerDeviceDeadzone.c)
 *     rimUserMemAllocNodeAlloc @ 0x1401DE1A0 (rimUserMemAllocNodeAlloc.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMGetButtonsSupported @ 0x1401E0990 (RIMGetButtonsSupported.c)
 *     RIMHidGetCaps @ 0x1401E0AB8 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     rimSetupPalmTelemetry @ 0x1401E1FF8 (rimSetupPalmTelemetry.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401E2194 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMAssignPreparsedData @ 0x1401E2448 (RIMAssignPreparsedData.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1401E37E0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetDeviceButtons @ 0x1401E3DF8 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1401E4200 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401E493C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E534C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1401E75F4 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401EA4A4 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401EB4C0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401EB7DC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EDAE8 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1401EE298 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EF51C (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 *     rimFindOtherQueuedFrames @ 0x1401F0EC0 (rimFindOtherQueuedFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1401F4338 (rimObsPushInputMessage.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F5464 (RIMCmAllocPointerDeviceContacts.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     _lambda_6b46e4e4378c66c584bfdf6fd4343c38_::operator() @ 0x1401F9E80 (_lambda_6b46e4e4378c66c584bfdf6fd4343c38_--operator().c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1401FA804 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1401FA87C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1401FB9F0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401FC964 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140202498 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020E848 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x14020FFB0 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x140210700 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140213C60 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     CKeyboardSensor_CreateInstance @ 0x140214480 (CKeyboardSensor_CreateInstance.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1402146D0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140214944 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1402198A4 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x14021D288 (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x14021D454 (-FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PE.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x14021D55C (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021EBBC (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FD10 (-CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@.c)
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FD80 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FE40 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 *     ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x140222F18 (-AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140223608 (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x1402236EC (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140223A98 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1402347D0 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x140241168 (-InitializeInputGlobals@@YAJXZ.c)
 *     InitializePowerRequestList @ 0x1402EACAC (InitializePowerRequestList.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall Win32AllocPoolZInitImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v10; // rax
  _DWORD *v11; // rax
  unsigned __int64 i; // r14
  char v13; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = W32GetUserSessionState(a1, a2) + 72032;
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4, (unsigned int)v3);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    return Pool2;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v6 + 80)) != (_DWORD)v3 )
        goto LABEL_2;
      v11 = (_DWORD *)(v6 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          goto LABEL_2;
        if ( *v11 == (_DWORD)v3 )
          break;
        ++v11;
      }
      v13 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v13 = 1;
        v4 += 16LL;
      }
      Pool2 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v6,
          v3)
    || v4 + 16 < v4 )
  {
    return 0LL;
  }
  v10 = (unsigned __int64 *)ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, (unsigned int)v3);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
        *v10 = v3,
        Pool2 = (__int64)(v10 + 2),
        v10 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
      v3);
  }
  return Pool2;
}
