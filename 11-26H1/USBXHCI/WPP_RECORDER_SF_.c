/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1400063D8
 * Callers:
 *     CommonBuffer_QueueWorkItem @ 0x1400045B4 (CommonBuffer_QueueWorkItem.c)
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     Register_ControllerStop @ 0x140005EBC (Register_ControllerStop.c)
 *     Register_BiosHandoff @ 0x1400060A4 (Register_BiosHandoff.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1400075D4 (XilCoreDeviceSlot_Initialize.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x14000A460 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x14000B150 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140019320 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1400199C4 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     CommonBuffer_FlushWorkItems @ 0x14002CDBC (CommonBuffer_FlushWorkItems.c)
 *     RootHub_DetectLinkErrorState @ 0x14002CF50 (RootHub_DetectLinkErrorState.c)
 *     Controller_D0ExitSaveState @ 0x14002D350 (Controller_D0ExitSaveState.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14002E130 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14002EA28 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002FE60 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x140031A88 (Register_WaitForControllerReady.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1400342E4 (Command_D0EntryPostInterruptsEnabled.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140034CC8 (RootHub_RestoreU1U2Timeouts.c)
 *     Wmi_CreateControllerCapabilities @ 0x140034F10 (Wmi_CreateControllerCapabilities.c)
 *     RootHub_Read30PortSpeeds @ 0x140036FD0 (RootHub_Read30PortSpeeds.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x140037E90 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x14003A000 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_ClearHSIIWorkaround @ 0x140040AA0 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x140040B70 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DisableController @ 0x140040E98 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x140040F50 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x14004130C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140042268 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x140042A34 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_ReferenceTrustletProcess @ 0x140042BBC (Controller_ReferenceTrustletProcess.c)
 *     Controller_SetHSIIWorkaround @ 0x140042D4C (Controller_SetHSIIWorkaround.c)
 *     Controller_TelemetryReport @ 0x140042FC0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1400433B0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x1400438A0 (Controller_UcxEvtReset.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x14004A4D0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x14004AE90 (RootHub_UcxEvtGetPortErrorCount.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x14004D1D0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     XilCoreCommand_AllocateResources @ 0x140056C38 (XilCoreCommand_AllocateResources.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E6C (XilCoreCommonBuffer_AllocateBuffer.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057100 (XilCoreDeviceSlot_AllocateResources.c)
 *     Command_ReleaseHardware @ 0x140073AAC (Command_ReleaseHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140073BAC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_Create @ 0x140074010 (Controller_Create.c)
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x140076284 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1400765BC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x140077958 (Controller_SetDeviceDescription.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007B3FC (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x14007B8AC (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareHardware @ 0x14007B9B8 (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007D3E0 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 *     SecureDmaEnabler_MapMemory @ 0x140082264 (SecureDmaEnabler_MapMemory.c)
 *     IntelPptFilter_FilterCommand @ 0x140083100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x140083230 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1400832F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1400063D8
 * Reason: Hex-Rays returned no pseudocode for 0x1400063D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400063D8: mov     rax, rsp
 * 00000001400063DB: mov     [rax+8], rbx
 * 00000001400063DF: mov     [rax+10h], rbp
 * 00000001400063E3: mov     [rax+18h], rsi
 * 00000001400063E7: mov     [rax+20h], rdi
 * 00000001400063EB: push    r14
 * 00000001400063ED: sub     rsp, 30h
 * 00000001400063F1: mov     ebp, r8d
 * 00000001400063F4: mov     r14, rcx
 * 00000001400063F7: mov     ebx, r8d
 * 00000001400063FA: shr     rbx, 10h
 * 00000001400063FE: movzx   esi, r9w
 * 0000000140006402: lea     r11d, [rbp-1]
 * 0000000140006406: movzx   edi, dl
 * 0000000140006409: mov     r10d, r11d
 * 000000014000640C: and     r11d, 1Fh
 * 0000000140006410: shr     r10, 5
 * 0000000140006414: lea     rax, [rbx+rbx*4]
 * 0000000140006418: and     r10d, 7FFh
 * 000000014000641F: lea     rax, [r10+rax*4]
 * 0000000140006423: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014000642A: mov     eax, [r10+rax*4+2Ch]
 * 000000014000642F: bt      eax, r11d
 * 0000000140006433: jb      short loc_140006478
 * 0000000140006435: mov     r9, [rsp+38h+arg_20]
 * 000000014000643A: mov     r8d, ebp
 * 000000014000643D: mov     [rsp+38h+var_10], 0
 * 0000000140006446: mov     edx, edi
 * 0000000140006448: mov     rcx, r14
 * 000000014000644B: mov     word ptr [rsp+38h+var_18], si
 * 0000000140006450: call    cs:__imp_WppAutoLogTrace
 * 0000000140006457: nop     dword ptr [rax+rax+00h]
 * 000000014000645C: mov     rbx, [rsp+38h+arg_0]
 * 0000000140006461: mov     rbp, [rsp+38h+arg_8]
 * 0000000140006466: mov     rsi, [rsp+38h+arg_10]
 * 000000014000646B: mov     rdi, [rsp+38h+arg_18]
 * 0000000140006470: add     rsp, 30h
 * 0000000140006474: pop     r14
 * 0000000140006476: retn
 * 0000000140006478: lea     rcx, [rbx+rbx*4]
 * 000000014000647C: add     rcx, rcx
 * 000000014000647F: cmp     [r10+rcx*8+29h], dil
 * 0000000140006484: jb      short loc_140006435
 * 0000000140006486: mov     rax, cs:pfnWppTraceMessage
 * 000000014000648D: mov     r9d, esi
 * 0000000140006490: mov     r8, [rsp+38h+arg_20]
 * 0000000140006495: mov     edx, 2Bh ; '+'
 * 000000014000649A: mov     rcx, [r10+rcx*8+18h]
 * 000000014000649F: mov     [rsp+38h+var_18], 0
 * 00000001400064A8: call    _guard_dispatch_icall
 * 00000001400064AD: jmp     short loc_140006435
 */
