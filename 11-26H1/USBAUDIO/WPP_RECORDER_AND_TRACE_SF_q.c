/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644
 * Callers:
 *     USBCaptureProcessPin @ 0x140002F60 (USBCaptureProcessPin.c)
 *     DeviceCreate @ 0x1400088F0 (DeviceCreate.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceRemove @ 0x14000BF80 (DeviceRemove.c)
 *     DeviceStart @ 0x14002E790 (DeviceStart.c)
 *     DeviceStop @ 0x14002EEA0 (DeviceStop.c)
 *     USBType1SurpriseRemove @ 0x140039820 (USBType1SurpriseRemove.c)
 *     USBCaptureClosePin @ 0x1400398C0 (USBCaptureClosePin.c)
 *     PinProcess @ 0x14003A830 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x14003CED0 (USBType1RenderCreatePin.c)
 *     USBCaptureCreatePin @ 0x14003E8D0 (USBCaptureCreatePin.c)
 *     PinClose @ 0x14003F500 (PinClose.c)
 *     DeviceSurpriseRemoval @ 0x140040850 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x140041530 (PinCreate.c)
 *     USBType1RenderClosePin @ 0x140042730 (USBType1RenderClosePin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x140008644
 * Reason: Hex-Rays returned no pseudocode for 0x140008644
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140008644: mov     r11, rsp
 * 0000000140008647: mov     [r11+8], rbx
 * 000000014000864B: mov     [r11+10h], rsi
 * 000000014000864F: push    rdi
 * 0000000140008650: sub     rsp, 40h
 * 0000000140008654: movzx   ebx, [rsp+48h+arg_30]
 * 000000014000865C: mov     rsi, r9
 * 000000014000865F: mov     dil, r8b
 * 0000000140008662: test    dl, dl
 * 0000000140008664: jz      short loc_14000869A
 * 0000000140008666: mov     rax, cs:pfnWppTraceMessage
 * 000000014000866D: lea     rdx, [r11+48h]
 * 0000000140008671: mov     r8, [rsp+48h+arg_38]
 * 0000000140008679: mov     r9d, ebx
 * 000000014000867C: mov     qword ptr [r11-18h], 0
 * 0000000140008684: mov     qword ptr [r11-20h], 8
 * 000000014000868C: mov     [r11-28h], rdx
 * 0000000140008690: mov     edx, 2Bh ; '+'
 * 0000000140008695: call    _guard_dispatch_icall
 * 000000014000869A: test    dil, dil
 * 000000014000869D: jz      short loc_1400086E1
 * 000000014000869F: mov     r9, [rsp+48h+arg_38]
 * 00000001400086A7: lea     rax, [rsp+48h+arg_40]
 * 00000001400086AF: mov     r8d, [rsp+48h+arg_28]
 * 00000001400086B4: xor     edx, edx
 * 00000001400086B6: mov     [rsp+48h+var_10], 0
 * 00000001400086BF: mov     rcx, rsi
 * 00000001400086C2: mov     [rsp+48h+var_18], 8
 * 00000001400086CB: mov     [rsp+48h+var_20], rax
 * 00000001400086D0: mov     [rsp+48h+var_28], bx
 * 00000001400086D5: call    cs:__imp_WppAutoLogTrace
 * 00000001400086DC: nop     dword ptr [rax+rax+00h]
 * 00000001400086E1: mov     rbx, [rsp+48h+arg_0]
 * 00000001400086E6: mov     rsi, [rsp+48h+arg_8]
 * 00000001400086EB: add     rsp, 40h
 * 00000001400086EF: pop     rdi
 * 00000001400086F0: retn
 */
