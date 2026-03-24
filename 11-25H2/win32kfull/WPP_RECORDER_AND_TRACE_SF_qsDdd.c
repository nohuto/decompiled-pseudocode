/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402E7258
 * Callers:
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4340 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402E7258
 * Reason: Hex-Rays returned no pseudocode for 0x1402E7258
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E7258: mov     [rsp+arg_0], rbx
 * 00000001402E725D: mov     [rsp+arg_8], rbp
 * 00000001402E7262: mov     [rsp+arg_10], rsi
 * 00000001402E7267: push    rdi
 * 00000001402E7268: push    r12
 * 00000001402E726A: push    r14
 * 00000001402E726C: sub     rsp, 80h
 * 00000001402E7273: mov     rdi, [rsp+98h+arg_48]
 * 00000001402E727B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E727F: movzx   ebp, [rsp+98h+arg_30]
 * 00000001402E7287: mov     sil, r8b
 * 00000001402E728A: lea     r8, aNull; "NULL"
 * 00000001402E7291: mov     r14, r9
 * 00000001402E7294: mov     r11, rcx
 * 00000001402E7297: lea     r12d, [rbx+5]
 * 00000001402E729B: test    dl, dl
 * 00000001402E729D: jz      loc_1402E734C
 * 00000001402E72A3: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E72AA: test    rdi, rdi
 * 00000001402E72AD: jz      short loc_1402E72C0
 * 00000001402E72AF: mov     rax, rbx
 * 00000001402E72B2: inc     rax
 * 00000001402E72B5: cmp     byte ptr [rdi+rax], 0
 * 00000001402E72B9: jnz     short loc_1402E72B2
 * 00000001402E72BB: inc     rax
 * 00000001402E72BE: jmp     short loc_1402E72C5
 * 00000001402E72C0: mov     eax, 5
 * 00000001402E72C5: test    rdi, rdi
 * 00000001402E72C8: lea     rdx, [rsp+98h+arg_60]
 * 00000001402E72D0: mov     rcx, rdi
 * 00000001402E72D3: mov     r9d, ebp
 * 00000001402E72D6: cmovz   rcx, r8
 * 00000001402E72DA: and     [rsp+98h+var_28], 0
 * 00000001402E72E0: mov     [rsp+98h+var_30], r12
 * 00000001402E72E5: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E72EC: mov     [rsp+98h+var_38], rdx
 * 00000001402E72F1: lea     rdx, [rsp+98h+arg_58]
 * 00000001402E72F9: mov     [rsp+98h+var_40], r12
 * 00000001402E72FE: mov     [rsp+98h+var_48], rdx
 * 00000001402E7303: lea     rdx, [rsp+98h+arg_50]
 * 00000001402E730B: mov     [rsp+98h+var_50], r12
 * 00000001402E7310: mov     [rsp+98h+var_58], rdx
 * 00000001402E7315: mov     edx, 2Bh ; '+'
 * 00000001402E731A: mov     [rsp+98h+var_60], rax
 * 00000001402E731F: lea     rax, [rsp+98h+arg_40]
 * 00000001402E7327: mov     [rsp+98h+var_68], rcx
 * 00000001402E732C: mov     rcx, r11
 * 00000001402E732F: mov     [rsp+98h+var_70], 8
 * 00000001402E7338: mov     [rsp+98h+var_78], rax
 * 00000001402E733D: mov     rax, r10
 * 00000001402E7340: call    _guard_dispatch_icall
 * 00000001402E7345: lea     r8, aNull; "NULL"
 * 00000001402E734C: test    sil, sil
 * 00000001402E734F: jz      loc_1402E73F4
 * 00000001402E7355: test    rdi, rdi
 * 00000001402E7358: jz      short loc_1402E7368
 * 00000001402E735A: inc     rbx
 * 00000001402E735D: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E7361: jnz     short loc_1402E735A
 * 00000001402E7363: inc     rbx
 * 00000001402E7366: jmp     short loc_1402E736D
 * 00000001402E7368: mov     ebx, 5
 * 00000001402E736D: test    rdi, rdi
 * 00000001402E7370: lea     rax, [rsp+98h+arg_60]
 * 00000001402E7378: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E737F: mov     edx, r12d
 * 00000001402E7382: cmovz   rdi, r8
 * 00000001402E7386: mov     rcx, r14
 * 00000001402E7389: and     [rsp+98h+var_20], 0
 * 00000001402E738F: mov     r8d, 9
 * 00000001402E7395: mov     [rsp+98h+var_28], r12
 * 00000001402E739A: mov     [rsp+98h+var_30], rax
 * 00000001402E739F: lea     rax, [rsp+98h+arg_58]
 * 00000001402E73A7: mov     [rsp+98h+var_38], r12
 * 00000001402E73AC: mov     [rsp+98h+var_40], rax
 * 00000001402E73B1: lea     rax, [rsp+98h+arg_50]
 * 00000001402E73B9: mov     [rsp+98h+var_48], r12
 * 00000001402E73BE: mov     [rsp+98h+var_50], rax
 * 00000001402E73C3: lea     rax, [rsp+98h+arg_40]
 * 00000001402E73CB: mov     [rsp+98h+var_58], rbx
 * 00000001402E73D0: mov     [rsp+98h+var_60], rdi
 * 00000001402E73D5: mov     [rsp+98h+var_68], 8
 * 00000001402E73DE: mov     [rsp+98h+var_70], rax
 * 00000001402E73E3: mov     word ptr [rsp+98h+var_78], bp
 * 00000001402E73E8: call    cs:__imp_WppAutoLogTrace
 * 00000001402E73EF: nop     dword ptr [rax+rax+00h]
 * 00000001402E73F4: lea     r11, [rsp+98h+var_18]
 * 00000001402E73FC: mov     rbx, [r11+20h]
 * 00000001402E7400: mov     rbp, [r11+28h]
 * 00000001402E7404: mov     rsi, [r11+30h]
 * 00000001402E7408: mov     rsp, r11
 * 00000001402E740B: pop     r14
 * 00000001402E740D: pop     r12
 * 00000001402E740F: pop     rdi
 * 00000001402E7410: retn
 */
