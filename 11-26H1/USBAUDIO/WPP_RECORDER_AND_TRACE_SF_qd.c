/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060
 * Callers:
 *     USBCaptureResetWorker @ 0x1400042A0 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x140004540 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x1400049E0 (USBType1StateChangePin.c)
 *     DeviceCreate @ 0x1400088F0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBType1ChangePowerState @ 0x14000DDF0 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000E540 (USBCaptureChangePowerState.c)
 *     USBHwDataPipeReset @ 0x14002D724 (USBHwDataPipeReset.c)
 *     DeviceStart @ 0x14002E790 (DeviceStart.c)
 *     DeviceStop @ 0x14002EEA0 (DeviceStop.c)
 *     PinGoToFullPowerState @ 0x140030AE0 (PinGoToFullPowerState.c)
 *     PinGoToLowPowerState @ 0x140030C60 (PinGoToLowPowerState.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureStartTransfers @ 0x14003A460 (USBCaptureStartTransfers.c)
 *     PinSetDataFormat @ 0x14003ADA0 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003B95C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderCreatePin @ 0x14003CED0 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003E8D0 (USBCaptureCreatePin.c)
 *     PinCreate @ 0x140041530 (PinCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060
 * Reason: Hex-Rays returned no pseudocode for 0x140005060
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005060: mov     r11, rsp
 * 0000000140005063: mov     [r11+8], rbx
 * 0000000140005067: mov     [r11+10h], rsi
 * 000000014000506B: push    rdi
 * 000000014000506C: sub     rsp, 50h
 * 0000000140005070: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140005078: mov     rsi, r9
 * 000000014000507B: mov     dil, r8b
 * 000000014000507E: test    dl, dl
 * 0000000140005080: jz      short loc_1400050C6
 * 0000000140005082: mov     rax, cs:pfnWppTraceMessage
 * 0000000140005089: lea     rdx, [r11+50h]
 * 000000014000508D: mov     r8, [rsp+58h+arg_38]
 * 0000000140005095: mov     r9d, ebx
 * 0000000140005098: mov     qword ptr [r11-18h], 0
 * 00000001400050A0: mov     qword ptr [r11-20h], 4
 * 00000001400050A8: mov     [r11-28h], rdx
 * 00000001400050AC: lea     rdx, [r11+48h]
 * 00000001400050B0: mov     qword ptr [r11-30h], 8
 * 00000001400050B8: mov     [r11-38h], rdx
 * 00000001400050BC: mov     edx, 2Bh ; '+'
 * 00000001400050C1: call    _guard_dispatch_icall
 * 00000001400050C6: test    dil, dil
 * 00000001400050C9: jz      short loc_140005126
 * 00000001400050CB: mov     r9, [rsp+58h+arg_38]
 * 00000001400050D3: lea     rax, [rsp+58h+arg_48]
 * 00000001400050DB: mov     r8d, [rsp+58h+arg_28]
 * 00000001400050E3: xor     edx, edx
 * 00000001400050E5: mov     [rsp+58h+var_10], 0
 * 00000001400050EE: mov     rcx, rsi
 * 00000001400050F1: mov     [rsp+58h+var_18], 4
 * 00000001400050FA: mov     [rsp+58h+var_20], rax
 * 00000001400050FF: lea     rax, [rsp+58h+arg_40]
 * 0000000140005107: mov     [rsp+58h+var_28], 8
 * 0000000140005110: mov     [rsp+58h+var_30], rax
 * 0000000140005115: mov     [rsp+58h+var_38], bx
 * 000000014000511A: call    cs:__imp_WppAutoLogTrace
 * 0000000140005121: nop     dword ptr [rax+rax+00h]
 * 0000000140005126: mov     rbx, [rsp+58h+arg_0]
 * 000000014000512B: mov     rsi, [rsp+58h+arg_8]
 * 0000000140005130: add     rsp, 50h
 * 0000000140005134: pop     rdi
 * 0000000140005135: retn
 */
