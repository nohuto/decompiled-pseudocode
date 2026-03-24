/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78
 * Callers:
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x140211BF8 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028F9BC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sD @ 0x1401A4C78
 * Reason: Hex-Rays returned no pseudocode for 0x1401A4C78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401A4C78: mov     rax, rsp
 * 00000001401A4C7B: mov     [rax+8], rbx
 * 00000001401A4C7F: mov     [rax+10h], rbp
 * 00000001401A4C83: mov     [rax+18h], rsi
 * 00000001401A4C87: mov     [rax+20h], rdi
 * 00000001401A4C8B: push    r14
 * 00000001401A4C8D: sub     rsp, 50h
 * 00000001401A4C91: mov     rdi, [rsp+58h+arg_40]
 * 00000001401A4C99: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401A4C9D: movzx   ebp, [rsp+58h+arg_30]
 * 00000001401A4CA5: mov     sil, r8b
 * 00000001401A4CA8: lea     r8, aNull; "NULL"
 * 00000001401A4CAF: mov     r14, r9
 * 00000001401A4CB2: mov     r11, rcx
 * 00000001401A4CB5: test    dl, dl
 * 00000001401A4CB7: jnz     loc_1401A4D49
 * 00000001401A4CBD: test    sil, sil
 * 00000001401A4CC0: jz      short loc_1401A4D2D
 * 00000001401A4CC2: test    rdi, rdi
 * 00000001401A4CC5: jz      loc_1401A4DC2
 * 00000001401A4CCB: inc     rbx
 * 00000001401A4CCE: cmp     byte ptr [rdi+rbx], 0
 * 00000001401A4CD2: jnz     short loc_1401A4CCB
 * 00000001401A4CD4: inc     rbx
 * 00000001401A4CD7: mov     r9, [rsp+58h+arg_38]
 * 00000001401A4CDF: lea     rax, [rsp+58h+arg_48]
 * 00000001401A4CE7: test    rdi, rdi
 * 00000001401A4CEA: mov     edx, 4
 * 00000001401A4CEF: mov     rcx, r14
 * 00000001401A4CF2: cmovz   rdi, r8
 * 00000001401A4CF6: and     [rsp+58h+var_10], 0
 * 00000001401A4CFC: mov     r8d, [rsp+58h+arg_28]
 * 00000001401A4D04: mov     [rsp+58h+var_18], 4
 * 00000001401A4D0D: mov     [rsp+58h+var_20], rax
 * 00000001401A4D12: mov     [rsp+58h+var_28], rbx
 * 00000001401A4D17: mov     [rsp+58h+var_30], rdi
 * 00000001401A4D1C: mov     word ptr [rsp+58h+var_38], bp
 * 00000001401A4D21: call    cs:__imp_WppAutoLogTrace
 * 00000001401A4D28: nop     dword ptr [rax+rax+00h]
 * 00000001401A4D2D: mov     rbx, [rsp+58h+arg_0]
 * 00000001401A4D32: mov     rbp, [rsp+58h+arg_8]
 * 00000001401A4D37: mov     rsi, [rsp+58h+arg_10]
 * 00000001401A4D3C: mov     rdi, [rsp+58h+arg_18]
 * 00000001401A4D41: add     rsp, 50h
 * 00000001401A4D45: pop     r14
 * 00000001401A4D47: retn
 * 00000001401A4D49: mov     r10, cs:pfnWppTraceMessage
 * 00000001401A4D50: test    rdi, rdi
 * 00000001401A4D53: jz      short loc_1401A4D66
 * 00000001401A4D55: mov     rax, rbx
 * 00000001401A4D58: inc     rax
 * 00000001401A4D5B: cmp     byte ptr [rdi+rax], 0
 * 00000001401A4D5F: jnz     short loc_1401A4D58
 * 00000001401A4D61: inc     rax
 * 00000001401A4D64: jmp     short loc_1401A4D6B
 * 00000001401A4D66: mov     eax, 5
 * 00000001401A4D6B: lea     rdx, [rsp+58h+arg_48]
 * 00000001401A4D73: test    rdi, rdi
 * 00000001401A4D76: mov     rcx, rdi
 * 00000001401A4D79: mov     r9d, ebp
 * 00000001401A4D7C: cmovz   rcx, r8
 * 00000001401A4D80: and     [rsp+58h+var_18], 0
 * 00000001401A4D86: mov     r8, [rsp+58h+arg_38]
 * 00000001401A4D8E: mov     [rsp+58h+var_20], 4
 * 00000001401A4D97: mov     [rsp+58h+var_28], rdx
 * 00000001401A4D9C: mov     edx, 2Bh ; '+'
 * 00000001401A4DA1: mov     [rsp+58h+var_30], rax
 * 00000001401A4DA6: mov     rax, r10
 * 00000001401A4DA9: mov     [rsp+58h+var_38], rcx
 * 00000001401A4DAE: mov     rcx, r11
 * 00000001401A4DB1: call    _guard_dispatch_icall
 * 00000001401A4DB6: lea     r8, aNull; "NULL"
 * 00000001401A4DBD: jmp     loc_1401A4CBD
 * 00000001401A4DC2: mov     ebx, 5
 * 00000001401A4DC7: jmp     loc_1401A4CD7
 */
