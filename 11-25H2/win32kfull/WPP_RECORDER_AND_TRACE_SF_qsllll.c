/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x1402E1D50
 * Callers:
 *     GetWndScrollBarInfoCrossProcess @ 0x14021B954 (GetWndScrollBarInfoCrossProcess.c)
 *     xxxGetScrollBarInfo @ 0x14025E4F4 (xxxGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x1402E1D50
 * Reason: Hex-Rays returned no pseudocode for 0x1402E1D50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E1D50: mov     [rsp+arg_0], rbx
 * 00000001402E1D55: mov     [rsp+arg_8], rbp
 * 00000001402E1D5A: mov     [rsp+arg_10], rsi
 * 00000001402E1D5F: push    rdi
 * 00000001402E1D60: push    r12
 * 00000001402E1D62: push    r14
 * 00000001402E1D64: sub     rsp, 90h
 * 00000001402E1D6B: mov     rdi, [rsp+0A8h+arg_48]
 * 00000001402E1D73: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E1D77: movzx   ebp, [rsp+0A8h+arg_30]
 * 00000001402E1D7F: mov     sil, r8b
 * 00000001402E1D82: lea     r8, aNull; "NULL"
 * 00000001402E1D89: mov     r14, r9
 * 00000001402E1D8C: mov     r11, rcx
 * 00000001402E1D8F: lea     r12d, [rbx+5]
 * 00000001402E1D93: test    dl, dl
 * 00000001402E1D95: jz      loc_1402E1E5A
 * 00000001402E1D9B: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E1DA2: test    rdi, rdi
 * 00000001402E1DA5: jz      short loc_1402E1DB8
 * 00000001402E1DA7: mov     rax, rbx
 * 00000001402E1DAA: inc     rax
 * 00000001402E1DAD: cmp     byte ptr [rdi+rax], 0
 * 00000001402E1DB1: jnz     short loc_1402E1DAA
 * 00000001402E1DB3: inc     rax
 * 00000001402E1DB6: jmp     short loc_1402E1DBD
 * 00000001402E1DB8: mov     eax, 5
 * 00000001402E1DBD: test    rdi, rdi
 * 00000001402E1DC0: lea     rdx, [rsp+0A8h+arg_68]
 * 00000001402E1DC8: mov     rcx, rdi
 * 00000001402E1DCB: mov     r9d, ebp
 * 00000001402E1DCE: cmovz   rcx, r8
 * 00000001402E1DD2: and     [rsp+0A8h+var_28], 0
 * 00000001402E1DDB: mov     r8, [rsp+0A8h+arg_38]
 * 00000001402E1DE3: mov     [rsp+0A8h+var_30], r12
 * 00000001402E1DE8: mov     [rsp+0A8h+var_38], rdx
 * 00000001402E1DED: lea     rdx, [rsp+0A8h+arg_60]
 * 00000001402E1DF5: mov     [rsp+0A8h+var_40], r12
 * 00000001402E1DFA: mov     [rsp+0A8h+var_48], rdx
 * 00000001402E1DFF: lea     rdx, [rsp+0A8h+arg_58]
 * 00000001402E1E07: mov     [rsp+0A8h+var_50], r12
 * 00000001402E1E0C: mov     [rsp+0A8h+var_58], rdx
 * 00000001402E1E11: lea     rdx, [rsp+0A8h+arg_50]
 * 00000001402E1E19: mov     [rsp+0A8h+var_60], r12
 * 00000001402E1E1E: mov     [rsp+0A8h+var_68], rdx
 * 00000001402E1E23: mov     edx, 2Bh ; '+'
 * 00000001402E1E28: mov     [rsp+0A8h+var_70], rax
 * 00000001402E1E2D: lea     rax, [rsp+0A8h+arg_40]
 * 00000001402E1E35: mov     [rsp+0A8h+var_78], rcx
 * 00000001402E1E3A: mov     rcx, r11
 * 00000001402E1E3D: mov     [rsp+0A8h+var_80], 8
 * 00000001402E1E46: mov     [rsp+0A8h+var_88], rax
 * 00000001402E1E4B: mov     rax, r10
 * 00000001402E1E4E: call    _guard_dispatch_icall
 * 00000001402E1E53: lea     r8, aNull; "NULL"
 * 00000001402E1E5A: test    sil, sil
 * 00000001402E1E5D: jz      loc_1402E1F1B
 * 00000001402E1E63: test    rdi, rdi
 * 00000001402E1E66: jz      short loc_1402E1E76
 * 00000001402E1E68: inc     rbx
 * 00000001402E1E6B: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E1E6F: jnz     short loc_1402E1E68
 * 00000001402E1E71: inc     rbx
 * 00000001402E1E74: jmp     short loc_1402E1E7B
 * 00000001402E1E76: mov     ebx, 5
 * 00000001402E1E7B: mov     r9, [rsp+0A8h+arg_38]
 * 00000001402E1E83: lea     rax, [rsp+0A8h+arg_68]
 * 00000001402E1E8B: test    rdi, rdi
 * 00000001402E1E8E: mov     edx, r12d
 * 00000001402E1E91: mov     rcx, r14
 * 00000001402E1E94: cmovz   rdi, r8
 * 00000001402E1E98: and     [rsp+0A8h+var_20], 0
 * 00000001402E1EA1: mov     [rsp+0A8h+var_28], r12
 * 00000001402E1EA9: mov     r8d, 9
 * 00000001402E1EAF: mov     [rsp+0A8h+var_30], rax
 * 00000001402E1EB4: lea     rax, [rsp+0A8h+arg_60]
 * 00000001402E1EBC: mov     [rsp+0A8h+var_38], r12
 * 00000001402E1EC1: mov     [rsp+0A8h+var_40], rax
 * 00000001402E1EC6: lea     rax, [rsp+0A8h+arg_58]
 * 00000001402E1ECE: mov     [rsp+0A8h+var_48], r12
 * 00000001402E1ED3: mov     [rsp+0A8h+var_50], rax
 * 00000001402E1ED8: lea     rax, [rsp+0A8h+arg_50]
 * 00000001402E1EE0: mov     [rsp+0A8h+var_58], r12
 * 00000001402E1EE5: mov     [rsp+0A8h+var_60], rax
 * 00000001402E1EEA: lea     rax, [rsp+0A8h+arg_40]
 * 00000001402E1EF2: mov     [rsp+0A8h+var_68], rbx
 * 00000001402E1EF7: mov     [rsp+0A8h+var_70], rdi
 * 00000001402E1EFC: mov     [rsp+0A8h+var_78], 8
 * 00000001402E1F05: mov     [rsp+0A8h+var_80], rax
 * 00000001402E1F0A: mov     word ptr [rsp+0A8h+var_88], bp
 * 00000001402E1F0F: call    cs:__imp_WppAutoLogTrace
 * 00000001402E1F16: nop     dword ptr [rax+rax+00h]
 * 00000001402E1F1B: lea     r11, [rsp+0A8h+var_18]
 * 00000001402E1F23: mov     rbx, [r11+20h]
 * 00000001402E1F27: mov     rbp, [r11+28h]
 * 00000001402E1F2B: mov     rsi, [r11+30h]
 * 00000001402E1F2F: mov     rsp, r11
 * 00000001402E1F32: pop     r14
 * 00000001402E1F34: pop     r12
 * 00000001402E1F36: pop     rdi
 * 00000001402E1F37: retn
 */
