/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qll @ 0x1402E9EE8
 * Callers:
 *     xxxShowScrollBar @ 0x1401D4208 (xxxShowScrollBar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qll @ 0x1402E9EE8
 * Reason: Hex-Rays returned no pseudocode for 0x1402E9EE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E9EE8: mov     r11, rsp
 * 00000001402E9EEB: mov     [r11+8], rbx
 * 00000001402E9EEF: mov     [r11+10h], rsi
 * 00000001402E9EF3: mov     [r11+18h], rdi
 * 00000001402E9EF7: push    r14
 * 00000001402E9EF9: sub     rsp, 60h
 * 00000001402E9EFD: mov     esi, 4
 * 00000001402E9F02: mov     rdi, r9
 * 00000001402E9F05: mov     bl, r8b
 * 00000001402E9F08: lea     r14d, [rsi+7]
 * 00000001402E9F0C: test    dl, dl
 * 00000001402E9F0E: jz      short loc_1402E9F56
 * 00000001402E9F10: and     qword ptr [r11-18h], 0
 * 00000001402E9F15: lea     rdx, [r11+58h]
 * 00000001402E9F19: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E9F20: lea     r8, WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids
 * 00000001402E9F27: mov     [r11-20h], rsi
 * 00000001402E9F2B: mov     r9d, r14d
 * 00000001402E9F2E: mov     [r11-28h], rdx
 * 00000001402E9F32: lea     rdx, [r11+50h]
 * 00000001402E9F36: mov     [r11-30h], rsi
 * 00000001402E9F3A: mov     [r11-38h], rdx
 * 00000001402E9F3E: lea     rdx, [r11+48h]
 * 00000001402E9F42: mov     qword ptr [r11-40h], 8
 * 00000001402E9F4A: mov     [r11-48h], rdx
 * 00000001402E9F4E: lea     edx, [rsi+27h]
 * 00000001402E9F51: call    _guard_dispatch_icall
 * 00000001402E9F56: test    bl, bl
 * 00000001402E9F58: jz      short loc_1402E9FBF
 * 00000001402E9F5A: and     [rsp+68h+var_10], 0
 * 00000001402E9F60: lea     rax, [rsp+68h+arg_50]
 * 00000001402E9F68: mov     [rsp+68h+var_18], rsi
 * 00000001402E9F6D: lea     r9, WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids
 * 00000001402E9F74: mov     [rsp+68h+var_20], rax
 * 00000001402E9F79: mov     edx, 5
 * 00000001402E9F7E: mov     [rsp+68h+var_28], rsi
 * 00000001402E9F83: lea     rax, [rsp+68h+arg_48]
 * 00000001402E9F8B: mov     [rsp+68h+var_30], rax
 * 00000001402E9F90: mov     rcx, rdi
 * 00000001402E9F93: lea     rax, [rsp+68h+arg_40]
 * 00000001402E9F9B: mov     [rsp+68h+var_38], 8
 * 00000001402E9FA4: mov     [rsp+68h+var_40], rax
 * 00000001402E9FA9: lea     r8d, [rdx+4]
 * 00000001402E9FAD: mov     [rsp+68h+var_48], r14w
 * 00000001402E9FB3: call    cs:__imp_WppAutoLogTrace
 * 00000001402E9FBA: nop     dword ptr [rax+rax+00h]
 * 00000001402E9FBF: lea     r11, [rsp+68h+var_8]
 * 00000001402E9FC4: mov     rbx, [r11+10h]
 * 00000001402E9FC8: mov     rsi, [r11+18h]
 * 00000001402E9FCC: mov     rdi, [r11+20h]
 * 00000001402E9FD0: mov     rsp, r11
 * 00000001402E9FD3: pop     r14
 * 00000001402E9FD5: retn
 */
