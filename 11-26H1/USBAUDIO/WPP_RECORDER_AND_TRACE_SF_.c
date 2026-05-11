/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C
 * Callers:
 *     IsSidebandIrp @ 0x140002DE0 (IsSidebandIrp.c)
 *     USBType1CompleteCallback @ 0x140003200 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x140003730 (USBCaptureCompleteCallback.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x14000522C (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x14000570C (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1400058A8 (-GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x140005BE8 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     SidebandDispatchIrp @ 0x140005FC8 (SidebandDispatchIrp.c)
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006434 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400069DC (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006ED8 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007438 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400077E0 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007F18 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000A63C (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x14000B258 (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 *     DeInitSideband @ 0x14000B4B4 (DeInitSideband.c)
 *     PowerSettingCallback @ 0x14000C1D0 (PowerSettingCallback.c)
 *     InitializeSideband @ 0x14000EDBC (InitializeSideband.c)
 *     IsDeviceInSidebandMode @ 0x14000F104 (IsDeviceInSidebandMode.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x14000F528 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x14000F6A0 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F7C0 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000FA54 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x140010038 (-CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1400100F0 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14001026C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x140010758 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140010D58 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1400112A8 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140011624 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011A98 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140011E48 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x140012230 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1400125B0 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400127A0 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140012900 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140012A60 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x140012C40 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1400135E0 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400138A0 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140013B0C (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015408 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017420 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400179B0 (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017B24 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400180DC (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018544 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018AD4 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140018E1C (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsClassDriverOnly @ 0x14002F3A0 (IsClassDriverOnly.c)
 *     IsSidebandSupported @ 0x14002F650 (IsSidebandSupported.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x14002F950 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     USBDeviceGetControllerInfo @ 0x140034FD0 (USBDeviceGetControllerInfo.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSetTransportResources @ 0x140036660 (USBHwSetTransportResources.c)
 *     USBCntrlGetSetGEQ @ 0x1400391D0 (USBCntrlGetSetGEQ.c)
 *     UsbAudioIrpDispatcher @ 0x14003A290 (UsbAudioIrpDispatcher.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003B95C (USBHwSelectStreamingAudioInterface.c)
 *     USBCntrlGetSetDbLevel @ 0x14003E340 (USBCntrlGetSetDbLevel.c)
 *     PinReset @ 0x14003FFB0 (PinReset.c)
 *     USBCntrlGetSetBoolean @ 0x140041210 (USBCntrlGetSetBoolean.c)
 *     PinCreate @ 0x140041530 (PinCreate.c)
 *     USBHwGetTransportResources @ 0x140041CD0 (USBHwGetTransportResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C
 * Reason: Hex-Rays returned no pseudocode for 0x14000B42C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000B42C: mov     [rsp+arg_0], rbx
 * 000000014000B431: mov     [rsp+arg_8], rsi
 * 000000014000B436: push    rdi
 * 000000014000B437: sub     rsp, 30h
 * 000000014000B43B: movzx   ebx, [rsp+38h+arg_30]
 * 000000014000B440: mov     rsi, r9
 * 000000014000B443: mov     dil, r8b
 * 000000014000B446: test    dl, dl
 * 000000014000B448: jz      short loc_14000B46C
 * 000000014000B44A: mov     rax, cs:pfnWppTraceMessage
 * 000000014000B451: mov     r9d, ebx
 * 000000014000B454: mov     r8, [rsp+38h+arg_38]
 * 000000014000B459: mov     edx, 2Bh ; '+'
 * 000000014000B45E: mov     [rsp+38h+var_18], 0
 * 000000014000B467: call    _guard_dispatch_icall
 * 000000014000B46C: test    dil, dil
 * 000000014000B46F: jz      short loc_14000B49A
 * 000000014000B471: mov     r9, [rsp+38h+arg_38]
 * 000000014000B476: xor     edx, edx
 * 000000014000B478: mov     r8d, [rsp+38h+arg_28]
 * 000000014000B47D: mov     rcx, rsi
 * 000000014000B480: mov     [rsp+38h+var_10], 0
 * 000000014000B489: mov     word ptr [rsp+38h+var_18], bx
 * 000000014000B48E: call    cs:__imp_WppAutoLogTrace
 * 000000014000B495: nop     dword ptr [rax+rax+00h]
 * 000000014000B49A: mov     rbx, [rsp+38h+arg_0]
 * 000000014000B49F: mov     rsi, [rsp+38h+arg_8]
 * 000000014000B4A4: add     rsp, 30h
 * 000000014000B4A8: pop     rdi
 * 000000014000B4A9: retn
 */
