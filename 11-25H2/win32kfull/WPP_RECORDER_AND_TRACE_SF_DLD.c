/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DLD @ 0x1402ADA54
 * Callers:
 *     ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402AD0EC (-TraceTopology@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DLD @ 0x1402ADA54
 * Reason: Hex-Rays returned no pseudocode for 0x1402ADA54
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402ADA54: mov     r11, rsp
 * 00000001402ADA57: mov     [r11+8], rbx
 * 00000001402ADA5B: mov     [r11+10h], rbp
 * 00000001402ADA5F: mov     [r11+18h], rsi
 * 00000001402ADA63: push    rdi
 * 00000001402ADA64: sub     rsp, 60h
 * 00000001402ADA68: mov     ebp, 16h
 * 00000001402ADA6D: mov     rdi, r9
 * 00000001402ADA70: mov     bl, r8b
 * 00000001402ADA73: lea     esi, [rbp-12h]
 * 00000001402ADA76: test    dl, dl
 * 00000001402ADA78: jz      short loc_1402ADABC
 * 00000001402ADA7A: and     qword ptr [r11-18h], 0
 * 00000001402ADA7F: lea     rdx, [r11+58h]
 * 00000001402ADA83: mov     rax, cs:pfnWppTraceMessage
 * 00000001402ADA8A: lea     r8, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 00000001402ADA91: mov     [r11-20h], rsi
 * 00000001402ADA95: mov     r9d, ebp
 * 00000001402ADA98: mov     [r11-28h], rdx
 * 00000001402ADA9C: lea     rdx, [r11+50h]
 * 00000001402ADAA0: mov     [r11-30h], rsi
 * 00000001402ADAA4: mov     [r11-38h], rdx
 * 00000001402ADAA8: lea     rdx, [r11+48h]
 * 00000001402ADAAC: mov     [r11-40h], rsi
 * 00000001402ADAB0: mov     [r11-48h], rdx
 * 00000001402ADAB4: lea     edx, [rbp+15h]
 * 00000001402ADAB7: call    _guard_dispatch_icall
 * 00000001402ADABC: test    bl, bl
 * 00000001402ADABE: jz      short loc_1402ADB20
 * 00000001402ADAC0: and     [rsp+68h+var_10], 0
 * 00000001402ADAC6: lea     rax, [rsp+68h+arg_50]
 * 00000001402ADACE: mov     [rsp+68h+var_18], rsi
 * 00000001402ADAD3: lea     r9, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 00000001402ADADA: mov     [rsp+68h+var_20], rax
 * 00000001402ADADF: mov     edx, 5
 * 00000001402ADAE4: mov     [rsp+68h+var_28], rsi
 * 00000001402ADAE9: lea     rax, [rsp+68h+arg_48]
 * 00000001402ADAF1: mov     [rsp+68h+var_30], rax
 * 00000001402ADAF6: mov     rcx, rdi
 * 00000001402ADAF9: lea     rax, [rsp+68h+arg_40]
 * 00000001402ADB01: mov     [rsp+68h+var_38], rsi
 * 00000001402ADB06: mov     [rsp+68h+var_40], rax
 * 00000001402ADB0B: lea     r8d, [rdx+2]
 * 00000001402ADB0F: mov     [rsp+68h+var_48], bp
 * 00000001402ADB14: call    cs:__imp_WppAutoLogTrace
 * 00000001402ADB1B: nop     dword ptr [rax+rax+00h]
 * 00000001402ADB20: lea     r11, [rsp+68h+var_8]
 * 00000001402ADB25: mov     rbx, [r11+10h]
 * 00000001402ADB29: mov     rbp, [r11+18h]
 * 00000001402ADB2D: mov     rsi, [r11+20h]
 * 00000001402ADB31: mov     rsp, r11
 * 00000001402ADB34: pop     rdi
 * 00000001402ADB35: retn
 */
