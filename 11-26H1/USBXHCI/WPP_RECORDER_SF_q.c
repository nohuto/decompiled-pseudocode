/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14002E028
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x140003E54 (XilCoreUsbDevice_Create.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x14002879C (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14002DA10 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14002DBD0 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x14002DF10 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x14002DFA0 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     XilCoreCommonBuffer_RebalanceBuffers @ 0x14002E548 (XilCoreCommonBuffer_RebalanceBuffers.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x14002E7BC (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x140034A90 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x140040330 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x140041DC0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x140043980 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140044750 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x14004892C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x140055FB0 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x140056010 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x140056070 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1400560D0 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x140057100 (XilCoreDeviceSlot_AllocateResources.c)
 *     CommonBuffer_Create @ 0x140073204 (CommonBuffer_Create.c)
 *     Command_Create @ 0x140073580 (Command_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140075CE4 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1400794C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1400796B0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_Create @ 0x140079940 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x14007C5E8 (IoControl_Create.c)
 *     Register_Create @ 0x14007C7CC (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 *     IntelPptFilter_Create @ 0x14007E824 (IntelPptFilter_Create.c)
 *     DmaEnabler_Create @ 0x14007ED20 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x14007EFB8 (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x14007F2B8 (SecureChannel_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140080F38 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140082490 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x14002E028
 * Reason: Hex-Rays returned no pseudocode for 0x14002E028
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002E028: mov     rax, rsp
 * 000000014002E02B: mov     [rax+8], rbx
 * 000000014002E02F: mov     [rax+10h], rbp
 * 000000014002E033: mov     [rax+18h], rsi
 * 000000014002E037: mov     [rax+20h], rdi
 * 000000014002E03B: push    r14
 * 000000014002E03D: sub     rsp, 40h
 * 000000014002E041: mov     ebp, r8d
 * 000000014002E044: mov     r14, rcx
 * 000000014002E047: mov     ebx, r8d
 * 000000014002E04A: shr     rbx, 10h
 * 000000014002E04E: movzx   esi, r9w
 * 000000014002E052: lea     r11d, [rbp-1]
 * 000000014002E056: movzx   edi, dl
 * 000000014002E059: mov     r10d, r11d
 * 000000014002E05C: and     r11d, 1Fh
 * 000000014002E060: shr     r10, 5
 * 000000014002E064: lea     rax, [rbx+rbx*4]
 * 000000014002E068: and     r10d, 7FFh
 * 000000014002E06F: lea     rax, [r10+rax*4]
 * 000000014002E073: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014002E07A: mov     eax, [r10+rax*4+2Ch]
 * 000000014002E07F: bt      eax, r11d
 * 000000014002E083: jb      short loc_14002E0DB
 * 000000014002E085: mov     r9, [rsp+48h+arg_20]
 * 000000014002E08A: lea     rax, [rsp+48h+arg_28]
 * 000000014002E08F: mov     [rsp+48h+var_10], 0
 * 000000014002E098: mov     r8d, ebp
 * 000000014002E09B: mov     [rsp+48h+var_18], 8
 * 000000014002E0A4: mov     edx, edi
 * 000000014002E0A6: mov     [rsp+48h+var_20], rax
 * 000000014002E0AB: mov     rcx, r14
 * 000000014002E0AE: mov     word ptr [rsp+48h+var_28], si
 * 000000014002E0B3: call    cs:__imp_WppAutoLogTrace
 * 000000014002E0BA: nop     dword ptr [rax+rax+00h]
 * 000000014002E0BF: mov     rbx, [rsp+48h+arg_0]
 * 000000014002E0C4: mov     rbp, [rsp+48h+arg_8]
 * 000000014002E0C9: mov     rsi, [rsp+48h+arg_10]
 * 000000014002E0CE: mov     rdi, [rsp+48h+arg_18]
 * 000000014002E0D3: add     rsp, 40h
 * 000000014002E0D7: pop     r14
 * 000000014002E0D9: retn
 * 000000014002E0DB: lea     rcx, [rbx+rbx*4]
 * 000000014002E0DF: add     rcx, rcx
 * 000000014002E0E2: cmp     [r10+rcx*8+29h], dil
 * 000000014002E0E7: jb      short loc_14002E085
 * 000000014002E0E9: mov     rax, cs:pfnWppTraceMessage
 * 000000014002E0F0: lea     rdx, [rsp+48h+arg_28]
 * 000000014002E0F5: mov     r8, [rsp+48h+arg_20]
 * 000000014002E0FA: mov     r9d, esi
 * 000000014002E0FD: mov     rcx, [r10+rcx*8+18h]
 * 000000014002E102: mov     [rsp+48h+var_18], 0
 * 000000014002E10B: mov     [rsp+48h+var_20], 8
 * 000000014002E114: mov     [rsp+48h+var_28], rdx
 * 000000014002E119: mov     edx, 2Bh ; '+'
 * 000000014002E11E: call    _guard_dispatch_icall
 * 000000014002E123: jmp     loc_14002E085
 */
