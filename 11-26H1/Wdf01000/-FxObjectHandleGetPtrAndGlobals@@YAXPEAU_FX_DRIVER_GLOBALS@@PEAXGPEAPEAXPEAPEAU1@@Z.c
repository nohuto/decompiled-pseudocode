/*
 * XREFs of ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x140001A20 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140001AE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x140001D20 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x140001FE0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002280 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140004800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfRequestCancelSentRequest @ 0x140004E80 (imp_WdfRequestCancelSentRequest.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x140018280 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x1400183B0 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140018550 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDeviceQueryProperty @ 0x140018970 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfTimerCreate @ 0x140018B50 (imp_WdfTimerCreate.c)
 *     imp_WdfIoQueueCreate @ 0x140018EE0 (imp_WdfIoQueueCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x14001B0B0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfObjectCreate @ 0x14001B2C0 (imp_WdfObjectCreate.c)
 *     imp_WdfDpcCreate @ 0x14001C0F0 (imp_WdfDpcCreate.c)
 *     imp_WdfWaitLockCreate @ 0x14001C680 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDmaTransactionCreate @ 0x14001DA30 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfDmaTransactionCancel @ 0x14001E620 (imp_WdfDmaTransactionCancel.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x140022B30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfRequestCreateFromIrp @ 0x140023840 (imp_WdfRequestCreateFromIrp.c)
 *     imp_WdfPdoInitAllocate @ 0x14003C1D0 (imp_WdfPdoInitAllocate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x14003CC40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x14003CD90 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryQueryString @ 0x14003CE90 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryAssignValue @ 0x14003D640 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x14003EAC0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryQueryValue @ 0x14003ECF0 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfRegistryQueryULong @ 0x14003EE10 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x14003F3F0 (imp_WdfDeviceAssignS0IdleSettings.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140041D20 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfCollectionCreate @ 0x14004BFD0 (imp_WdfCollectionCreate.c)
 *     imp_WdfDeviceAssignSxWakeSettings @ 0x14004CF40 (imp_WdfDeviceAssignSxWakeSettings.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x14004D900 (imp_WdfIoQueueStopSynchronously.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x14004DB70 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfRequestRequeue @ 0x14004FC40 (imp_WdfRequestRequeue.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x140053E80 (imp_WdfDeviceQueryPropertyEx.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140054750 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x1400552B0 (imp_WdfChildListUpdateChildDescriptionAsMissing.c)
 *     imp_WdfChildListEndIteration @ 0x1400555A0 (imp_WdfChildListEndIteration.c)
 *     imp_WdfChildListBeginIteration @ 0x1400556D0 (imp_WdfChildListBeginIteration.c)
 *     imp_WdfChildListRetrieveNextDevice @ 0x1400558F0 (imp_WdfChildListRetrieveNextDevice.c)
 *     imp_WdfWmiInstanceCreate @ 0x140057970 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfRequestGetRequestorProcessId @ 0x140058E30 (imp_WdfRequestGetRequestorProcessId.c)
 *     imp_WdfIoTargetQueryForInterface @ 0x140064430 (imp_WdfIoTargetQueryForInterface.c)
 *     imp_WdfFdoQueryForInterface @ 0x1400647B0 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x140065A20 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 *     imp_WdfUsbTargetPipeGetInformation @ 0x140065B50 (imp_WdfUsbTargetPipeGetInformation.c)
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1400681F0 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfChildListRetrievePdo @ 0x140068640 (imp_WdfChildListRetrievePdo.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069750 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfObjectAcquireLock @ 0x14006AD30 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x14006AE00 (imp_WdfObjectReleaseLock.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x14006B680 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x14006D7D0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfFdoGetDefaultChildList @ 0x14006DB00 (imp_WdfFdoGetDefaultChildList.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x14006DFE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfFileObjectGetFileName @ 0x14006E340 (imp_WdfFileObjectGetFileName.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x14006E4A0 (imp_WdfDeviceIndicateWakeStatus.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x14006F010 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x14006F5F0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x14006FC90 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x14006FD60 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 *     imp_WdfInterruptGetInfo @ 0x140070120 (imp_WdfInterruptGetInfo.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x140070810 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x140070CC0 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140070FD0 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfRequestIsFrom32BitProcess @ 0x140071310 (imp_WdfRequestIsFrom32BitProcess.c)
 *     imp_WdfIoTargetStop @ 0x1400713B0 (imp_WdfIoTargetStop.c)
 *     imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x140072DD0 (imp_WdfDmaTransactionSetTransferCompleteCallback.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x140072F60 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1400734C0 (imp_WdfDmaTransactionSetChannelConfigurationCallback.c)
 *     imp_WdfChildListBeginScan @ 0x140073C80 (imp_WdfChildListBeginScan.c)
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1400740D0 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfDmaTransactionSetDeviceAddressOffset @ 0x140074790 (imp_WdfDmaTransactionSetDeviceAddressOffset.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x140075390 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfChildListGetDevice @ 0x140076650 (imp_WdfChildListGetDevice.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1400766F0 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfChildListEndScan @ 0x140077810 (imp_WdfChildListEndScan.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x140078930 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x140078C30 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078F20 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x140079900 (imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079990 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x140079E20 (imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck.c)
 *     imp_WdfDeviceSetPowerCapabilities @ 0x14007AAE0 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfIoTargetPurge @ 0x14007ADF0 (imp_WdfIoTargetPurge.c)
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x14007AFB0 (imp_WdfDmaTransactionStopSystemTransfer.c)
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x14007D270 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 *     imp_WdfDriverGetRegistryPath @ 0x14007D710 (imp_WdfDriverGetRegistryPath.c)
 *     imp_WdfDeviceSetDeviceState @ 0x14007DCF0 (imp_WdfDeviceSetDeviceState.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E240 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDpcCancel @ 0x14007EA10 (imp_WdfDpcCancel.c)
 *     imp_WdfUsbTargetDeviceQueryUsbCapability @ 0x14007EBA0 (imp_WdfUsbTargetDeviceQueryUsbCapability.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6C0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FDA0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140081070 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081770 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfRequestStopAcknowledge @ 0x140082740 (imp_WdfRequestStopAcknowledge.c)
 *     imp_WdfDmaTransactionAllocateResources @ 0x140086B90 (imp_WdfDmaTransactionAllocateResources.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x140086D30 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionGetTransferInfo @ 0x140086EE0 (imp_WdfDmaTransactionGetTransferInfo.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086F40 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x140087280 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x140087390 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1400874A0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     imp_WdfChildListCreate @ 0x14008B4F0 (imp_WdfChildListCreate.c)
 *     imp_WdfChildListRequestChildEject @ 0x14008B6E0 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfChildListRetrieveAddressDescription @ 0x14008B880 (imp_WdfChildListRetrieveAddressDescription.c)
 *     imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x14008BA00 (imp_WdfChildListUpdateAllChildDescriptionsAsPresent.c)
 *     imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x14008EFD0 (imp_WdfCompanionTargetWdmGetCompanionProcess.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x140090200 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfDeviceAssignProperty @ 0x140091BD0 (imp_WdfDeviceAssignProperty.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x140091D00 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091EA0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetDeviceState @ 0x140092100 (imp_WdfDeviceGetDeviceState.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1400921D0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetFailed @ 0x140092450 (imp_WdfDeviceSetFailed.c)
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092540 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 *     imp_WdfDeviceAddDependentUsageDeviceObject @ 0x140092800 (imp_WdfDeviceAddDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x140092960 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfCxVerifierKeBugCheck @ 0x140092C90 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfRequestChangeTarget @ 0x140093040 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfRequestIsReserved @ 0x1400930B0 (imp_WdfRequestIsReserved.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x140093D30 (imp_WdfDriverErrorReportApiMissing.c)
 *     imp_WdfDriverIsVersionAvailable @ 0x140093EF0 (imp_WdfDriverIsVersionAvailable.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140094000 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfControlFinishInitializing @ 0x1400940C0 (imp_WdfControlFinishInitializing.c)
 *     imp_WdfLookasideListCreate @ 0x140094310 (imp_WdfLookasideListCreate.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098CA0 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x140098E04 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListRemove @ 0x140098F80 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x140099030 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x140099180 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoResourceListRemove @ 0x1400993C0 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140099480 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1400995D0 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x140099820 (imp_WdfIoResourceRequirementsListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400998D0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfRegistryAssignMemory @ 0x140099CB0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x140099E90 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x14009A130 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveKey @ 0x14009A2F0 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x14009A390 (imp_WdfRegistryRemoveValue.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x14009BA00 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009BAA0 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009BC20 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfIoTargetQueryTargetProperty @ 0x14009BD90 (imp_WdfIoTargetQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C760 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C9E0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009CAF0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009CC30 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x14009CE70 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009CED0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetDescriptor @ 0x14009CF40 (imp_WdfUsbInterfaceGetDescriptor.c)
 *     imp_WdfUsbInterfaceGetEndpointInformation @ 0x14009CFE0 (imp_WdfUsbInterfaceGetEndpointInformation.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009D560 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceCreate @ 0x14009D710 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x14009D780 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D850 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceGetDeviceDescriptor @ 0x14009DA40 (imp_WdfUsbTargetDeviceGetDeviceDescriptor.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x14009DAC0 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x14009DB90 (imp_WdfUsbTargetDeviceResetPortSynchronously.c)
 *     imp_WdfUsbTargetDeviceRetrieveInformation @ 0x14009DBF0 (imp_WdfUsbTargetDeviceRetrieveInformation.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1400A0F70 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1400A1130 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1400A11A0 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfDmaEnablerConfigureSystemProfile @ 0x1400A2200 (imp_WdfDmaEnablerConfigureSystemProfile.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A2360 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1400A2720 (imp_WdfDmaEnablerGetFragmentLength.c)
 *     imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400A2870 (imp_WdfDmaEnablerSetMaximumScatterGatherElements.c)
 *     imp_WdfInterruptCreate @ 0x1400A2980 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptReportActive @ 0x1400A2DF0 (imp_WdfInterruptReportActive.c)
 *     imp_WdfInterruptReportInactive @ 0x1400A2E40 (imp_WdfInterruptReportInactive.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1400A2E90 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1400A2FC0 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxObjectHandleGetPtrAndGlobals(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject,
        _FX_DRIVER_GLOBALS **ObjectGlobals)
{
  unsigned __int64 level; // rbp
  __int64 v8; // rax
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-48h]
  void **v15; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v16; // [rsp+58h] [rbp-10h]
  __int16 v17; // [rsp+5Ah] [rbp-Eh]
  int v18; // [rsp+5Ch] [rbp-Ch]

  level = Type;
  if ( !Handle )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, Type);
  LOWORD(v8) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v8);
  }
  if ( *((_WORD *)flags + 4) == Type )
  {
    *PPObject = flags;
  }
  else
  {
    v17 = v8;
    *PPObject = 0LL;
    v18 = 0;
    v10 = *flags;
    v15 = PPObject;
    v16 = Type;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, void ***))v10->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v15) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags[2],
        v11,
        v12,
        v13,
        v14,
        (const void *)Handle,
        level,
        flags,
        *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Handle, level);
    }
  }
  *ObjectGlobals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)*PPObject + 2);
}
