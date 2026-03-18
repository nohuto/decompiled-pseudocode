/*
 * XREFs of memset @ 0x140046BC0
 * Callers:
 *     memcpy_s @ 0x140001510 (memcpy_s.c)
 *     McGenControlCallbackV2 @ 0x140001890 (McGenControlCallbackV2.c)
 *     HUBHTX_SendInterruptTransfer @ 0x140005BC4 (HUBHTX_SendInterruptTransfer.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1400075CC (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x140007810 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_ResetHub @ 0x140007AC0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x140007E8C (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1400081CC (HUBPARENT_SetHubConfiguration.c)
 *     HUBSM_FindAndSetTargetState @ 0x14000B6B4 (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x14000CAD4 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x14000CC0C (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x14000CF70 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x14000E0B8 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E4F0 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F100 (HUBFDO_SetupHubPostErrataQuery.c)
 *     RtlStringCbPrintfExW @ 0x14000F7FC (RtlStringCbPrintfExW.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x140010718 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x140010F5C (HUBMUX_CreatePSM.c)
 *     HUBPDO_GetHubName @ 0x140018C90 (HUBPDO_GetHubName.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x140019F60 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B864 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x14001BC60 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     RtlStringCchPrintfExW @ 0x14001D404 (RtlStringCchPrintfExW.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x140020040 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140027134 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x140027990 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1400283C4 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029800 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029944 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBDTX_LogAlternateMode @ 0x14002BC2C (HUBDTX_LogAlternateMode.c)
 *     HUBDTX_LogBillboardEvent @ 0x14002BDFC (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C51C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x14002C9CC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D22C (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 *     HUBMISC_CreateNewDSM @ 0x14002F0D8 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030684 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1400315C8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1400323B4 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D978 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DE40 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003F0C0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003F830 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1400414D0 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     USBDInternal_BuildServicePath @ 0x140043BFC (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140043F8C (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBD_CreateHandle @ 0x140044304 (USBD_CreateHandle.c)
 *     DereferenceDeviceResetInterface @ 0x140045C14 (DereferenceDeviceResetInterface.c)
 *     CreateNewEventEntry @ 0x140045C78 (CreateNewEventEntry.c)
 *     memset$thunk$772440563353939046 @ 0x140048020 (memset$thunk$772440563353939046.c)
 *     WppTraceCallback @ 0x14007A210 (WppTraceCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007D60C (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007D7E4 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007DA20 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DCD4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DF08 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E274 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007EAC8 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007EFC0 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007F570 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811BC (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x140087B44 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008B4B8 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x14008CE5C (HUBREG_UpdateUxdSettings.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA78 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E290 (HUBACPI_EvaluateDsmMethod.c)
 *     WMI_AcquireHubName @ 0x14008F8EC (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x140090460 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_RegisterDevice @ 0x1400906D0 (WMI_RegisterDevice.c)
 *     WMI_RegisterHub @ 0x14009080C (WMI_RegisterHub.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1400909FC (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140091124 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092B90 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 *     QueryDeviceResetInterface @ 0x1400940C4 (QueryDeviceResetInterface.c)
 *     CreateTlgAggregateSession @ 0x1400943CC (CreateTlgAggregateSession.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
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
