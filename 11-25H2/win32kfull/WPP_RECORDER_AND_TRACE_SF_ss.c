/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ss @ 0x1402AC6DC
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ss @ 0x1402AC6DC
 * Reason: Hex-Rays returned no pseudocode for 0x1402AC6DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402AC6DC: mov     rax, rsp
 * 00000001402AC6DF: mov     [rax+8], rbx
 * 00000001402AC6E3: mov     [rax+10h], rbp
 * 00000001402AC6E7: mov     [rax+18h], rsi
 * 00000001402AC6EB: mov     [rax+20h], rdi
 * 00000001402AC6EF: push    r12
 * 00000001402AC6F1: push    r13
 * 00000001402AC6F3: push    r14
 * 00000001402AC6F5: sub     rsp, 50h
 * 00000001402AC6F9: mov     rsi, [rsp+68h+arg_40]
 * 00000001402AC701: lea     r13, aNull; "NULL"
 * 00000001402AC708: mov     rdi, [rsp+68h+arg_48]
 * 00000001402AC710: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402AC714: mov     r14, r9
 * 00000001402AC717: mov     bpl, r8b
 * 00000001402AC71A: mov     r11, rcx
 * 00000001402AC71D: lea     r12d, [rbx+6]
 * 00000001402AC721: lea     r9d, [rbx+5Ch]
 * 00000001402AC725: test    dl, dl
 * 00000001402AC727: jz      loc_1402AC7B1
 * 00000001402AC72D: mov     r10, cs:pfnWppTraceMessage
 * 00000001402AC734: test    rdi, rdi
 * 00000001402AC737: jz      short loc_1402AC74A
 * 00000001402AC739: mov     rdx, rbx
 * 00000001402AC73C: inc     rdx
 * 00000001402AC73F: cmp     byte ptr [rdi+rdx], 0
 * 00000001402AC743: jnz     short loc_1402AC73C
 * 00000001402AC745: inc     rdx
 * 00000001402AC748: jmp     short loc_1402AC74D
 * 00000001402AC74A: mov     rdx, r12
 * 00000001402AC74D: test    rdi, rdi
 * 00000001402AC750: mov     r8, rdi
 * 00000001402AC753: cmovz   r8, r13
 * 00000001402AC757: test    rsi, rsi
 * 00000001402AC75A: jz      short loc_1402AC76D
 * 00000001402AC75C: mov     rax, rbx
 * 00000001402AC75F: inc     rax
 * 00000001402AC762: cmp     byte ptr [rsi+rax], 0
 * 00000001402AC766: jnz     short loc_1402AC75F
 * 00000001402AC768: inc     rax
 * 00000001402AC76B: jmp     short loc_1402AC770
 * 00000001402AC76D: mov     rax, r12
 * 00000001402AC770: test    rsi, rsi
 * 00000001402AC773: mov     rcx, rsi
 * 00000001402AC776: cmovz   rcx, r13
 * 00000001402AC77A: and     [rsp+68h+var_28], 0
 * 00000001402AC780: mov     [rsp+68h+var_30], rdx
 * 00000001402AC785: mov     edx, 2Bh ; '+'
 * 00000001402AC78A: mov     [rsp+68h+var_38], r8
 * 00000001402AC78F: lea     r8, WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids
 * 00000001402AC796: mov     [rsp+68h+var_40], rax
 * 00000001402AC79B: mov     rax, r10
 * 00000001402AC79E: mov     [rsp+68h+var_48], rcx
 * 00000001402AC7A3: mov     rcx, r11
 * 00000001402AC7A6: call    _guard_dispatch_icall
 * 00000001402AC7AB: mov     r9d, 5Bh ; '['
 * 00000001402AC7B1: test    bpl, bpl
 * 00000001402AC7B4: jz      short loc_1402AC832
 * 00000001402AC7B6: test    rdi, rdi
 * 00000001402AC7B9: jz      short loc_1402AC7CC
 * 00000001402AC7BB: mov     rax, rbx
 * 00000001402AC7BE: inc     rax
 * 00000001402AC7C1: cmp     byte ptr [rdi+rax], 0
 * 00000001402AC7C5: jnz     short loc_1402AC7BE
 * 00000001402AC7C7: inc     rax
 * 00000001402AC7CA: jmp     short loc_1402AC7CF
 * 00000001402AC7CC: mov     rax, r12
 * 00000001402AC7CF: test    rdi, rdi
 * 00000001402AC7D2: cmovz   rdi, r13
 * 00000001402AC7D6: test    rsi, rsi
 * 00000001402AC7D9: jz      short loc_1402AC7E9
 * 00000001402AC7DB: inc     rbx
 * 00000001402AC7DE: cmp     byte ptr [rsi+rbx], 0
 * 00000001402AC7E2: jnz     short loc_1402AC7DB
 * 00000001402AC7E4: inc     rbx
 * 00000001402AC7E7: jmp     short loc_1402AC7EC
 * 00000001402AC7E9: mov     rbx, r12
 * 00000001402AC7EC: test    rsi, rsi
 * 00000001402AC7EF: mov     r8d, 1
 * 00000001402AC7F5: mov     edx, r12d
 * 00000001402AC7F8: mov     rcx, r14
 * 00000001402AC7FB: cmovz   rsi, r13
 * 00000001402AC7FF: and     [rsp+68h+var_20], 0
 * 00000001402AC805: mov     [rsp+68h+var_28], rax
 * 00000001402AC80A: mov     [rsp+68h+var_30], rdi
 * 00000001402AC80F: mov     [rsp+68h+var_38], rbx
 * 00000001402AC814: mov     [rsp+68h+var_40], rsi
 * 00000001402AC819: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001402AC81F: lea     r9, WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids
 * 00000001402AC826: call    cs:__imp_WppAutoLogTrace
 * 00000001402AC82D: nop     dword ptr [rax+rax+00h]
 * 00000001402AC832: lea     r11, [rsp+68h+var_18]
 * 00000001402AC837: mov     rbx, [r11+20h]
 * 00000001402AC83B: mov     rbp, [r11+28h]
 * 00000001402AC83F: mov     rsi, [r11+30h]
 * 00000001402AC843: mov     rdi, [r11+38h]
 * 00000001402AC847: mov     rsp, r11
 * 00000001402AC84A: pop     r14
 * 00000001402AC84C: pop     r13
 * 00000001402AC84E: pop     r12
 * 00000001402AC850: retn
 */
