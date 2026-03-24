/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqss @ 0x140284454
 * Callers:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dqss @ 0x140284454
 * Reason: Hex-Rays returned no pseudocode for 0x140284454
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140284454: mov     rax, rsp
 * 0000000140284457: mov     [rax+8], rbx
 * 000000014028445B: mov     [rax+10h], rbp
 * 000000014028445F: mov     [rax+18h], rsi
 * 0000000140284463: mov     [rax+20h], rdi
 * 0000000140284467: push    r12
 * 0000000140284469: push    r13
 * 000000014028446B: push    r14
 * 000000014028446D: sub     rsp, 70h
 * 0000000140284471: mov     rsi, [rsp+88h+arg_50]
 * 0000000140284479: lea     r13, aNull; "NULL"
 * 0000000140284480: mov     rdi, [rsp+88h+arg_58]
 * 0000000140284488: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014028448C: mov     r14, r9
 * 000000014028448F: mov     bpl, r8b
 * 0000000140284492: mov     r11, rcx
 * 0000000140284495: lea     r12d, [rbx+6]
 * 0000000140284499: lea     r9d, [rbx+18h]
 * 000000014028449D: test    dl, dl
 * 000000014028449F: jz      loc_140284555
 * 00000001402844A5: mov     r10, cs:pfnWppTraceMessage
 * 00000001402844AC: test    rdi, rdi
 * 00000001402844AF: jz      short loc_1402844C2
 * 00000001402844B1: mov     rdx, rbx
 * 00000001402844B4: inc     rdx
 * 00000001402844B7: cmp     byte ptr [rdi+rdx], 0
 * 00000001402844BB: jnz     short loc_1402844B4
 * 00000001402844BD: inc     rdx
 * 00000001402844C0: jmp     short loc_1402844C5
 * 00000001402844C2: mov     rdx, r12
 * 00000001402844C5: test    rdi, rdi
 * 00000001402844C8: mov     r8, rdi
 * 00000001402844CB: cmovz   r8, r13
 * 00000001402844CF: test    rsi, rsi
 * 00000001402844D2: jz      short loc_1402844E5
 * 00000001402844D4: mov     rax, rbx
 * 00000001402844D7: inc     rax
 * 00000001402844DA: cmp     byte ptr [rsi+rax], 0
 * 00000001402844DE: jnz     short loc_1402844D7
 * 00000001402844E0: inc     rax
 * 00000001402844E3: jmp     short loc_1402844E8
 * 00000001402844E5: mov     rax, r12
 * 00000001402844E8: test    rsi, rsi
 * 00000001402844EB: mov     rcx, rsi
 * 00000001402844EE: cmovz   rcx, r13
 * 00000001402844F2: and     [rsp+88h+var_28], 0
 * 00000001402844F8: mov     [rsp+88h+var_30], rdx
 * 00000001402844FD: mov     edx, 2Bh ; '+'
 * 0000000140284502: mov     [rsp+88h+var_38], r8
 * 0000000140284507: lea     r8, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 000000014028450E: mov     [rsp+88h+var_40], rax
 * 0000000140284513: lea     rax, [rsp+88h+arg_48]
 * 000000014028451B: mov     [rsp+88h+var_48], rcx
 * 0000000140284520: mov     rcx, r11
 * 0000000140284523: mov     [rsp+88h+var_50], 8
 * 000000014028452C: mov     [rsp+88h+var_58], rax
 * 0000000140284531: lea     rax, [rsp+88h+arg_40]
 * 0000000140284539: mov     [rsp+88h+var_60], 4
 * 0000000140284542: mov     [rsp+88h+var_68], rax
 * 0000000140284547: mov     rax, r10
 * 000000014028454A: call    _guard_dispatch_icall
 * 000000014028454F: mov     r9d, 17h
 * 0000000140284555: test    bpl, bpl
 * 0000000140284558: jz      loc_140284606
 * 000000014028455E: test    rdi, rdi
 * 0000000140284561: jz      short loc_140284574
 * 0000000140284563: mov     rax, rbx
 * 0000000140284566: inc     rax
 * 0000000140284569: cmp     byte ptr [rdi+rax], 0
 * 000000014028456D: jnz     short loc_140284566
 * 000000014028456F: inc     rax
 * 0000000140284572: jmp     short loc_140284577
 * 0000000140284574: mov     rax, r12
 * 0000000140284577: test    rdi, rdi
 * 000000014028457A: cmovz   rdi, r13
 * 000000014028457E: test    rsi, rsi
 * 0000000140284581: jz      short loc_140284591
 * 0000000140284583: inc     rbx
 * 0000000140284586: cmp     byte ptr [rsi+rbx], 0
 * 000000014028458A: jnz     short loc_140284583
 * 000000014028458C: inc     rbx
 * 000000014028458F: jmp     short loc_140284594
 * 0000000140284591: mov     rbx, r12
 * 0000000140284594: test    rsi, rsi
 * 0000000140284597: mov     r8d, 4
 * 000000014028459D: mov     edx, r12d
 * 00000001402845A0: mov     rcx, r14
 * 00000001402845A3: cmovz   rsi, r13
 * 00000001402845A7: and     [rsp+88h+var_20], 0
 * 00000001402845AD: mov     [rsp+88h+var_28], rax
 * 00000001402845B2: lea     rax, [rsp+88h+arg_48]
 * 00000001402845BA: mov     [rsp+88h+var_30], rdi
 * 00000001402845BF: mov     [rsp+88h+var_38], rbx
 * 00000001402845C4: mov     [rsp+88h+var_40], rsi
 * 00000001402845C9: mov     [rsp+88h+var_48], 8
 * 00000001402845D2: mov     [rsp+88h+var_50], rax
 * 00000001402845D7: lea     rax, [rsp+88h+arg_40]
 * 00000001402845DF: mov     [rsp+88h+var_58], 4
 * 00000001402845E8: mov     [rsp+88h+var_60], rax
 * 00000001402845ED: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001402845F3: lea     r9, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 00000001402845FA: call    cs:__imp_WppAutoLogTrace
 * 0000000140284601: nop     dword ptr [rax+rax+00h]
 * 0000000140284606: lea     r11, [rsp+88h+var_18]
 * 000000014028460B: mov     rbx, [r11+20h]
 * 000000014028460F: mov     rbp, [r11+28h]
 * 0000000140284613: mov     rsi, [r11+30h]
 * 0000000140284617: mov     rdi, [r11+38h]
 * 000000014028461B: mov     rsp, r11
 * 000000014028461E: pop     r14
 * 0000000140284620: pop     r13
 * 0000000140284622: pop     r12
 * 0000000140284624: retn
 */
