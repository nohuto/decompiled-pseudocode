/*
 * XREFs of __security_check_cookie @ 0x14001C6A0
 * Callers:
 *     WmiLogStreamPosition @ 0x140003620 (WmiLogStreamPosition.c)
 *     WmiLogEvent @ 0x1400068FC (WmiLogEvent.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14000852C (McTemplateK0zq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000C12C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000C170 (McTemplateK0q_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14000D01C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_RecordCachedUsage @ 0x14000D4E4 (wil_details_RecordCachedUsage.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156B4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBD_CreateHandle @ 0x140019E3C (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x14001A27C (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x14001A91C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x14001BAE0 (_handle_error.c)
 *     _handle_errorf @ 0x14001BC60 (_handle_errorf.c)
 *     RaiseException @ 0x14001C060 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001C170 (_raise_exc_ex.c)
 *     IsClassDriverOnly @ 0x14002F3A0 (IsClassDriverOnly.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14002FFFC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400303E0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x140032280 (PropertyDrmAudioStream_SetContentId.c)
 *     USBDeviceIsBehindHub @ 0x1400351D8 (USBDeviceIsBehindHub.c)
 *     USBHwGetMicArrayDescriptor @ 0x1400355D8 (USBHwGetMicArrayDescriptor.c)
 *     PropertyGetAudioPosition @ 0x14003C0C0 (PropertyGetAudioPosition.c)
 *     RegistryReadNameValue @ 0x14003C4EC (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x140040220 (USBDeviceStart.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14004313C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
