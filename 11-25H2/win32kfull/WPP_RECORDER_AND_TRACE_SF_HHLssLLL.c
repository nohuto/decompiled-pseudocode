/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HHLssLLL @ 0x1402B0A24
 * Callers:
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402B0648 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HHLssLLL @ 0x1402B0A24
 * Reason: Hex-Rays returned no pseudocode for 0x1402B0A24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402B0A24: mov     rax, rsp
 * 00000001402B0A27: mov     [rax+8], rbx
 * 00000001402B0A2B: mov     [rax+10h], rsi
 * 00000001402B0A2F: mov     [rax+18h], rdi
 * 00000001402B0A33: mov     [rax+20h], r13
 * 00000001402B0A37: push    rbp
 * 00000001402B0A38: push    r14
 * 00000001402B0A3A: push    r15
 * 00000001402B0A3C: lea     rbp, [rax-1Fh]
 * 00000001402B0A40: sub     rsp, 0B0h
 * 00000001402B0A47: mov     rsi, [rbp+17h+arg_58]
 * 00000001402B0A4B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402B0A4F: mov     rdi, [rbp+17h+arg_60]
 * 00000001402B0A56: mov     r11, rcx
 * 00000001402B0A59: lea     rcx, aNull; "NULL"
 * 00000001402B0A60: mov     r15, r9
 * 00000001402B0A63: mov     [rbp+17h+arg_38], rcx
 * 00000001402B0A67: mov     r14b, r8b
 * 00000001402B0A6A: lea     r13d, [rbx+6]
 * 00000001402B0A6E: lea     r8d, [rbx+0Dh]
 * 00000001402B0A72: lea     r9d, [rbx+5]
 * 00000001402B0A76: test    dl, dl
 * 00000001402B0A78: jz      loc_1402B0B8D
 * 00000001402B0A7E: mov     r10, cs:pfnWppTraceMessage
 * 00000001402B0A85: test    rdi, rdi
 * 00000001402B0A88: jz      short loc_1402B0A9B
 * 00000001402B0A8A: mov     rdx, rbx
 * 00000001402B0A8D: inc     rdx
 * 00000001402B0A90: cmp     byte ptr [rdi+rdx], 0
 * 00000001402B0A94: jnz     short loc_1402B0A8D
 * 00000001402B0A96: inc     rdx
 * 00000001402B0A99: jmp     short loc_1402B0A9E
 * 00000001402B0A9B: mov     rdx, r13
 * 00000001402B0A9E: test    rdi, rdi
 * 00000001402B0AA1: mov     r8, rdi
 * 00000001402B0AA4: cmovz   r8, rcx
 * 00000001402B0AA8: test    rsi, rsi
 * 00000001402B0AAB: jz      short loc_1402B0ABE
 * 00000001402B0AAD: mov     rax, rbx
 * 00000001402B0AB0: inc     rax
 * 00000001402B0AB3: cmp     byte ptr [rsi+rax], 0
 * 00000001402B0AB7: jnz     short loc_1402B0AB0
 * 00000001402B0AB9: inc     rax
 * 00000001402B0ABC: jmp     short loc_1402B0AC1
 * 00000001402B0ABE: mov     rax, r13
 * 00000001402B0AC1: test    rsi, rsi
 * 00000001402B0AC4: mov     rcx, rsi
 * 00000001402B0AC7: cmovz   rcx, [rbp+17h+arg_38]
 * 00000001402B0ACC: and     [rsp+0C0h+var_20], 0
 * 00000001402B0AD5: mov     [rsp+0C0h+var_28], r9
 * 00000001402B0ADD: lea     r9, [rbp+17h+arg_78]
 * 00000001402B0AE4: mov     [rsp+0C0h+var_30], r9
 * 00000001402B0AEC: lea     r9, [rbp+17h+arg_70]
 * 00000001402B0AF3: mov     [rsp+0C0h+var_38], 4
 * 00000001402B0AFF: mov     [rsp+0C0h+var_40], r9
 * 00000001402B0B07: lea     r9, [rbp+17h+arg_68]
 * 00000001402B0B0E: mov     [rsp+0C0h+var_48], 4
 * 00000001402B0B17: mov     [rsp+0C0h+var_50], r9
 * 00000001402B0B1C: mov     [rsp+0C0h+var_58], rdx
 * 00000001402B0B21: mov     [rsp+0C0h+var_60], r8
 * 00000001402B0B26: lea     r8, WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids
 * 00000001402B0B2D: mov     [rsp+0C0h+var_68], rax
 * 00000001402B0B32: lea     rax, [rbp+17h+arg_50]
 * 00000001402B0B36: mov     [rsp+0C0h+var_70], rcx
 * 00000001402B0B3B: mov     ecx, 2
 * 00000001402B0B40: mov     [rsp+0C0h+var_78], 4
 * 00000001402B0B49: mov     [rsp+0C0h+var_80], rax
 * 00000001402B0B4E: lea     rax, [rbp+17h+arg_48]
 * 00000001402B0B52: mov     [rsp+0C0h+var_88], rcx
 * 00000001402B0B57: mov     [rsp+0C0h+var_90], rax
 * 00000001402B0B5C: lea     r9d, [rcx+0Ah]
 * 00000001402B0B60: mov     [rsp+0C0h+var_98], rcx
 * 00000001402B0B65: lea     rax, [rbp+17h+arg_40]
 * 00000001402B0B69: mov     [rsp+0C0h+var_A0], rax
 * 00000001402B0B6E: lea     edx, [rcx+29h]
 * 00000001402B0B71: mov     rax, r10
 * 00000001402B0B74: mov     rcx, r11
 * 00000001402B0B77: call    _guard_dispatch_icall
 * 00000001402B0B7C: mov     r9d, 4
 * 00000001402B0B82: lea     rcx, aNull; "NULL"
 * 00000001402B0B89: lea     r8d, [r9+8]
 * 00000001402B0B8D: test    r14b, r14b
 * 00000001402B0B90: jz      loc_1402B0C89
 * 00000001402B0B96: test    rdi, rdi
 * 00000001402B0B99: jz      short loc_1402B0BAC
 * 00000001402B0B9B: mov     rax, rbx
 * 00000001402B0B9E: inc     rax
 * 00000001402B0BA1: cmp     byte ptr [rdi+rax], 0
 * 00000001402B0BA5: jnz     short loc_1402B0B9E
 * 00000001402B0BA7: inc     rax
 * 00000001402B0BAA: jmp     short loc_1402B0BAF
 * 00000001402B0BAC: mov     rax, r13
 * 00000001402B0BAF: test    rdi, rdi
 * 00000001402B0BB2: cmovz   rdi, rcx
 * 00000001402B0BB6: test    rsi, rsi
 * 00000001402B0BB9: jz      short loc_1402B0BC9
 * 00000001402B0BBB: inc     rbx
 * 00000001402B0BBE: cmp     byte ptr [rsi+rbx], 0
 * 00000001402B0BC2: jnz     short loc_1402B0BBB
 * 00000001402B0BC4: inc     rbx
 * 00000001402B0BC7: jmp     short loc_1402B0BCC
 * 00000001402B0BC9: mov     rbx, r13
 * 00000001402B0BCC: test    rsi, rsi
 * 00000001402B0BCF: mov     edx, r13d
 * 00000001402B0BD2: cmovz   rsi, rcx
 * 00000001402B0BD6: and     qword ptr [rsp+0C0h+var_18], 0
 * 00000001402B0BDF: mov     [rsp+0C0h+var_20], r9
 * 00000001402B0BE7: lea     rcx, [rbp+17h+arg_78]
 * 00000001402B0BEE: mov     [rsp+0C0h+var_28], rcx
 * 00000001402B0BF6: lea     rcx, [rbp+17h+arg_70]
 * 00000001402B0BFD: mov     [rsp+0C0h+var_30], r9
 * 00000001402B0C05: mov     [rsp+0C0h+var_38], rcx
 * 00000001402B0C0D: lea     rcx, [rbp+17h+arg_68]
 * 00000001402B0C14: mov     [rsp+0C0h+var_40], r9
 * 00000001402B0C1C: mov     [rsp+0C0h+var_48], rcx
 * 00000001402B0C21: mov     rcx, r15
 * 00000001402B0C24: mov     [rsp+0C0h+var_50], rax
 * 00000001402B0C29: lea     rax, [rbp+17h+arg_50]
 * 00000001402B0C2D: mov     [rsp+0C0h+var_58], rdi
 * 00000001402B0C32: mov     [rsp+0C0h+var_60], rbx
 * 00000001402B0C37: mov     [rsp+0C0h+var_68], rsi
 * 00000001402B0C3C: mov     [rsp+0C0h+var_70], r9
 * 00000001402B0C41: lea     r9, WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids
 * 00000001402B0C48: mov     [rsp+0C0h+var_78], rax
 * 00000001402B0C4D: lea     rax, [rbp+17h+arg_48]
 * 00000001402B0C51: mov     [rsp+0C0h+var_80], 2
 * 00000001402B0C5A: mov     [rsp+0C0h+var_88], rax
 * 00000001402B0C5F: lea     rax, [rbp+17h+arg_40]
 * 00000001402B0C63: mov     [rsp+0C0h+var_90], 2
 * 00000001402B0C6C: mov     [rsp+0C0h+var_98], rax
 * 00000001402B0C71: mov     word ptr [rsp+0C0h+var_A0], r8w
 * 00000001402B0C77: mov     r8d, 0Ah
 * 00000001402B0C7D: call    cs:__imp_WppAutoLogTrace
 * 00000001402B0C84: nop     dword ptr [rax+rax+00h]
 * 00000001402B0C89: lea     r11, [rsp+0C0h+var_10]
 * 00000001402B0C91: mov     rbx, [r11+20h]
 * 00000001402B0C95: mov     rsi, [r11+28h]
 * 00000001402B0C99: mov     rdi, [r11+30h]
 * 00000001402B0C9D: mov     r13, [r11+38h]
 * 00000001402B0CA1: mov     rsp, r11
 * 00000001402B0CA4: pop     r15
 * 00000001402B0CA6: pop     r14
 * 00000001402B0CA8: pop     rbp
 * 00000001402B0CA9: retn
 */
