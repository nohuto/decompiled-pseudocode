/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D4838 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D4AD8 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4
 * Reason: Hex-Rays returned no pseudocode for 0x1401F16E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401F16E4: mov     [rsp+arg_0], rbx
 * 00000001401F16E9: mov     [rsp+arg_8], rbp
 * 00000001401F16EE: mov     [rsp+arg_10], rsi
 * 00000001401F16F3: push    rdi
 * 00000001401F16F4: push    r12
 * 00000001401F16F6: push    r13
 * 00000001401F16F8: push    r14
 * 00000001401F16FA: push    r15
 * 00000001401F16FC: sub     rsp, 40h
 * 00000001401F1700: mov     rbx, [rsp+68h+arg_40]
 * 00000001401F1708: lea     r13, aNull_0; "NULL"
 * 00000001401F170F: movzx   r14d, [rsp+68h+arg_30]
 * 00000001401F1718: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401F171C: xor     r12d, r12d
 * 00000001401F171F: mov     r15, r9
 * 00000001401F1722: mov     bpl, r8b
 * 00000001401F1725: mov     r11, rcx
 * 00000001401F1728: lea     esi, [rdi+0Bh]
 * 00000001401F172B: test    dl, dl
 * 00000001401F172D: jnz     short loc_1401F17AD
 * 00000001401F172F: test    bpl, bpl
 * 00000001401F1732: jz      short loc_1401F178E
 * 00000001401F1734: test    rbx, rbx
 * 00000001401F1737: jz      short loc_1401F174E
 * 00000001401F1739: inc     rdi
 * 00000001401F173C: cmp     [rbx+rdi*2], r12w
 * 00000001401F1741: jnz     short loc_1401F1739
 * 00000001401F1743: lea     rsi, ds:2[rdi*2]
 * 00000001401F174B: test    rbx, rbx
 * 00000001401F174E: mov     r9, [rsp+68h+arg_38]
 * 00000001401F1756: cmovz   rbx, r13
 * 00000001401F175A: mov     r8d, [rsp+68h+arg_28]
 * 00000001401F1762: mov     rcx, r15
 * 00000001401F1765: movzx   edx, [rsp+68h+arg_20]
 * 00000001401F176D: mov     [rsp+68h+var_30], r12
 * 00000001401F1772: mov     [rsp+68h+var_38], rsi
 * 00000001401F1777: mov     [rsp+68h+var_40], rbx
 * 00000001401F177C: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001401F1782: call    cs:__imp_WppAutoLogTrace
 * 00000001401F1789: nop     dword ptr [rax+rax+00h]
 * 00000001401F178E: lea     r11, [rsp+68h+var_28]
 * 00000001401F1793: mov     rbx, [r11+30h]
 * 00000001401F1797: mov     rbp, [r11+38h]
 * 00000001401F179B: mov     rsi, [r11+40h]
 * 00000001401F179F: mov     rsp, r11
 * 00000001401F17A2: pop     r15
 * 00000001401F17A4: pop     r14
 * 00000001401F17A6: pop     r13
 * 00000001401F17A8: pop     r12
 * 00000001401F17AA: pop     rdi
 * 00000001401F17AB: retn
 * 00000001401F17AD: mov     r10, cs:pfnWppTraceMessage
 * 00000001401F17B4: test    rbx, rbx
 * 00000001401F17B7: jz      short loc_1401F17D0
 * 00000001401F17B9: mov     rax, rdi
 * 00000001401F17BC: inc     rax
 * 00000001401F17BF: cmp     [rbx+rax*2], r12w
 * 00000001401F17C4: jnz     short loc_1401F17BC
 * 00000001401F17C6: lea     rax, ds:2[rax*2]
 * 00000001401F17CE: jmp     short loc_1401F17D3
 * 00000001401F17D0: mov     rax, rsi
 * 00000001401F17D3: mov     r8, [rsp+68h+arg_38]
 * 00000001401F17DB: test    rbx, rbx
 * 00000001401F17DE: mov     [rsp+68h+var_38], r12
 * 00000001401F17E3: mov     rcx, rbx
 * 00000001401F17E6: cmovz   rcx, r13
 * 00000001401F17EA: mov     [rsp+68h+var_40], rax
 * 00000001401F17EF: mov     [rsp+68h+var_48], rcx
 * 00000001401F17F4: mov     r9d, r14d
 * 00000001401F17F7: mov     rcx, r11
 * 00000001401F17FA: mov     edx, 2Bh ; '+'
 * 00000001401F17FF: mov     rax, r10
 * 00000001401F1802: call    _guard_dispatch_icall
 * 00000001401F1807: jmp     loc_1401F172F
 */
