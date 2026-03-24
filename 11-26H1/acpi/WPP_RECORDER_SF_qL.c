/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x14003B520
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     OSNotifyCreateDevice @ 0x14001E2EC (OSNotifyCreateDevice.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x14002D7E0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIDeviceCompletePhase3Off @ 0x14003B300 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x14003B440 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140048CF0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     OSNotifyCreateThermalZone @ 0x140051E28 (OSNotifyCreateThermalZone.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x14005CF30 (ACPIDeviceCompletePhase3Reset.c)
 *     OSNotifyCreatePowerResource @ 0x140063BC4 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x140063C6C (OSNotifyCreateProcessor.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400C27F8 (ACPIInternalSendSynchronousIrp.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x14003B520
 * Reason: Hex-Rays returned no pseudocode for 0x14003B520
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003B520: mov     [rsp+arg_0], rbx
 * 000000014003B525: mov     [rsp+arg_8], rbp
 * 000000014003B52A: mov     [rsp+arg_10], rsi
 * 000000014003B52F: push    rdi
 * 000000014003B530: push    r14
 * 000000014003B532: push    r15
 * 000000014003B534: sub     rsp, 50h
 * 000000014003B538: mov     r14d, r8d
 * 000000014003B53B: mov     r15, rcx
 * 000000014003B53E: mov     edi, r8d
 * 000000014003B541: shr     rdi, 10h
 * 000000014003B545: movzx   esi, dl
 * 000000014003B548: lea     ebx, [r14-1]
 * 000000014003B54C: movzx   ebp, r9w
 * 000000014003B550: mov     r10d, ebx
 * 000000014003B553: and     ebx, 1Fh
 * 000000014003B556: shr     r10, 5
 * 000000014003B55A: lea     rax, [rdi+rdi*4]
 * 000000014003B55E: and     r10d, 7FFh
 * 000000014003B565: mov     edx, ebx
 * 000000014003B567: mov     ebx, 4
 * 000000014003B56C: lea     r11, [r10+rax*4]
 * 000000014003B570: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014003B577: mov     eax, [r10+r11*4+2Ch]
 * 000000014003B57C: bt      eax, edx
 * 000000014003B57F: jb      short loc_14003B5EE
 * 000000014003B581: mov     r9, [rsp+68h+arg_20]
 * 000000014003B589: lea     rax, [rsp+68h+arg_30]
 * 000000014003B591: mov     [rsp+68h+var_20], 0
 * 000000014003B59A: mov     r8d, r14d
 * 000000014003B59D: mov     [rsp+68h+var_28], rbx
 * 000000014003B5A2: mov     edx, esi
 * 000000014003B5A4: mov     [rsp+68h+var_30], rax
 * 000000014003B5A9: mov     rcx, r15
 * 000000014003B5AC: lea     rax, [rsp+68h+arg_28]
 * 000000014003B5B4: mov     [rsp+68h+var_38], 8
 * 000000014003B5BD: mov     [rsp+68h+var_40], rax
 * 000000014003B5C2: mov     word ptr [rsp+68h+var_48], bp
 * 000000014003B5C7: call    cs:__imp_WppAutoLogTrace
 * 000000014003B5CE: nop     dword ptr [rax+rax+00h]
 * 000000014003B5D3: lea     r11, [rsp+68h+var_18]
 * 000000014003B5D8: mov     rbx, [r11+20h]
 * 000000014003B5DC: mov     rbp, [r11+28h]
 * 000000014003B5E0: mov     rsi, [r11+30h]
 * 000000014003B5E4: mov     rsp, r11
 * 000000014003B5E7: pop     r15
 * 000000014003B5E9: pop     r14
 * 000000014003B5EB: pop     rdi
 * 000000014003B5EC: retn
 * 000000014003B5EE: lea     rcx, [rdi+rdi*4]
 * 000000014003B5F2: add     rcx, rcx
 * 000000014003B5F5: cmp     [r10+rcx*8+29h], sil
 * 000000014003B5FA: jb      short loc_14003B581
 * 000000014003B5FC: mov     rax, cs:pfnWppTraceMessage
 * 000000014003B603: lea     rdx, [rsp+68h+arg_30]
 * 000000014003B60B: mov     r8, [rsp+68h+arg_20]
 * 000000014003B613: mov     r9d, ebp
 * 000000014003B616: mov     rcx, [r10+rcx*8+18h]
 * 000000014003B61B: mov     [rsp+68h+var_28], 0
 * 000000014003B624: mov     [rsp+68h+var_30], rbx
 * 000000014003B629: mov     [rsp+68h+var_38], rdx
 * 000000014003B62E: lea     rdx, [rsp+68h+arg_28]
 * 000000014003B636: mov     [rsp+68h+var_40], 8
 * 000000014003B63F: mov     [rsp+68h+var_48], rdx
 * 000000014003B644: mov     edx, 2Bh ; '+'
 * 000000014003B649: call    _guard_dispatch_icall
 * 000000014003B64E: jmp     loc_14003B581
 */
