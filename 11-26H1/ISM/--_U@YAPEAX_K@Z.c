/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x18009C94C
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x180011B6C (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18001BA14 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18002A51C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180043A70 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180044794 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800458EC (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180046170 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800587AC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180062EBC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x1800696C4 (--0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18006D3CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@@Z @ 0x18006D52C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@@Z.c)
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x18007FF3C (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800955B0 (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180097DB4 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CABBC (-TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControlle.c)
 *     ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAF18 (-TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsContro.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800D99D4 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800D9B48 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D9D50 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DADC0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _lambda_d47f631da3751d72c8a8e135519addbc_::operator() @ 0x1800DDC14 (_lambda_d47f631da3751d72c8a8e135519addbc_--operator().c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E088C (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800E0F28 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E1440 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800E17B8 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18010B450 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x180116DBC (--$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x18011836C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180146F98 (--$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180187820 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x180187978 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 *     ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x180192DB8 (-QueryHardwareProperties@PenHapticInterface@@AEAAJXZ.c)
 *     ?QueryIsHighLatencyDevice@PenHapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801930F0 (-QueryIsHighLatencyDevice@PenHapticInterface@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1)
{
  return operator new(a1);
}
