/*
 * XREFs of ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140045C9C (DirectComposition--Memory--AllocateAndClear.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1400475D0 (RIMAllocateAsyncInputWorkItem.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     CreateProp @ 0x14004A490 (CreateProp.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x14004C4E4 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x14004D2F8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     RIMExtractPointerPropertyValues @ 0x140051E10 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x140052230 (RIMGetPointerDeviceProperties.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400585D4 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     CreateKernelSemaphore @ 0x14005D890 (CreateKernelSemaphore.c)
 *     RIMCheckPressureDefaultSetting @ 0x14005DBA8 (RIMCheckPressureDefaultSetting.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x140063F90 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x14006408C (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     rimStorePointersInHoldingFrame @ 0x140073934 (rimStorePointersInHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMHidGetCaps @ 0x140079BD4 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x140079FB0 (RIMHidGetPreparsedData.c)
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x14008D1D8 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x14008D4C4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RIMGetKbdExId @ 0x140092D94 (RIMGetKbdExId.c)
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1400A5F4C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400AE3A8 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1400DC394 (-EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJE.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE9D8 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     InitScancodeMap @ 0x1400E2C80 (InitScancodeMap.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1400E8E5C (EtwInitializeAsyncKeyMonitor.c)
 *     RIMSyncWalkRimObjList @ 0x1400E9B8C (RIMSyncWalkRimObjList.c)
 *     RIMSetDeviceIdleTimeout @ 0x1400EB4DC (RIMSetDeviceIdleTimeout.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1400EBFFC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400EC374 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400ECB48 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     RIMGetDeviceParent @ 0x1400EE228 (RIMGetDeviceParent.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400EF4D8 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400F0690 (ReadPointerDeviceCfgDWORDSetting.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400F2658 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1400F92B0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     HMInitializeSecurityDescriptor @ 0x140107F60 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140108974 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140108B14 (HMAllocateObjectSecurity.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x140110774 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x140110AA4 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x140110B64 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B724 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 *     GetWindowsDirectoryDevicePath @ 0x14011B9E0 (GetWindowsDirectoryDevicePath.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011BB5C (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x14011C7C0 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x14011CCC0 (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14011DBC0 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14011E338 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14011F43C (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14011F598 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x14012E834 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMGetProductString @ 0x14012FEDC (RIMGetProductString.c)
 *     RIMIsDeviceExcluded @ 0x140130454 (RIMIsDeviceExcluded.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x140131A10 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x140141AC8 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x140147B44 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x14014CD78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x14014D0F4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140154200 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     Win32AllocPoolNonPagedZInit @ 0x140154680 (Win32AllocPoolNonPagedZInit.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x140156D00 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140159478 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     UserPostNKAPCBuffer @ 0x14015EA80 (UserPostNKAPCBuffer.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x140165BB8 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1401692DC (RIMRetrieveLinkCollection.c)
 *     RIMCacheAxisChildIndex @ 0x140169638 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1401698B8 (RIMGetPropertyCount.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 *     ?CitpStart@@YAJXZ @ 0x14016B80C (-CitpStart@@YAJXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x14016BA00 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14016E4A8 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     RIMGetMouseDeviceHardwareId @ 0x14016ECEC (RIMGetMouseDeviceHardwareId.c)
 *     RIMAssignTouchType @ 0x1401701F0 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401706F8 (RIMRetrieveAllLinkIndexUsages.c)
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x140172FE0 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140173804 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A340 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x14017E1D4 (-Add@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@Q.c)
 *     RIMInitializeDeadzone @ 0x14017F380 (RIMInitializeDeadzone.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14017F694 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14017FDA4 (-Initialize@CInputConfig@@SAJXZ.c)
 *     UserPostNKAPC @ 0x140184F40 (UserPostNKAPC.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x140188810 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     ?Initialize@CTouchProcessor@@SAJXZ @ 0x14018A808 (-Initialize@CTouchProcessor@@SAJXZ.c)
 *     ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x14018D850 (-UserCaptureSid@@YAJPEAXDPEAPEAX@Z.c)
 *     ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x14018FAE0 (-Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z.c)
 *     CHidInput_CreateInstance @ 0x140190FC0 (CHidInput_CreateInstance.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140191774 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x140191A3C (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140192A90 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x140194F4C (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140198F38 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     RIMAllocKernelMem @ 0x1401990E0 (RIMAllocKernelMem.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14019B430 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x14019C870 (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1401A06B8 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1401A0814 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     NtRIMDeviceIoControl @ 0x1401AE6F0 (NtRIMDeviceIoControl.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     RIMGetButtonsSupported @ 0x1401AF1FC (RIMGetButtonsSupported.c)
 *     CMouseSensor_CreateInstance @ 0x1401B3630 (CMouseSensor_CreateInstance.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1401B7AF8 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     RIMAssignPreparsedData @ 0x1401B88FC (RIMAssignPreparsedData.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x1401B8AE4 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     SendShellClipChanged @ 0x1401BA170 (SendShellClipChanged.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1401BB2D0 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1401C07F0 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     UserRtlAllocMem @ 0x1401C5810 (UserRtlAllocMem.c)
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401CBC20 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401CC4F0 (-Initialize@QualityOfService@@YAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401CD438 (-Initialize@LastWokenThread@@YAJXZ.c)
 *     CreateKernelTimer @ 0x1401CD620 (CreateKernelTimer.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401CDC30 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401CF1BC (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401D0BF8 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     UserGetLoadedImageInformation @ 0x1401D9CF0 (UserGetLoadedImageInformation.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 *     UserCreateBaseWindowHandle @ 0x1401EA460 (UserCreateBaseWindowHandle.c)
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsStorage@@@Z @ 0x1401F3CB4 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsSto.c)
 *     NtRIMQueryDevicePath @ 0x1401FF2E0 (NtRIMQueryDevicePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x140203450 (RIMCreatePointerDeviceDeadzone.c)
 *     rimUserMemAllocNodeAlloc @ 0x140203E80 (rimUserMemAllocNodeAlloc.c)
 *     RIMConfigureDeviceFeedback @ 0x140203F80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     rimSetupPalmTelemetry @ 0x140204AFC (rimSetupPalmTelemetry.c)
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x140205D48 (RIMReadDigitizerToMonitorMappings.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1402063B8 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x14020653C (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x14020958C (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x140209F58 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x14020A270 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x14020C184 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x14020C910 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x14020FDC0 (rimObsPushInputMessage.c)
 *     _lambda_a7e2b28c88866e40752e8add3669f9ed_::operator() @ 0x140213588 (_lambda_a7e2b28c88866e40752e8add3669f9ed_--operator().c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x140218500 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140219CA0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x14021A330 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14021B070 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x14021E300 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x140220C4C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x140220E68 (-FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PE.c)
 *     ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x140220F74 (-MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA-AUReportDescriptor@1@AEBUtagRECT@@0@Z.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x140222344 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x140223180 (-CreateInputMessage@CButtonEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@.c)
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1402231F0 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x1402232B0 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 *     ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x140225084 (-AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140225524 (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140225698 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225744 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225880 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x14023D570 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 *     InitializePowerRequestList @ 0x1402F51D0 (InitializePowerRequestList.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall Win32AllocPoolZInitImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 *Pool2; // rax
  char v11; // r15
  __int64 v12; // rsi
  _DWORD *v13; // rax
  unsigned __int64 i; // r12
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v7 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 )
  {
    if ( v7 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v6,
             v3)
        && v4 + 16 >= v4 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, (unsigned int)v3);
        v8 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
              *Pool2 = v3,
              v8 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
            (const void *)v3);
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      if ( v7 != 2 )
        return 0LL;
      if ( ((unsigned int)v3 & *(_DWORD *)(v6 + 80)) != (_DWORD)v3 )
      {
LABEL_14:
        v8 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4, (unsigned int)v3);
        if ( !v8 )
          return v8;
        goto LABEL_3;
      }
      v13 = (_DWORD *)(v6 + 48);
      v8 = 0LL;
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          goto LABEL_14;
        if ( *v13 == (_DWORD)v3 )
          break;
        ++v13;
      }
      v11 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v11 = 1;
        v4 += 16LL;
      }
      v12 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4, (unsigned int)v3);
      if ( v12 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(v12 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  v12,
                                  i,
                                  BackTrace) )
            return v12 + 16;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     v12,
                                     i,
                                     BackTrace) )
        {
          return v12;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v12);
      }
    }
  }
  else
  {
    v8 = ExAllocatePool2(a1 & 0xFFFFFFFFFFFFFFFDuLL, v4, (unsigned int)v3);
    if ( v8 )
LABEL_3:
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
  }
  return v8;
}
