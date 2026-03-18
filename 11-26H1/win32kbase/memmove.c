/*
 * XREFs of memmove @ 0x14024C2C0
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1400087E8 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x140008EE0 (NtGdiGetCertificateByHandle.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1400097E4 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x14000A570 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x14000A5C8 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     CreateNewEventEntry @ 0x14000AA9C (CreateNewEventEntry.c)
 *     DrvGetDisplayDriverNames @ 0x14000DD90 (DrvGetDisplayDriverNames.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x14000DEAC (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x14000EE98 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     InsertModecapList @ 0x14002BB04 (InsertModecapList.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14002BC50 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14002CC70 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400347AC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1400384E0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1400475D0 (RIMAllocateAsyncInputWorkItem.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     CreateProp @ 0x14004A490 (CreateProp.c)
 *     RIMIDE_InjectGenericHidInput @ 0x14005FCEC (RIMIDE_InjectGenericHidInput.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x140063F90 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x14007E854 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__-.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x14007EB18 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x14008B838 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x14008F15C (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimProcessInput @ 0x1400A09DC (rimProcessInput.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A603C (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A7BD8 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A7C7C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1400A9AE0 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1400A9CBC (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400AC248 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x1400AEB78 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF920 (-EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400B3250 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtDCompositionGetDeletedResources @ 0x1400B4200 (NtDCompositionGetDeletedResources.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1400B4AC4 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z @ 0x1400C07F0 (-bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400D89CC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1400D9A70 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     FastGetProfileIntsW @ 0x1400DF910 (FastGetProfileIntsW.c)
 *     FastGetProfileIntFromID @ 0x1400E12A0 (FastGetProfileIntFromID.c)
 *     FastGetProfileValue @ 0x1400E13A0 (FastGetProfileValue.c)
 *     FastGetProfileStringFromIDW @ 0x1400E1630 (FastGetProfileStringFromIDW.c)
 *     CheckDesktopPolicy @ 0x1400E1950 (CheckDesktopPolicy.c)
 *     FastWriteProfileValue @ 0x1400E2410 (FastWriteProfileValue.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400E2678 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 *     InitScancodeMap @ 0x1400E2C80 (InitScancodeMap.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400FD2C0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1400FE344 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x140117CF0 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?bClone@PATH_CORE@@QEAA_NAEBV1@@Z @ 0x14011AE60 (-bClone@PATH_CORE@@QEAA_NAEBV1@@Z.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14011E338 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14012223C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1401222E4 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140125E44 (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DeleteResource@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x140129710 (-DeleteResource@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012A60C (-EmitApplicationIdCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     SetHandleFlag @ 0x14012A7E0 (SetHandleFlag.c)
 *     DCompositionNotifyPendingPresent @ 0x14012DDD0 (DCompositionNotifyPendingPresent.c)
 *     RIMGetProductString @ 0x14012FEDC (RIMGetProductString.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140136FB8 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     RtlLoadStringOrError @ 0x14013AC70 (RtlLoadStringOrError.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1401419D0 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x140141AC8 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x140143C8C (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     DirectComposition::CMarshaledArrayBase::MarshalCore__lambda_b5451ba13eab05db4105a6a05ac84279___ @ 0x1401455A4 (DirectComposition--CMarshaledArrayBase--MarshalCore__lambda_b5451ba13eab05db4105a6a05ac84279___.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140145A50 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140145CB8 (-EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140145D40 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146BAC (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014B1B8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x14014CD78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x14014D0F4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x140152BDC (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x140153058 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     UserPostNKAPCBuffer @ 0x14015EA80 (UserPostNKAPCBuffer.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140161F20 (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140165CA4 (-Grow@-$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     UserReAllocPoolWithQuota @ 0x140166FE0 (UserReAllocPoolWithQuota.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x14016BA00 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x14017D590 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14017DA88 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14017E280 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x14017E620 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1401880EC (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x14018B3EC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__-D.c)
 *     ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x14018D850 (-UserCaptureSid@@YAJPEAXDPEAPEAX@Z.c)
 *     HMCleanupGrantedHandle @ 0x14018D960 (HMCleanupGrantedHandle.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401917F0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 *     ?InitializeCursorGlobals@@YAJXZ @ 0x140193790 (-InitializeCursorGlobals@@YAJXZ.c)
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140194370 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1401960C0 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401963D0 (-SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x14019AE50 (RIMInjectInput.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x14019BD20 (NtGdiConfigureOPMProtectedOutput.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401A4A00 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1401A50F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1401A5F48 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 *     RIMAssignPreparsedData @ 0x1401B88FC (RIMAssignPreparsedData.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__&DrvSampleDisplayState_ @ 0x1401B8E54 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_6___lambda_7dc7c0424fbefd701d9ba3d1e39eb072__-D.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     SendShellClipChanged @ 0x1401BA170 (SendShellClipChanged.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1401C3AF0 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     FastUpdateWinIni @ 0x1401C6670 (FastUpdateWinIni.c)
 *     memcpy_s @ 0x1401C9268 (memcpy_s.c)
 *     FastGetProfileKeysW @ 0x1401CE190 (FastGetProfileKeysW.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401CE3D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401CF4C4 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     PREALLOCMEM2 @ 0x1401EDDDC (PREALLOCMEM2.c)
 *     ?DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401EF618 (-DeserializeBytes@Deserializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 *     ?Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z @ 0x1401EF848 (-Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401F0744 (-SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401F1680 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1401F4108 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1401F4160 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 *     NtGdiGetCertificate @ 0x1401F4440 (NtGdiGetCertificate.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401F989C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1401FCCC4 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1401FD000 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     rimCopyInstancePathFromRimDev @ 0x1401FE9EC (rimCopyInstancePathFromRimDev.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x14020A60C (-CloneLogicalCollection@@YAHPEAEKPEAKK@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x14020A954 (RIMIDE_InitializePointerDeviceInjection.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x140222344 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x14022B130 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023C1C0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPO.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14023CC1C (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023CE20 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023D660 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x140241FD0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140242770 (-SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1402441F0 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x14024426C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140244310 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x140244570 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140247E50 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 *     ?InitializeInputSettingsGlobals@@YAJXZ @ 0x14024A8A8 (-InitializeInputSettingsGlobals@@YAJXZ.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x14024B008 (-InitializeSensorGlobals@@YAJXZ.c)
 *     ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x14024B83C (-MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x14024BCA0 (RtlMoveVolatileMemory.c)
 *     WppTraceCallback @ 0x1402D24C0 (WppTraceCallback.c)
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
