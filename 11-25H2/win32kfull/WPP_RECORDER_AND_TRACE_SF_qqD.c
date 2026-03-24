/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14020FDAC
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x140200B58 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14020FDAC
 * Reason: Hex-Rays returned no pseudocode for 0x14020FDAC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020FDAC: mov     [rsp+arg_0], rbx
 * 000000014020FDB1: mov     [rsp+arg_8], rsi
 * 000000014020FDB6: mov     [rsp+arg_10], rdi
 * 000000014020FDBB: push    r14
 * 000000014020FDBD: sub     rsp, 60h
 * 000000014020FDC1: mov     esi, 8
 * 000000014020FDC6: mov     rdi, r9
 * 000000014020FDC9: mov     bl, r8b
 * 000000014020FDCC: lea     r14d, [rsi+0Dh]
 * 000000014020FDD0: test    dl, dl
 * 000000014020FDD2: jnz     loc_14020FE58
 * 000000014020FDD8: test    bl, bl
 * 000000014020FDDA: jz      short loc_14020FE40
 * 000000014020FDDC: and     [rsp+68h+var_10], 0
 * 000000014020FDE2: lea     rax, [rsp+68h+arg_50]
 * 000000014020FDEA: mov     [rsp+68h+var_18], 4
 * 000000014020FDF3: lea     r9, WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids
 * 000000014020FDFA: mov     [rsp+68h+var_20], rax
 * 000000014020FDFF: mov     r8d, esi
 * 000000014020FE02: mov     [rsp+68h+var_28], rsi
 * 000000014020FE07: lea     rax, [rsp+68h+arg_48]
 * 000000014020FE0F: mov     [rsp+68h+var_30], rax
 * 000000014020FE14: mov     edx, 4
 * 000000014020FE19: lea     rax, [rsp+68h+arg_40]
 * 000000014020FE21: mov     [rsp+68h+var_38], rsi
 * 000000014020FE26: mov     [rsp+68h+var_40], rax
 * 000000014020FE2B: mov     rcx, rdi
 * 000000014020FE2E: mov     word ptr [rsp+68h+var_48], r14w
 * 000000014020FE34: call    cs:__imp_WppAutoLogTrace
 * 000000014020FE3B: nop     dword ptr [rax+rax+00h]
 * 000000014020FE40: lea     r11, [rsp+68h+var_8]
 * 000000014020FE45: mov     rbx, [r11+10h]
 * 000000014020FE49: mov     rsi, [r11+18h]
 * 000000014020FE4D: mov     rdi, [r11+20h]
 * 000000014020FE51: mov     rsp, r11
 * 000000014020FE54: pop     r14
 * 000000014020FE56: retn
 * 000000014020FE58: and     [rsp+68h+var_18], 0
 * 000000014020FE5E: lea     rdx, [rsp+68h+arg_50]
 * 000000014020FE66: mov     rax, cs:pfnWppTraceMessage
 * 000000014020FE6D: lea     r8, WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids
 * 000000014020FE74: mov     [rsp+68h+var_20], 4
 * 000000014020FE7D: mov     r9d, r14d
 * 000000014020FE80: mov     [rsp+68h+var_28], rdx
 * 000000014020FE85: lea     rdx, [rsp+68h+arg_48]
 * 000000014020FE8D: mov     [rsp+68h+var_30], rsi
 * 000000014020FE92: mov     [rsp+68h+var_38], rdx
 * 000000014020FE97: lea     rdx, [rsp+68h+arg_40]
 * 000000014020FE9F: mov     [rsp+68h+var_40], rsi
 * 000000014020FEA4: mov     [rsp+68h+var_48], rdx
 * 000000014020FEA9: mov     edx, 2Bh ; '+'
 * 000000014020FEAE: call    _guard_dispatch_icall
 * 000000014020FEB3: jmp     loc_14020FDD8
 */
