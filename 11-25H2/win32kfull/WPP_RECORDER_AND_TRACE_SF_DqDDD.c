/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1401CC65C
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1401CC65C
 * Reason: Hex-Rays returned no pseudocode for 0x1401CC65C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CC65C: mov     [rsp+arg_0], rbx
 * 00000001401CC661: mov     [rsp+arg_8], rsi
 * 00000001401CC666: mov     [rsp+arg_10], rdi
 * 00000001401CC66B: push    r14
 * 00000001401CC66D: sub     rsp, 80h
 * 00000001401CC674: mov     esi, 4
 * 00000001401CC679: mov     rdi, r9
 * 00000001401CC67C: mov     bl, r8b
 * 00000001401CC67F: lea     r14d, [rsi+44h]
 * 00000001401CC683: test    dl, dl
 * 00000001401CC685: jnz     loc_1401CC736
 * 00000001401CC68B: test    bl, bl
 * 00000001401CC68D: jz      loc_1401CC71B
 * 00000001401CC693: and     [rsp+88h+var_10], 0
 * 00000001401CC699: lea     rax, [rsp+88h+arg_60]
 * 00000001401CC6A1: mov     [rsp+88h+var_18], rsi
 * 00000001401CC6A6: lea     r9, WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids
 * 00000001401CC6AD: mov     [rsp+88h+var_20], rax
 * 00000001401CC6B2: mov     r8d, 2
 * 00000001401CC6B8: mov     [rsp+88h+var_28], rsi
 * 00000001401CC6BD: lea     rax, [rsp+88h+arg_58]
 * 00000001401CC6C5: mov     [rsp+88h+var_30], rax
 * 00000001401CC6CA: mov     edx, esi
 * 00000001401CC6CC: mov     [rsp+88h+var_38], rsi
 * 00000001401CC6D1: lea     rax, [rsp+88h+arg_50]
 * 00000001401CC6D9: mov     [rsp+88h+var_40], rax
 * 00000001401CC6DE: mov     rcx, rdi
 * 00000001401CC6E1: mov     [rsp+88h+var_48], 8
 * 00000001401CC6EA: lea     rax, [rsp+88h+arg_48]
 * 00000001401CC6F2: mov     [rsp+88h+var_50], rax
 * 00000001401CC6F7: lea     rax, [rsp+88h+arg_40]
 * 00000001401CC6FF: mov     [rsp+88h+var_58], rsi
 * 00000001401CC704: mov     [rsp+88h+var_60], rax
 * 00000001401CC709: mov     word ptr [rsp+88h+var_68], r14w
 * 00000001401CC70F: call    cs:__imp_WppAutoLogTrace
 * 00000001401CC716: nop     dword ptr [rax+rax+00h]
 * 00000001401CC71B: lea     r11, [rsp+88h+var_8]
 * 00000001401CC723: mov     rbx, [r11+10h]
 * 00000001401CC727: mov     rsi, [r11+18h]
 * 00000001401CC72B: mov     rdi, [r11+20h]
 * 00000001401CC72F: mov     rsp, r11
 * 00000001401CC732: pop     r14
 * 00000001401CC734: retn
 * 00000001401CC736: and     [rsp+88h+var_18], 0
 * 00000001401CC73C: lea     rdx, [rsp+88h+arg_60]
 * 00000001401CC744: mov     rax, cs:pfnWppTraceMessage
 * 00000001401CC74B: lea     r8, WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids
 * 00000001401CC752: mov     [rsp+88h+var_20], rsi
 * 00000001401CC757: mov     r9d, r14d
 * 00000001401CC75A: mov     [rsp+88h+var_28], rdx
 * 00000001401CC75F: lea     rdx, [rsp+88h+arg_58]
 * 00000001401CC767: mov     [rsp+88h+var_30], rsi
 * 00000001401CC76C: mov     [rsp+88h+var_38], rdx
 * 00000001401CC771: lea     rdx, [rsp+88h+arg_50]
 * 00000001401CC779: mov     [rsp+88h+var_40], rsi
 * 00000001401CC77E: mov     [rsp+88h+var_48], rdx
 * 00000001401CC783: lea     rdx, [rsp+88h+arg_48]
 * 00000001401CC78B: mov     [rsp+88h+var_50], 8
 * 00000001401CC794: mov     [rsp+88h+var_58], rdx
 * 00000001401CC799: lea     rdx, [rsp+88h+arg_40]
 * 00000001401CC7A1: mov     [rsp+88h+var_60], rsi
 * 00000001401CC7A6: mov     [rsp+88h+var_68], rdx
 * 00000001401CC7AB: mov     edx, 2Bh ; '+'
 * 00000001401CC7B0: call    _guard_dispatch_icall
 * 00000001401CC7B5: jmp     loc_1401CC68B
 */
