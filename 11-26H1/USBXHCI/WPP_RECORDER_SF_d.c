/*
 * XREFs of WPP_RECORDER_SF_D @ 0x140008EA0
 * Callers:
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x14000A460 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_ReadSecureMmio @ 0x14000B66C (Register_ReadSecureMmio.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 *     Controller_GetFrameNumber @ 0x140015370 (Controller_GetFrameNumber.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x140026B80 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_TransferUrb_Initialize @ 0x1400276F0 (Isoch_TransferUrb_Initialize.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     RootHub_DetectPortInInactiveState @ 0x14002D110 (RootHub_DetectPortInInactiveState.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14002D224 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002FE60 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140034CC8 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Read30PortSpeeds @ 0x140036FD0 (RootHub_Read30PortSpeeds.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x140037E90 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Isoch_CommonBufferCallback @ 0x140038250 (Isoch_CommonBufferCallback.c)
 *     Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x14003E300 (Command_GetSupportedExtendedCapabilityCommandCompletion.c)
 *     Controller_InitiateRecovery @ 0x14004130C (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     RootHub_DisableLPMForSlot @ 0x14004A1D8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004B32C (RootHub_Update20HardwareLpmParameters.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140073BAC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_GetDeviceEnumerator @ 0x140075D88 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x140076FC4 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1400771D4 (Controller_RetrieveAcpiData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x140078234 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x140078538 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007B3FC (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 *     Controller_UpdateIdleTimeout @ 0x140081DDC (Controller_UpdateIdleTimeout.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x14008205C (RootHub_PopulatePortFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x140008EA0
 * Reason: Hex-Rays returned no pseudocode for 0x140008EA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140008EA0: mov     rax, rsp
 * 0000000140008EA3: mov     [rax+8], rbx
 * 0000000140008EA7: mov     [rax+10h], rbp
 * 0000000140008EAB: mov     [rax+18h], rsi
 * 0000000140008EAF: mov     [rax+20h], rdi
 * 0000000140008EB3: push    r14
 * 0000000140008EB5: sub     rsp, 40h
 * 0000000140008EB9: mov     ebp, r8d
 * 0000000140008EBC: mov     r14, rcx
 * 0000000140008EBF: mov     ebx, r8d
 * 0000000140008EC2: shr     rbx, 10h
 * 0000000140008EC6: movzx   esi, r9w
 * 0000000140008ECA: lea     r11d, [rbp-1]
 * 0000000140008ECE: movzx   edi, dl
 * 0000000140008ED1: mov     r10d, r11d
 * 0000000140008ED4: and     r11d, 1Fh
 * 0000000140008ED8: shr     r10, 5
 * 0000000140008EDC: lea     rax, [rbx+rbx*4]
 * 0000000140008EE0: and     r10d, 7FFh
 * 0000000140008EE7: lea     rax, [r10+rax*4]
 * 0000000140008EEB: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140008EF2: mov     eax, [r10+rax*4+2Ch]
 * 0000000140008EF7: bt      eax, r11d
 * 0000000140008EFB: jnb     short loc_140008F45
 * 0000000140008EFD: lea     rcx, [rbx+rbx*4]
 * 0000000140008F01: add     rcx, rcx
 * 0000000140008F04: cmp     [r10+rcx*8+29h], dil
 * 0000000140008F09: jb      short loc_140008F45
 * 0000000140008F0B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140008F12: lea     rdx, [rsp+48h+arg_28]
 * 0000000140008F17: mov     r8, [rsp+48h+arg_20]
 * 0000000140008F1C: mov     r9d, esi
 * 0000000140008F1F: mov     rcx, [r10+rcx*8+18h]
 * 0000000140008F24: mov     [rsp+48h+var_18], 0
 * 0000000140008F2D: mov     [rsp+48h+var_20], 4
 * 0000000140008F36: mov     [rsp+48h+var_28], rdx
 * 0000000140008F3B: mov     edx, 2Bh ; '+'
 * 0000000140008F40: call    _guard_dispatch_icall
 * 0000000140008F45: mov     r9, [rsp+48h+arg_20]
 * 0000000140008F4A: lea     rax, [rsp+48h+arg_28]
 * 0000000140008F4F: mov     [rsp+48h+var_10], 0
 * 0000000140008F58: mov     r8d, ebp
 * 0000000140008F5B: mov     [rsp+48h+var_18], 4
 * 0000000140008F64: mov     edx, edi
 * 0000000140008F66: mov     [rsp+48h+var_20], rax
 * 0000000140008F6B: mov     rcx, r14
 * 0000000140008F6E: mov     word ptr [rsp+48h+var_28], si
 * 0000000140008F73: call    cs:__imp_WppAutoLogTrace
 * 0000000140008F7A: nop     dword ptr [rax+rax+00h]
 * 0000000140008F7F: mov     rbx, [rsp+48h+arg_0]
 * 0000000140008F84: mov     rbp, [rsp+48h+arg_8]
 * 0000000140008F89: mov     rsi, [rsp+48h+arg_10]
 * 0000000140008F8E: mov     rdi, [rsp+48h+arg_18]
 * 0000000140008F93: add     rsp, 40h
 * 0000000140008F97: pop     r14
 * 0000000140008F99: retn
 */
