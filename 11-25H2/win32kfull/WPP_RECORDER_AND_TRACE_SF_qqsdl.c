/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqsdl @ 0x1402E709C
 * Callers:
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqsdl @ 0x1402E709C
 * Reason: Hex-Rays returned no pseudocode for 0x1402E709C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E709C: mov     [rsp+arg_0], rbx
 * 00000001402E70A1: mov     [rsp+arg_8], rbp
 * 00000001402E70A6: mov     [rsp+arg_10], rsi
 * 00000001402E70AB: push    rdi
 * 00000001402E70AC: push    r12
 * 00000001402E70AE: push    r13
 * 00000001402E70B0: sub     rsp, 80h
 * 00000001402E70B7: mov     rdi, [rsp+98h+arg_50]
 * 00000001402E70BF: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E70C3: mov     rbp, r9
 * 00000001402E70C6: mov     sil, r8b
 * 00000001402E70C9: lea     r8, aNull; "NULL"
 * 00000001402E70D0: mov     r11, rcx
 * 00000001402E70D3: lea     r9d, [rbx+25h]
 * 00000001402E70D7: lea     r12d, [rbx+5]
 * 00000001402E70DB: lea     r13d, [rbx+9]
 * 00000001402E70DF: test    dl, dl
 * 00000001402E70E1: jz      loc_1402E718F
 * 00000001402E70E7: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E70EE: test    rdi, rdi
 * 00000001402E70F1: jz      short loc_1402E7104
 * 00000001402E70F3: mov     rax, rbx
 * 00000001402E70F6: inc     rax
 * 00000001402E70F9: cmp     byte ptr [rdi+rax], 0
 * 00000001402E70FD: jnz     short loc_1402E70F6
 * 00000001402E70FF: inc     rax
 * 00000001402E7102: jmp     short loc_1402E7109
 * 00000001402E7104: mov     eax, 5
 * 00000001402E7109: test    rdi, rdi
 * 00000001402E710C: lea     rdx, [rsp+98h+arg_60]
 * 00000001402E7114: mov     rcx, rdi
 * 00000001402E7117: cmovz   rcx, r8
 * 00000001402E711B: and     [rsp+98h+var_28], 0
 * 00000001402E7121: mov     [rsp+98h+var_30], r12
 * 00000001402E7126: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E712D: mov     [rsp+98h+var_38], rdx
 * 00000001402E7132: lea     rdx, [rsp+98h+arg_58]
 * 00000001402E713A: mov     [rsp+98h+var_40], r12
 * 00000001402E713F: mov     [rsp+98h+var_48], rdx
 * 00000001402E7144: mov     edx, 2Bh ; '+'
 * 00000001402E7149: mov     [rsp+98h+var_50], rax
 * 00000001402E714E: lea     rax, [rsp+98h+arg_48]
 * 00000001402E7156: mov     [rsp+98h+var_58], rcx
 * 00000001402E715B: mov     rcx, r11
 * 00000001402E715E: mov     [rsp+98h+var_60], r13
 * 00000001402E7163: mov     [rsp+98h+var_68], rax
 * 00000001402E7168: lea     rax, [rsp+98h+arg_40]
 * 00000001402E7170: mov     [rsp+98h+var_70], r13
 * 00000001402E7175: mov     [rsp+98h+var_78], rax
 * 00000001402E717A: mov     rax, r10
 * 00000001402E717D: call    _guard_dispatch_icall
 * 00000001402E7182: lea     r8, aNull; "NULL"
 * 00000001402E7189: mov     r9d, 24h ; '$'
 * 00000001402E718F: test    sil, sil
 * 00000001402E7192: jz      loc_1402E7234
 * 00000001402E7198: test    rdi, rdi
 * 00000001402E719B: jz      short loc_1402E71AB
 * 00000001402E719D: inc     rbx
 * 00000001402E71A0: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E71A4: jnz     short loc_1402E719D
 * 00000001402E71A6: inc     rbx
 * 00000001402E71A9: jmp     short loc_1402E71B0
 * 00000001402E71AB: mov     ebx, 5
 * 00000001402E71B0: test    rdi, rdi
 * 00000001402E71B3: lea     rax, [rsp+98h+arg_60]
 * 00000001402E71BB: mov     edx, r12d
 * 00000001402E71BE: mov     rcx, rbp
 * 00000001402E71C1: cmovz   rdi, r8
 * 00000001402E71C5: and     [rsp+98h+var_20], 0
 * 00000001402E71CB: mov     [rsp+98h+var_28], r12
 * 00000001402E71D0: mov     r8d, 9
 * 00000001402E71D6: mov     [rsp+98h+var_30], rax
 * 00000001402E71DB: lea     rax, [rsp+98h+arg_58]
 * 00000001402E71E3: mov     [rsp+98h+var_38], r12
 * 00000001402E71E8: mov     [rsp+98h+var_40], rax
 * 00000001402E71ED: lea     rax, [rsp+98h+arg_48]
 * 00000001402E71F5: mov     [rsp+98h+var_48], rbx
 * 00000001402E71FA: mov     [rsp+98h+var_50], rdi
 * 00000001402E71FF: mov     [rsp+98h+var_58], r13
 * 00000001402E7204: mov     [rsp+98h+var_60], rax
 * 00000001402E7209: lea     rax, [rsp+98h+arg_40]
 * 00000001402E7211: mov     [rsp+98h+var_68], r13
 * 00000001402E7216: mov     [rsp+98h+var_70], rax
 * 00000001402E721B: mov     word ptr [rsp+98h+var_78], r9w
 * 00000001402E7221: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E7228: call    cs:__imp_WppAutoLogTrace
 * 00000001402E722F: nop     dword ptr [rax+rax+00h]
 * 00000001402E7234: lea     r11, [rsp+98h+var_18]
 * 00000001402E723C: mov     rbx, [r11+20h]
 * 00000001402E7240: mov     rbp, [r11+28h]
 * 00000001402E7244: mov     rsi, [r11+30h]
 * 00000001402E7248: mov     rsp, r11
 * 00000001402E724B: pop     r13
 * 00000001402E724D: pop     r12
 * 00000001402E724F: pop     rdi
 * 00000001402E7250: retn
 */
