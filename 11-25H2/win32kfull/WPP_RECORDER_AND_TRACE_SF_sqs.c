/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402C984C
 * Callers:
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402C64F0 (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402C984C
 * Reason: Hex-Rays returned no pseudocode for 0x1402C984C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C984C: mov     rax, rsp
 * 00000001402C984F: mov     [rax+8], rbx
 * 00000001402C9853: mov     [rax+10h], rbp
 * 00000001402C9857: mov     [rax+18h], rsi
 * 00000001402C985B: mov     [rax+20h], rdi
 * 00000001402C985F: push    r12
 * 00000001402C9861: push    r13
 * 00000001402C9863: push    r14
 * 00000001402C9865: sub     rsp, 60h
 * 00000001402C9869: mov     rsi, [rsp+78h+arg_40]
 * 00000001402C9871: lea     r13, aNull; "NULL"
 * 00000001402C9878: mov     rdi, [rsp+78h+arg_50]
 * 00000001402C9880: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C9884: mov     r14, r9
 * 00000001402C9887: mov     bpl, r8b
 * 00000001402C988A: mov     r11, rcx
 * 00000001402C988D: mov     r9d, 8Dh
 * 00000001402C9893: lea     r12d, [rbx+6]
 * 00000001402C9897: test    dl, dl
 * 00000001402C9899: jz      loc_1402C9939
 * 00000001402C989F: mov     r10, cs:pfnWppTraceMessage
 * 00000001402C98A6: test    rdi, rdi
 * 00000001402C98A9: jz      short loc_1402C98BC
 * 00000001402C98AB: mov     rdx, rbx
 * 00000001402C98AE: inc     rdx
 * 00000001402C98B1: cmp     byte ptr [rdi+rdx], 0
 * 00000001402C98B5: jnz     short loc_1402C98AE
 * 00000001402C98B7: inc     rdx
 * 00000001402C98BA: jmp     short loc_1402C98BF
 * 00000001402C98BC: mov     rdx, r12
 * 00000001402C98BF: test    rdi, rdi
 * 00000001402C98C2: mov     r8, rdi
 * 00000001402C98C5: cmovz   r8, r13
 * 00000001402C98C9: test    rsi, rsi
 * 00000001402C98CC: jz      short loc_1402C98DF
 * 00000001402C98CE: mov     rax, rbx
 * 00000001402C98D1: inc     rax
 * 00000001402C98D4: cmp     byte ptr [rsi+rax], 0
 * 00000001402C98D8: jnz     short loc_1402C98D1
 * 00000001402C98DA: inc     rax
 * 00000001402C98DD: jmp     short loc_1402C98E2
 * 00000001402C98DF: mov     rax, r12
 * 00000001402C98E2: test    rsi, rsi
 * 00000001402C98E5: mov     rcx, rsi
 * 00000001402C98E8: cmovz   rcx, r13
 * 00000001402C98EC: and     [rsp+78h+var_28], 0
 * 00000001402C98F2: mov     [rsp+78h+var_30], rdx
 * 00000001402C98F7: lea     rdx, [rsp+78h+arg_48]
 * 00000001402C98FF: mov     [rsp+78h+var_38], r8
 * 00000001402C9904: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C990B: mov     [rsp+78h+var_40], 8
 * 00000001402C9914: mov     [rsp+78h+var_48], rdx
 * 00000001402C9919: mov     edx, 2Bh ; '+'
 * 00000001402C991E: mov     [rsp+78h+var_50], rax
 * 00000001402C9923: mov     rax, r10
 * 00000001402C9926: mov     [rsp+78h+var_58], rcx
 * 00000001402C992B: mov     rcx, r11
 * 00000001402C992E: call    _guard_dispatch_icall
 * 00000001402C9933: mov     r9d, 8Dh
 * 00000001402C9939: test    bpl, bpl
 * 00000001402C993C: jz      loc_1402C99D4
 * 00000001402C9942: test    rdi, rdi
 * 00000001402C9945: jz      short loc_1402C9958
 * 00000001402C9947: mov     rax, rbx
 * 00000001402C994A: inc     rax
 * 00000001402C994D: cmp     byte ptr [rdi+rax], 0
 * 00000001402C9951: jnz     short loc_1402C994A
 * 00000001402C9953: inc     rax
 * 00000001402C9956: jmp     short loc_1402C995B
 * 00000001402C9958: mov     rax, r12
 * 00000001402C995B: test    rdi, rdi
 * 00000001402C995E: cmovz   rdi, r13
 * 00000001402C9962: test    rsi, rsi
 * 00000001402C9965: jz      short loc_1402C9975
 * 00000001402C9967: inc     rbx
 * 00000001402C996A: cmp     byte ptr [rsi+rbx], 0
 * 00000001402C996E: jnz     short loc_1402C9967
 * 00000001402C9970: inc     rbx
 * 00000001402C9973: jmp     short loc_1402C9978
 * 00000001402C9975: mov     rbx, r12
 * 00000001402C9978: test    rsi, rsi
 * 00000001402C997B: mov     edx, 4
 * 00000001402C9980: mov     rcx, r14
 * 00000001402C9983: cmovz   rsi, r13
 * 00000001402C9987: and     [rsp+78h+var_20], 0
 * 00000001402C998D: mov     [rsp+78h+var_28], rax
 * 00000001402C9992: lea     rax, [rsp+78h+arg_48]
 * 00000001402C999A: mov     [rsp+78h+var_30], rdi
 * 00000001402C999F: lea     r8d, [rdx+3]
 * 00000001402C99A3: mov     [rsp+78h+var_38], 8
 * 00000001402C99AC: mov     [rsp+78h+var_40], rax
 * 00000001402C99B1: mov     [rsp+78h+var_48], rbx
 * 00000001402C99B6: mov     [rsp+78h+var_50], rsi
 * 00000001402C99BB: mov     word ptr [rsp+78h+var_58], r9w
 * 00000001402C99C1: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C99C8: call    cs:__imp_WppAutoLogTrace
 * 00000001402C99CF: nop     dword ptr [rax+rax+00h]
 * 00000001402C99D4: lea     r11, [rsp+78h+var_18]
 * 00000001402C99D9: mov     rbx, [r11+20h]
 * 00000001402C99DD: mov     rbp, [r11+28h]
 * 00000001402C99E1: mov     rsi, [r11+30h]
 * 00000001402C99E5: mov     rdi, [r11+38h]
 * 00000001402C99E9: mov     rsp, r11
 * 00000001402C99EC: pop     r14
 * 00000001402C99EE: pop     r13
 * 00000001402C99F0: pop     r12
 * 00000001402C99F2: retn
 */
