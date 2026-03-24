/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddsdddd @ 0x1402E5E70
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140184C84 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddsdddd @ 0x1402E5E70
 * Reason: Hex-Rays returned no pseudocode for 0x1402E5E70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E5E70: mov     rax, rsp
 * 00000001402E5E73: mov     [rax+8], rbx
 * 00000001402E5E77: mov     [rax+10h], rsi
 * 00000001402E5E7B: mov     [rax+18h], rdi
 * 00000001402E5E7F: push    rbp
 * 00000001402E5E80: push    r12
 * 00000001402E5E82: push    r14
 * 00000001402E5E84: lea     rbp, [rax-1Fh]
 * 00000001402E5E88: sub     rsp, 0B0h
 * 00000001402E5E8F: mov     rdi, [rbp+17h+arg_58]
 * 00000001402E5E93: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E5E97: mov     r14, r9
 * 00000001402E5E9A: mov     sil, r8b
 * 00000001402E5E9D: lea     r8, aNull; "NULL"
 * 00000001402E5EA4: mov     r11, rcx
 * 00000001402E5EA7: lea     r9d, [rbx+0Dh]
 * 00000001402E5EAB: lea     r12d, [rbx+5]
 * 00000001402E5EAF: test    dl, dl
 * 00000001402E5EB1: jz      loc_1402E5F98
 * 00000001402E5EB7: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E5EBE: test    rdi, rdi
 * 00000001402E5EC1: jz      short loc_1402E5ED4
 * 00000001402E5EC3: mov     rax, rbx
 * 00000001402E5EC6: inc     rax
 * 00000001402E5EC9: cmp     byte ptr [rdi+rax], 0
 * 00000001402E5ECD: jnz     short loc_1402E5EC6
 * 00000001402E5ECF: inc     rax
 * 00000001402E5ED2: jmp     short loc_1402E5ED9
 * 00000001402E5ED4: mov     eax, 5
 * 00000001402E5ED9: test    rdi, rdi
 * 00000001402E5EDC: lea     rdx, [rbp+17h+arg_78]
 * 00000001402E5EE3: mov     rcx, rdi
 * 00000001402E5EE6: cmovz   rcx, r8
 * 00000001402E5EEA: and     [rsp+0C0h+var_20], 0
 * 00000001402E5EF3: mov     [rsp+0C0h+var_28], r12
 * 00000001402E5EFB: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5F02: mov     [rsp+0C0h+var_30], rdx
 * 00000001402E5F0A: lea     rdx, [rbp+17h+arg_70]
 * 00000001402E5F11: mov     [rsp+0C0h+var_38], r12
 * 00000001402E5F19: mov     [rsp+0C0h+var_40], rdx
 * 00000001402E5F21: lea     rdx, [rbp+17h+arg_68]
 * 00000001402E5F28: mov     [rsp+0C0h+var_48], r12
 * 00000001402E5F2D: mov     [rsp+0C0h+var_50], rdx
 * 00000001402E5F32: lea     rdx, [rbp+17h+arg_60]
 * 00000001402E5F39: mov     [rsp+0C0h+var_58], r12
 * 00000001402E5F3E: mov     [rsp+0C0h+var_60], rdx
 * 00000001402E5F43: mov     edx, 2Bh ; '+'
 * 00000001402E5F48: mov     [rsp+0C0h+var_68], rax
 * 00000001402E5F4D: lea     rax, [rbp+17h+arg_50]
 * 00000001402E5F51: mov     [rsp+0C0h+var_70], rcx
 * 00000001402E5F56: mov     rcx, r11
 * 00000001402E5F59: mov     [rsp+0C0h+var_78], r12
 * 00000001402E5F5E: mov     [rsp+0C0h+var_80], rax
 * 00000001402E5F63: lea     rax, [rbp+17h+arg_48]
 * 00000001402E5F67: mov     [rsp+0C0h+var_88], r12
 * 00000001402E5F6C: mov     [rsp+0C0h+var_90], rax
 * 00000001402E5F71: lea     rax, [rbp+17h+arg_40]
 * 00000001402E5F75: mov     [rsp+0C0h+var_98], 8
 * 00000001402E5F7E: mov     [rsp+0C0h+var_A0], rax
 * 00000001402E5F83: mov     rax, r10
 * 00000001402E5F86: call    _guard_dispatch_icall
 * 00000001402E5F8B: lea     r8, aNull; "NULL"
 * 00000001402E5F92: mov     r9d, 0Ch
 * 00000001402E5F98: test    sil, sil
 * 00000001402E5F9B: jz      loc_1402E6079
 * 00000001402E5FA1: test    rdi, rdi
 * 00000001402E5FA4: jz      short loc_1402E5FB4
 * 00000001402E5FA6: inc     rbx
 * 00000001402E5FA9: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E5FAD: jnz     short loc_1402E5FA6
 * 00000001402E5FAF: inc     rbx
 * 00000001402E5FB2: jmp     short loc_1402E5FB9
 * 00000001402E5FB4: mov     ebx, 5
 * 00000001402E5FB9: test    rdi, rdi
 * 00000001402E5FBC: lea     rax, [rbp+17h+arg_78]
 * 00000001402E5FC3: mov     edx, r12d
 * 00000001402E5FC6: mov     rcx, r14
 * 00000001402E5FC9: cmovz   rdi, r8
 * 00000001402E5FCD: and     qword ptr [rsp+0C0h+var_18], 0
 * 00000001402E5FD6: mov     [rsp+0C0h+var_20], r12
 * 00000001402E5FDE: mov     r8d, 9
 * 00000001402E5FE4: mov     [rsp+0C0h+var_28], rax
 * 00000001402E5FEC: lea     rax, [rbp+17h+arg_70]
 * 00000001402E5FF3: mov     [rsp+0C0h+var_30], r12
 * 00000001402E5FFB: mov     [rsp+0C0h+var_38], rax
 * 00000001402E6003: lea     rax, [rbp+17h+arg_68]
 * 00000001402E600A: mov     [rsp+0C0h+var_40], r12
 * 00000001402E6012: mov     [rsp+0C0h+var_48], rax
 * 00000001402E6017: lea     rax, [rbp+17h+arg_60]
 * 00000001402E601E: mov     [rsp+0C0h+var_50], r12
 * 00000001402E6023: mov     [rsp+0C0h+var_58], rax
 * 00000001402E6028: lea     rax, [rbp+17h+arg_50]
 * 00000001402E602C: mov     [rsp+0C0h+var_60], rbx
 * 00000001402E6031: mov     [rsp+0C0h+var_68], rdi
 * 00000001402E6036: mov     [rsp+0C0h+var_70], r12
 * 00000001402E603B: mov     [rsp+0C0h+var_78], rax
 * 00000001402E6040: lea     rax, [rbp+17h+arg_48]
 * 00000001402E6044: mov     [rsp+0C0h+var_80], r12
 * 00000001402E6049: mov     [rsp+0C0h+var_88], rax
 * 00000001402E604E: lea     rax, [rbp+17h+arg_40]
 * 00000001402E6052: mov     [rsp+0C0h+var_90], 8
 * 00000001402E605B: mov     [rsp+0C0h+var_98], rax
 * 00000001402E6060: mov     word ptr [rsp+0C0h+var_A0], r9w
 * 00000001402E6066: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E606D: call    cs:__imp_WppAutoLogTrace
 * 00000001402E6074: nop     dword ptr [rax+rax+00h]
 * 00000001402E6079: lea     r11, [rsp+0C0h+var_10]
 * 00000001402E6081: mov     rbx, [r11+20h]
 * 00000001402E6085: mov     rsi, [r11+28h]
 * 00000001402E6089: mov     rdi, [r11+30h]
 * 00000001402E608D: mov     rsp, r11
 * 00000001402E6090: pop     r14
 * 00000001402E6092: pop     r12
 * 00000001402E6094: pop     rbp
 * 00000001402E6095: retn
 */
