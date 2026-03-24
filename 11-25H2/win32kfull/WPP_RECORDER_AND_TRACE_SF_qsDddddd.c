/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsdddddd @ 0x1402E79F4
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E326C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qsdddddd @ 0x1402E79F4
 * Reason: Hex-Rays returned no pseudocode for 0x1402E79F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E79F4: mov     rax, rsp
 * 00000001402E79F7: mov     [rax+8], rbx
 * 00000001402E79FB: mov     [rax+10h], rsi
 * 00000001402E79FF: mov     [rax+18h], rdi
 * 00000001402E7A03: push    rbp
 * 00000001402E7A04: push    r12
 * 00000001402E7A06: push    r14
 * 00000001402E7A08: lea     rbp, [rax-1Fh]
 * 00000001402E7A0C: sub     rsp, 0B0h
 * 00000001402E7A13: mov     rdi, [rbp+17h+arg_48]
 * 00000001402E7A17: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E7A1B: mov     r14, r9
 * 00000001402E7A1E: mov     sil, r8b
 * 00000001402E7A21: lea     r8, aNull; "NULL"
 * 00000001402E7A28: mov     r11, rcx
 * 00000001402E7A2B: lea     r9d, [rbx+14h]
 * 00000001402E7A2F: lea     r12d, [rbx+5]
 * 00000001402E7A33: test    dl, dl
 * 00000001402E7A35: jz      loc_1402E7B1C
 * 00000001402E7A3B: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E7A42: test    rdi, rdi
 * 00000001402E7A45: jz      short loc_1402E7A58
 * 00000001402E7A47: mov     rax, rbx
 * 00000001402E7A4A: inc     rax
 * 00000001402E7A4D: cmp     byte ptr [rdi+rax], 0
 * 00000001402E7A51: jnz     short loc_1402E7A4A
 * 00000001402E7A53: inc     rax
 * 00000001402E7A56: jmp     short loc_1402E7A5D
 * 00000001402E7A58: mov     eax, 5
 * 00000001402E7A5D: test    rdi, rdi
 * 00000001402E7A60: lea     rdx, [rbp+17h+arg_78]
 * 00000001402E7A67: mov     rcx, rdi
 * 00000001402E7A6A: cmovz   rcx, r8
 * 00000001402E7A6E: and     [rsp+0C0h+var_20], 0
 * 00000001402E7A77: mov     [rsp+0C0h+var_28], r12
 * 00000001402E7A7F: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E7A86: mov     [rsp+0C0h+var_30], rdx
 * 00000001402E7A8E: lea     rdx, [rbp+17h+arg_70]
 * 00000001402E7A95: mov     [rsp+0C0h+var_38], r12
 * 00000001402E7A9D: mov     [rsp+0C0h+var_40], rdx
 * 00000001402E7AA5: lea     rdx, [rbp+17h+arg_68]
 * 00000001402E7AAC: mov     [rsp+0C0h+var_48], r12
 * 00000001402E7AB1: mov     [rsp+0C0h+var_50], rdx
 * 00000001402E7AB6: lea     rdx, [rbp+17h+arg_60]
 * 00000001402E7ABD: mov     [rsp+0C0h+var_58], r12
 * 00000001402E7AC2: mov     [rsp+0C0h+var_60], rdx
 * 00000001402E7AC7: lea     rdx, [rbp+17h+arg_58]
 * 00000001402E7ACB: mov     [rsp+0C0h+var_68], r12
 * 00000001402E7AD0: mov     [rsp+0C0h+var_70], rdx
 * 00000001402E7AD5: lea     rdx, [rbp+17h+arg_50]
 * 00000001402E7AD9: mov     [rsp+0C0h+var_78], r12
 * 00000001402E7ADE: mov     [rsp+0C0h+var_80], rdx
 * 00000001402E7AE3: mov     edx, 2Bh ; '+'
 * 00000001402E7AE8: mov     [rsp+0C0h+var_88], rax
 * 00000001402E7AED: lea     rax, [rbp+17h+arg_40]
 * 00000001402E7AF1: mov     [rsp+0C0h+var_90], rcx
 * 00000001402E7AF6: mov     rcx, r11
 * 00000001402E7AF9: mov     [rsp+0C0h+var_98], 8
 * 00000001402E7B02: mov     [rsp+0C0h+var_A0], rax
 * 00000001402E7B07: mov     rax, r10
 * 00000001402E7B0A: call    _guard_dispatch_icall
 * 00000001402E7B0F: lea     r8, aNull; "NULL"
 * 00000001402E7B16: mov     r9d, 13h
 * 00000001402E7B1C: test    sil, sil
 * 00000001402E7B1F: jz      loc_1402E7BFD
 * 00000001402E7B25: test    rdi, rdi
 * 00000001402E7B28: jz      short loc_1402E7B38
 * 00000001402E7B2A: inc     rbx
 * 00000001402E7B2D: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E7B31: jnz     short loc_1402E7B2A
 * 00000001402E7B33: inc     rbx
 * 00000001402E7B36: jmp     short loc_1402E7B3D
 * 00000001402E7B38: mov     ebx, 5
 * 00000001402E7B3D: test    rdi, rdi
 * 00000001402E7B40: lea     rax, [rbp+17h+arg_78]
 * 00000001402E7B47: mov     edx, r12d
 * 00000001402E7B4A: mov     rcx, r14
 * 00000001402E7B4D: cmovz   rdi, r8
 * 00000001402E7B51: and     qword ptr [rsp+0C0h+var_18], 0
 * 00000001402E7B5A: mov     [rsp+0C0h+var_20], r12
 * 00000001402E7B62: mov     r8d, 9
 * 00000001402E7B68: mov     [rsp+0C0h+var_28], rax
 * 00000001402E7B70: lea     rax, [rbp+17h+arg_70]
 * 00000001402E7B77: mov     [rsp+0C0h+var_30], r12
 * 00000001402E7B7F: mov     [rsp+0C0h+var_38], rax
 * 00000001402E7B87: lea     rax, [rbp+17h+arg_68]
 * 00000001402E7B8E: mov     [rsp+0C0h+var_40], r12
 * 00000001402E7B96: mov     [rsp+0C0h+var_48], rax
 * 00000001402E7B9B: lea     rax, [rbp+17h+arg_60]
 * 00000001402E7BA2: mov     [rsp+0C0h+var_50], r12
 * 00000001402E7BA7: mov     [rsp+0C0h+var_58], rax
 * 00000001402E7BAC: lea     rax, [rbp+17h+arg_58]
 * 00000001402E7BB0: mov     [rsp+0C0h+var_60], r12
 * 00000001402E7BB5: mov     [rsp+0C0h+var_68], rax
 * 00000001402E7BBA: lea     rax, [rbp+17h+arg_50]
 * 00000001402E7BBE: mov     [rsp+0C0h+var_70], r12
 * 00000001402E7BC3: mov     [rsp+0C0h+var_78], rax
 * 00000001402E7BC8: lea     rax, [rbp+17h+arg_40]
 * 00000001402E7BCC: mov     [rsp+0C0h+var_80], rbx
 * 00000001402E7BD1: mov     [rsp+0C0h+var_88], rdi
 * 00000001402E7BD6: mov     [rsp+0C0h+var_90], 8
 * 00000001402E7BDF: mov     [rsp+0C0h+var_98], rax
 * 00000001402E7BE4: mov     word ptr [rsp+0C0h+var_A0], r9w
 * 00000001402E7BEA: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E7BF1: call    cs:__imp_WppAutoLogTrace
 * 00000001402E7BF8: nop     dword ptr [rax+rax+00h]
 * 00000001402E7BFD: lea     r11, [rsp+0C0h+var_10]
 * 00000001402E7C05: mov     rbx, [r11+20h]
 * 00000001402E7C09: mov     rsi, [r11+28h]
 * 00000001402E7C0D: mov     rdi, [r11+30h]
 * 00000001402E7C11: mov     rsp, r11
 * 00000001402E7C14: pop     r14
 * 00000001402E7C16: pop     r12
 * 00000001402E7C18: pop     rbp
 * 00000001402E7C19: retn
 */
