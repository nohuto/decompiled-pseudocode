/*
 * XREFs of ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x140001FE0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x140002280 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140002E6C (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140014298 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x140015AE0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x140017D30 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     imp_WdfStringGetUnicodeString @ 0x140018210 (imp_WdfStringGetUnicodeString.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140019184 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x14003CC40 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryQueryString @ 0x14003CE90 (imp_WdfRegistryQueryString.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x140041D20 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceGetSystemPowerAction @ 0x140044E90 (imp_WdfDeviceGetSystemPowerAction.c)
 *     imp_WdfIoQueuePurge @ 0x14004DA90 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x14004DB00 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueFindRequest @ 0x1400548B0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfWmiInstanceCreate @ 0x140057970 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfInterruptWdmGetInterrupt @ 0x14005D8A0 (imp_WdfInterruptWdmGetInterrupt.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x140061BA0 (imp_WdfCmResourceListGetDescriptor.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x140063D30 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompleted @ 0x140063DA0 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfWorkItemFlush @ 0x1400668C0 (imp_WdfWorkItemFlush.c)
 *     imp_WdfFdoAddStaticChild @ 0x1400680A0 (imp_WdfFdoAddStaticChild.c)
 *     imp_WdfRequestGetCompletionParams @ 0x1400695D0 (imp_WdfRequestGetCompletionParams.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069750 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfTimerGetParentObject @ 0x14006A3B0 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x14006B030 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfWmiProviderIsEnabled @ 0x14006BBF0 (imp_WdfWmiProviderIsEnabled.c)
 *     imp_WdfWmiInstanceGetProvider @ 0x14006E3B0 (imp_WdfWmiInstanceGetProvider.c)
 *     imp_WdfCollectionGetLastItem @ 0x140070210 (imp_WdfCollectionGetLastItem.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x140070810 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoTargetGetState @ 0x1400708F0 (imp_WdfIoTargetGetState.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x140070C30 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x140070FD0 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDmaTransactionGetBytesTransferred @ 0x1400710B0 (imp_WdfDmaTransactionGetBytesTransferred.c)
 *     imp_WdfDeviceGetDevicePnpState @ 0x140071370 (imp_WdfDeviceGetDevicePnpState.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x1400715C0 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     imp_WdfIoTargetStart @ 0x140071820 (imp_WdfIoTargetStart.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x140071A10 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x140071A50 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfMemoryCopyToBuffer @ 0x140072880 (imp_WdfMemoryCopyToBuffer.c)
 *     imp_WdfWmiInstanceFireEvent @ 0x140073240 (imp_WdfWmiInstanceFireEvent.c)
 *     imp_WdfDriverWdmGetDriverObject @ 0x140073A00 (imp_WdfDriverWdmGetDriverObject.c)
 *     imp_WdfIoQueueReadyNotify @ 0x140073A40 (imp_WdfIoQueueReadyNotify.c)
 *     imp_WdfDeviceGetDriver @ 0x140073E30 (imp_WdfDeviceGetDriver.c)
 *     imp_WdfDeviceGetSelfIoTarget @ 0x140075080 (imp_WdfDeviceGetSelfIoTarget.c)
 *     imp_WdfWmiInstanceGetDevice @ 0x1400794B0 (imp_WdfWmiInstanceGetDevice.c)
 *     imp_WdfDeviceSetStaticStopRemove @ 0x140079B80 (imp_WdfDeviceSetStaticStopRemove.c)
 *     imp_WdfUsbInterfaceGetNumConfiguredPipes @ 0x14007AA40 (imp_WdfUsbInterfaceGetNumConfiguredPipes.c)
 *     imp_WdfUsbTargetPipeIsInEndpoint @ 0x14007D5D0 (imp_WdfUsbTargetPipeIsInEndpoint.c)
 *     imp_WdfWmiInstanceRegister @ 0x14007E670 (imp_WdfWmiInstanceRegister.c)
 *     imp_WdfDeviceGetDevicePowerState @ 0x140080B70 (imp_WdfDeviceGetDevicePowerState.c)
 *     imp_WdfRegistryWdmGetHandle @ 0x140080BB0 (imp_WdfRegistryWdmGetHandle.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x140081070 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDmaTransactionGetDevice @ 0x140086E30 (imp_WdfDmaTransactionGetDevice.c)
 *     imp_WdfDmaTransactionGetRequest @ 0x140086E80 (imp_WdfDmaTransactionGetRequest.c)
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086F40 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfDmaTransactionSetMaximumLength @ 0x140087340 (imp_WdfDmaTransactionSetMaximumLength.c)
 *     imp_WdfDpcWdmGetDpc @ 0x14008B3C0 (imp_WdfDpcWdmGetDpc.c)
 *     imp_WdfWmiInstanceDeregister @ 0x14008DA20 (imp_WdfWmiInstanceDeregister.c)
 *     imp_WdfWmiProviderCreate @ 0x14008DA70 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfWmiProviderGetDevice @ 0x14008DBA0 (imp_WdfWmiProviderGetDevice.c)
 *     imp_WdfWmiProviderGetTracingHandle @ 0x14008DBF0 (imp_WdfWmiProviderGetTracingHandle.c)
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F9AC (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FF24 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x140090004 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x140091D00 (imp_WdfDeviceConfigureRequestDispatching.c)
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x140091EA0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 *     imp_WdfDeviceGetAlignmentRequirement @ 0x140092030 (imp_WdfDeviceGetAlignmentRequirement.c)
 *     imp_WdfDeviceGetCharacteristics @ 0x140092080 (imp_WdfDeviceGetCharacteristics.c)
 *     imp_WdfDeviceGetDevicePowerPolicyState @ 0x1400920C0 (imp_WdfDeviceGetDevicePowerPolicyState.c)
 *     imp_WdfDeviceSetAlignmentRequirement @ 0x1400923B0 (imp_WdfDeviceSetAlignmentRequirement.c)
 *     imp_WdfDeviceSetCharacteristics @ 0x140092400 (imp_WdfDeviceSetCharacteristics.c)
 *     imp_WdfFileObjectGetFlags @ 0x140092710 (imp_WdfFileObjectGetFlags.c)
 *     imp_WdfFileObjectGetInitiatorProcessId @ 0x140092760 (imp_WdfFileObjectGetInitiatorProcessId.c)
 *     imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x140092870 (imp_WdfDeviceAddRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400928D0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1400929E0 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     imp_WdfDeviceRetrieveCompanionTarget @ 0x140092A60 (imp_WdfDeviceRetrieveCompanionTarget.c)
 *     imp_WdfDeviceSetBusInformationForChildren @ 0x140092AE0 (imp_WdfDeviceSetBusInformationForChildren.c)
 *     imp_WdfRequestChangeTarget @ 0x140093040 (imp_WdfRequestChangeTarget.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x140094000 (imp_WdfDriverRetrieveVersionString.c)
 *     imp_WdfDriverMiniportUnload @ 0x140094720 (imp_WdfDriverMiniportUnload.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094770 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfObjectQuery @ 0x140096300 (imp_WdfObjectQuery.c)
 *     FxCmResourceListInsertDescriptor @ 0x140098BAC (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x140098E04 (FxIoResourceRequirementsListInsertIoResList.c)
 *     imp_WdfCmResourceListGetCount @ 0x140098EF0 (imp_WdfCmResourceListGetCount.c)
 *     imp_WdfIoResourceListGetCount @ 0x1400992B0 (imp_WdfIoResourceListGetCount.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x140099310 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetCount @ 0x140099710 (imp_WdfIoResourceRequirementsListGetCount.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x140099770 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400998D0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     imp_WdfIoResourceRequirementsListSetInterfaceType @ 0x140099A00 (imp_WdfIoResourceRequirementsListSetInterfaceType.c)
 *     imp_WdfIoResourceRequirementsListSetSlotNumber @ 0x140099A60 (imp_WdfIoResourceRequirementsListSetSlotNumber.c)
 *     imp_WdfRegistryAssignMemory @ 0x140099CB0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x140099E90 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x14009BAA0 (imp_WdfIoTargetSelfAssignDefaultIoQueue.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C9E0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009CAF0 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeIsOutEndpoint @ 0x14009CBF0 (imp_WdfUsbTargetPipeIsOutEndpoint.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009CED0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     imp_WdfUsbInterfaceGetNumEndpoints @ 0x14009D0B0 (imp_WdfUsbInterfaceGetNumEndpoints.c)
 *     imp_WdfUsbInterfaceGetNumSettings @ 0x14009D120 (imp_WdfUsbInterfaceGetNumSettings.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D850 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x14009E0E0 (imp_WdfUsbTargetDeviceWdmGetConfigurationHandle.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1400A0864 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     imp_WdfIoQueueDrain @ 0x1400A10C0 (imp_WdfIoQueueDrain.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A2360 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaEnablerGetMaximumLength @ 0x1400A27F0 (imp_WdfDmaEnablerGetMaximumLength.c)
 *     imp_WdfDmaEnablerGetMaximumScatterGatherElements @ 0x1400A2830 (imp_WdfDmaEnablerGetMaximumScatterGatherElements.c)
 *     imp_WdfCommonBufferGetLength @ 0x1400A2940 (imp_WdfCommonBufferGetLength.c)
 *     imp_WdfInterruptCreate @ 0x1400A2980 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptDisable @ 0x1400A2D50 (imp_WdfInterruptDisable.c)
 *     imp_WdfInterruptEnable @ 0x1400A2DA0 (imp_WdfInterruptEnable.c)
 *     imp_WdfInterruptTryToAcquireLock @ 0x1400A3090 (imp_WdfInterruptTryToAcquireLock.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400AA32C (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1400E00A0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1400E01F0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1400E0340 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1400E15A0 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1400E1700 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1400E1860 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1400E4100 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E42C0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E44A0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E4680 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1400E49D0 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxObjectHandleGetPtr(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject)
{
  unsigned __int64 level; // rsi
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *v12; // [rsp+20h] [rbp-48h]
  void **v13; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]

  level = Type;
  if ( !Handle )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, Type);
  LOWORD(v6) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v6);
  }
  if ( *((_WORD *)flags + 4) == Type )
  {
    *PPObject = flags;
  }
  else
  {
    v15 = v6;
    *PPObject = 0LL;
    v16 = 0;
    v8 = *flags;
    v13 = PPObject;
    v14 = Type;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, void ***))v8->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v13) < 0 )
    {
      WPP_IFR_SF_qDqD(flags[2], v9, v10, v11, v12, (const void *)Handle, level, flags, *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Handle, level);
    }
  }
}
