/*
 * XREFs of memset @ 0x140059840
 * Callers:
 *     McGenControlCallbackV2 @ 0x140001D30 (McGenControlCallbackV2.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilUsbDevice_CreateSecureObject @ 0x140004680 (XilUsbDevice_CreateSecureObject.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x140005768 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_SendClearStallTransfer @ 0x140006734 (Endpoint_SendClearStallTransfer.c)
 *     XilCoreCommand_Initialize @ 0x140007540 (XilCoreCommand_Initialize.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x14000B150 (RootHub_UcxEvtInterruptTransfer.c)
 *     Control_TransferData_Initialize @ 0x14000DF30 (Control_TransferData_Initialize.c)
 *     Control_WdfEvtIoDefault @ 0x14000E0E0 (Control_WdfEvtIoDefault.c)
 *     Bulk_TransferData_Initialize @ 0x14000EB10 (Bulk_TransferData_Initialize.c)
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Isoch_TransferData_Initialize @ 0x1400126B0 (Isoch_TransferData_Initialize.c)
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140019320 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x14001C248 (DeviceSlot_D0EntryCleanupState.c)
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x14001D07C (UsbDevice_InitializeInputContextCommon.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001E158 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14001E588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     TR_InitializeTransferRing @ 0x14001E854 (TR_InitializeTransferRing.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x14001F150 (Endpoint_UcxEvtEndpointReset.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x140025248 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     Register_WriteSecureMmio @ 0x14002DDB0 (Register_WriteSecureMmio.c)
 *     Endpoint_SM_ResetEndpoint @ 0x140031344 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x140032D24 (Endpoint_SM_ResetControlEndpoint.c)
 *     UsbDevice_UcxEvtEnable @ 0x140032FA0 (UsbDevice_UcxEvtEnable.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1400342E4 (Command_D0EntryPostInterruptsEnabled.c)
 *     Interrupter_Initialize @ 0x140035DB4 (Interrupter_Initialize.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 *     TR_CreateSecureObject @ 0x140038D24 (TR_CreateSecureObject.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039514 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 *     memcpy_s @ 0x14003DBA0 (memcpy_s.c)
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003FEF4 (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x140040174 (CommonBuffer_AcquireSecureBuffer.c)
 *     Device_QueryCapabilities @ 0x140044908 (Device_QueryCapabilities.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140047410 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     Interrupter_InitializeForOffload @ 0x140049820 (Interrupter_InitializeForOffload.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004D010 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004E990 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004EA38 (UsbDevice_SetResourceAssignment.c)
 *     Crashdump_Initialize @ 0x140050BB0 (Crashdump_Initialize.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x140053088 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x140053318 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x140053A18 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x140054408 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1400547E4 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x140054B64 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x140054CF8 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x140054FF4 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x14005554C (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E6C (XilCoreCommonBuffer_AllocateBuffer.c)
 *     TelemetryData_CreateReport @ 0x140057444 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x140058738 (WerKernelSubmitReport.c)
 *     memset$thunk$772440563353939046 @ 0x14005A020 (memset$thunk$772440563353939046.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140073BAC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 *     Controller_CreateSecureObject @ 0x140074EE0 (Controller_CreateSecureObject.c)
 *     Controller_CreateWdfDevice @ 0x140074FB4 (Controller_CreateWdfDevice.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x140075A5C (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_RetrievePciData @ 0x140077430 (Controller_RetrievePciData.c)
 *     DriverEntry @ 0x140079BD0 (DriverEntry.c)
 *     WppTraceCallback @ 0x14007A3B0 (WppTraceCallback.c)
 *     Interrupter_CreateInterrupter @ 0x14007ADE8 (Interrupter_CreateInterrupter.c)
 *     IoControl_Create @ 0x14007C5E8 (IoControl_Create.c)
 *     RootHub_Create @ 0x14007D704 (RootHub_Create.c)
 *     Wmi_Create @ 0x14007E598 (Wmi_Create.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x14007E790 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     DmaEnabler_Create @ 0x14007ED20 (DmaEnabler_Create.c)
 *     TelemetryData_pInitWerContext @ 0x14007F824 (TelemetryData_pInitWerContext.c)
 *     TR_Create @ 0x140081594 (TR_Create.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
