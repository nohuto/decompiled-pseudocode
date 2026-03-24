/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402C95B8
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027E84 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402C95B8
 * Reason: Hex-Rays returned no pseudocode for 0x1402C95B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C95B8: mov     [rsp+arg_8], rbx
 * 00000001402C95BD: mov     [rsp+arg_18], r9
 * 00000001402C95C2: mov     [rsp+arg_0], rcx
 * 00000001402C95C7: push    rbp
 * 00000001402C95C8: push    rsi
 * 00000001402C95C9: push    rdi
 * 00000001402C95CA: push    r12
 * 00000001402C95CC: push    r13
 * 00000001402C95CE: push    r14
 * 00000001402C95D0: push    r15
 * 00000001402C95D2: sub     rsp, 80h
 * 00000001402C95D9: mov     r14, [rsp+0B8h+arg_48]
 * 00000001402C95E1: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C95E5: mov     rbp, [rsp+0B8h+arg_50]
 * 00000001402C95ED: mov     r12b, r8b
 * 00000001402C95F0: mov     rsi, [rsp+0B8h+arg_58]
 * 00000001402C95F8: lea     r8, aNull; "NULL"
 * 00000001402C95FF: mov     rdi, [rsp+0B8h+arg_60]
 * 00000001402C9607: xor     r11d, r11d
 * 00000001402C960A: mov     [rsp+0B8h+arg_38], r8
 * 00000001402C9612: mov     r10, r9
 * 00000001402C9615: lea     eax, [rbx+6]
 * 00000001402C9618: lea     r9d, [rbx+1Fh]
 * 00000001402C961C: test    dl, dl
 * 00000001402C961E: jz      loc_1402C973E
 * 00000001402C9624: mov     r13, cs:pfnWppTraceMessage
 * 00000001402C962B: test    rdi, rdi
 * 00000001402C962E: jz      short loc_1402C9641
 * 00000001402C9630: mov     r9, rbx
 * 00000001402C9633: inc     r9
 * 00000001402C9636: cmp     [rdi+r9], r11b
 * 00000001402C963A: jnz     short loc_1402C9633
 * 00000001402C963C: inc     r9
 * 00000001402C963F: jmp     short loc_1402C9644
 * 00000001402C9641: mov     r9, rax
 * 00000001402C9644: test    rdi, rdi
 * 00000001402C9647: mov     r15, rdi
 * 00000001402C964A: cmovz   r15, r8
 * 00000001402C964E: test    rsi, rsi
 * 00000001402C9651: jz      short loc_1402C9664
 * 00000001402C9653: mov     r8, rbx
 * 00000001402C9656: inc     r8
 * 00000001402C9659: cmp     [rsi+r8], r11b
 * 00000001402C965D: jnz     short loc_1402C9656
 * 00000001402C965F: inc     r8
 * 00000001402C9662: jmp     short loc_1402C9667
 * 00000001402C9664: mov     r8, rax
 * 00000001402C9667: test    rsi, rsi
 * 00000001402C966A: lea     rcx, aNull; "NULL"
 * 00000001402C9671: mov     r11, rsi
 * 00000001402C9674: cmovz   r11, rcx
 * 00000001402C9678: test    rbp, rbp
 * 00000001402C967B: jz      short loc_1402C968E
 * 00000001402C967D: mov     rdx, rbx
 * 00000001402C9680: inc     rdx
 * 00000001402C9683: cmp     byte ptr [rdx+rbp], 0
 * 00000001402C9687: jnz     short loc_1402C9680
 * 00000001402C9689: inc     rdx
 * 00000001402C968C: jmp     short loc_1402C9691
 * 00000001402C968E: mov     rdx, rax
 * 00000001402C9691: test    rbp, rbp
 * 00000001402C9694: mov     r10, rbp
 * 00000001402C9697: cmovz   r10, rcx
 * 00000001402C969B: test    r14, r14
 * 00000001402C969E: jz      short loc_1402C96B0
 * 00000001402C96A0: mov     rax, rbx
 * 00000001402C96A3: inc     rax
 * 00000001402C96A6: cmp     byte ptr [r14+rax], 0
 * 00000001402C96AB: jnz     short loc_1402C96A3
 * 00000001402C96AD: inc     rax
 * 00000001402C96B0: test    r14, r14
 * 00000001402C96B3: mov     rcx, r14
 * 00000001402C96B6: cmovz   rcx, [rsp+0B8h+arg_38]
 * 00000001402C96BF: and     [rsp+0B8h+var_48], 0
 * 00000001402C96C5: mov     [rsp+0B8h+var_50], r9
 * 00000001402C96CA: mov     r9d, 1Eh
 * 00000001402C96D0: mov     [rsp+0B8h+var_58], r15
 * 00000001402C96D5: mov     [rsp+0B8h+var_60], r8
 * 00000001402C96DA: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C96E1: mov     [rsp+0B8h+var_68], r11
 * 00000001402C96E6: mov     [rsp+0B8h+var_70], rdx
 * 00000001402C96EB: lea     edx, [r9+0Dh]
 * 00000001402C96EF: mov     [rsp+0B8h+var_78], r10
 * 00000001402C96F4: mov     [rsp+0B8h+var_80], rax
 * 00000001402C96F9: lea     rax, [rsp+0B8h+arg_40]
 * 00000001402C9701: mov     [rsp+0B8h+var_88], rcx
 * 00000001402C9706: mov     rcx, [rsp+0B8h+arg_0]
 * 00000001402C970E: mov     [rsp+0B8h+var_90], 8
 * 00000001402C9717: mov     [rsp+0B8h+var_98], rax
 * 00000001402C971C: mov     rax, r13
 * 00000001402C971F: call    _guard_dispatch_icall
 * 00000001402C9724: mov     r10, [rsp+0B8h+arg_18]
 * 00000001402C972C: lea     r8, aNull; "NULL"
 * 00000001402C9733: xor     r11d, r11d
 * 00000001402C9736: lea     eax, [r11+5]
 * 00000001402C973A: lea     r9d, [r11+1Eh]
 * 00000001402C973E: test    r12b, r12b
 * 00000001402C9741: jz      loc_1402C9829
 * 00000001402C9747: test    rdi, rdi
 * 00000001402C974A: jz      short loc_1402C975D
 * 00000001402C974C: mov     rdx, rbx
 * 00000001402C974F: inc     rdx
 * 00000001402C9752: cmp     [rdi+rdx], r11b
 * 00000001402C9756: jnz     short loc_1402C974F
 * 00000001402C9758: inc     rdx
 * 00000001402C975B: jmp     short loc_1402C9760
 * 00000001402C975D: mov     rdx, rax
 * 00000001402C9760: test    rdi, rdi
 * 00000001402C9763: cmovz   rdi, r8
 * 00000001402C9767: test    rsi, rsi
 * 00000001402C976A: jz      short loc_1402C977D
 * 00000001402C976C: mov     rcx, rbx
 * 00000001402C976F: inc     rcx
 * 00000001402C9772: cmp     [rsi+rcx], r11b
 * 00000001402C9776: jnz     short loc_1402C976F
 * 00000001402C9778: inc     rcx
 * 00000001402C977B: jmp     short loc_1402C9780
 * 00000001402C977D: mov     rcx, rax
 * 00000001402C9780: test    rsi, rsi
 * 00000001402C9783: cmovz   rsi, r8
 * 00000001402C9787: test    rbp, rbp
 * 00000001402C978A: jz      short loc_1402C979E
 * 00000001402C978C: mov     rax, rbx
 * 00000001402C978F: inc     rax
 * 00000001402C9792: cmp     [rax+rbp], r11b
 * 00000001402C9796: jnz     short loc_1402C978F
 * 00000001402C9798: inc     rax
 * 00000001402C979B: test    rbp, rbp
 * 00000001402C979E: cmovz   rbp, r8
 * 00000001402C97A2: test    r14, r14
 * 00000001402C97A5: jz      short loc_1402C97B5
 * 00000001402C97A7: inc     rbx
 * 00000001402C97AA: cmp     [r14+rbx], r11b
 * 00000001402C97AE: jnz     short loc_1402C97A7
 * 00000001402C97B0: inc     rbx
 * 00000001402C97B3: jmp     short loc_1402C97BA
 * 00000001402C97B5: mov     ebx, 5
 * 00000001402C97BA: mov     [rsp+0B8h+var_40], r11
 * 00000001402C97BF: test    r14, r14
 * 00000001402C97C2: mov     [rsp+0B8h+var_48], rdx
 * 00000001402C97C7: mov     edx, 3
 * 00000001402C97CC: mov     [rsp+0B8h+var_50], rdi
 * 00000001402C97D1: cmovz   r14, r8
 * 00000001402C97D5: mov     [rsp+0B8h+var_58], rcx
 * 00000001402C97DA: mov     rcx, r10
 * 00000001402C97DD: mov     [rsp+0B8h+var_60], rsi
 * 00000001402C97E2: mov     [rsp+0B8h+var_68], rax
 * 00000001402C97E7: lea     r8d, [rdx+4]
 * 00000001402C97EB: mov     [rsp+0B8h+var_70], rbp
 * 00000001402C97F0: lea     rax, [rsp+0B8h+arg_40]
 * 00000001402C97F8: mov     [rsp+0B8h+var_78], rbx
 * 00000001402C97FD: mov     [rsp+0B8h+var_80], r14
 * 00000001402C9802: mov     [rsp+0B8h+var_88], 8
 * 00000001402C980B: mov     [rsp+0B8h+var_90], rax
 * 00000001402C9810: mov     word ptr [rsp+0B8h+var_98], r9w
 * 00000001402C9816: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C981D: call    cs:__imp_WppAutoLogTrace
 * 00000001402C9824: nop     dword ptr [rax+rax+00h]
 * 00000001402C9829: mov     rbx, [rsp+0B8h+arg_8]
 * 00000001402C9831: add     rsp, 80h
 * 00000001402C9838: pop     r15
 * 00000001402C983A: pop     r14
 * 00000001402C983C: pop     r13
 * 00000001402C983E: pop     r12
 * 00000001402C9840: pop     rdi
 * 00000001402C9841: pop     rsi
 * 00000001402C9842: pop     rbp
 * 00000001402C9843: retn
 */
