/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402E5CAC
 * Callers:
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402E5CAC
 * Reason: Hex-Rays returned no pseudocode for 0x1402E5CAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E5CAC: mov     rax, rsp
 * 00000001402E5CAF: mov     [rax+8], rbx
 * 00000001402E5CB3: mov     [rax+10h], rbp
 * 00000001402E5CB7: mov     [rax+18h], rsi
 * 00000001402E5CBB: mov     [rax+20h], rdi
 * 00000001402E5CBF: push    r15
 * 00000001402E5CC1: sub     rsp, 80h
 * 00000001402E5CC8: mov     rdi, [rsp+88h+arg_60]
 * 00000001402E5CD0: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E5CD4: mov     rbp, r9
 * 00000001402E5CD7: mov     sil, r8b
 * 00000001402E5CDA: lea     r8, aNull; "NULL"
 * 00000001402E5CE1: mov     r11, rcx
 * 00000001402E5CE4: lea     r9d, [rbx+35h]
 * 00000001402E5CE8: lea     r15d, [rbx+5]
 * 00000001402E5CEC: test    dl, dl
 * 00000001402E5CEE: jz      loc_1402E5DA0
 * 00000001402E5CF4: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E5CFB: test    rdi, rdi
 * 00000001402E5CFE: jz      short loc_1402E5D11
 * 00000001402E5D00: mov     rcx, rbx
 * 00000001402E5D03: inc     rcx
 * 00000001402E5D06: cmp     byte ptr [rdi+rcx], 0
 * 00000001402E5D0A: jnz     short loc_1402E5D03
 * 00000001402E5D0C: inc     rcx
 * 00000001402E5D0F: jmp     short loc_1402E5D16
 * 00000001402E5D11: mov     ecx, 5
 * 00000001402E5D16: test    rdi, rdi
 * 00000001402E5D19: mov     rax, rdi
 * 00000001402E5D1C: mov     edx, 2Bh ; '+'
 * 00000001402E5D21: cmovz   rax, r8
 * 00000001402E5D25: and     [rsp+88h+var_18], 0
 * 00000001402E5D2B: mov     [rsp+88h+var_20], rcx
 * 00000001402E5D30: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5D37: mov     [rsp+88h+var_28], rax
 * 00000001402E5D3C: mov     rcx, r11
 * 00000001402E5D3F: mov     [rsp+88h+var_30], r15
 * 00000001402E5D44: lea     rax, [rsp+88h+arg_58]
 * 00000001402E5D4C: mov     [rsp+88h+var_38], rax
 * 00000001402E5D51: lea     rax, [rsp+88h+arg_50]
 * 00000001402E5D59: mov     [rsp+88h+var_40], r15
 * 00000001402E5D5E: mov     [rsp+88h+var_48], rax
 * 00000001402E5D63: lea     rax, [rsp+88h+arg_48]
 * 00000001402E5D6B: mov     [rsp+88h+var_50], r15
 * 00000001402E5D70: mov     [rsp+88h+var_58], rax
 * 00000001402E5D75: lea     rax, [rsp+88h+arg_40]
 * 00000001402E5D7D: mov     [rsp+88h+var_60], 8
 * 00000001402E5D86: mov     [rsp+88h+var_68], rax
 * 00000001402E5D8B: mov     rax, r10
 * 00000001402E5D8E: call    _guard_dispatch_icall
 * 00000001402E5D93: lea     r8, aNull; "NULL"
 * 00000001402E5D9A: mov     r9d, 34h ; '4'
 * 00000001402E5DA0: test    sil, sil
 * 00000001402E5DA3: jz      loc_1402E5E49
 * 00000001402E5DA9: test    rdi, rdi
 * 00000001402E5DAC: jz      short loc_1402E5DBC
 * 00000001402E5DAE: inc     rbx
 * 00000001402E5DB1: cmp     byte ptr [rdi+rbx], 0
 * 00000001402E5DB5: jnz     short loc_1402E5DAE
 * 00000001402E5DB7: inc     rbx
 * 00000001402E5DBA: jmp     short loc_1402E5DC1
 * 00000001402E5DBC: mov     ebx, 5
 * 00000001402E5DC1: test    rdi, rdi
 * 00000001402E5DC4: lea     rax, [rsp+88h+arg_58]
 * 00000001402E5DCC: mov     edx, r15d
 * 00000001402E5DCF: mov     rcx, rbp
 * 00000001402E5DD2: cmovz   rdi, r8
 * 00000001402E5DD6: and     [rsp+88h+var_10], 0
 * 00000001402E5DDC: mov     [rsp+88h+var_18], rbx
 * 00000001402E5DE1: mov     r8d, 9
 * 00000001402E5DE7: mov     [rsp+88h+var_20], rdi
 * 00000001402E5DEC: mov     [rsp+88h+var_28], r15
 * 00000001402E5DF1: mov     [rsp+88h+var_30], rax
 * 00000001402E5DF6: lea     rax, [rsp+88h+arg_50]
 * 00000001402E5DFE: mov     [rsp+88h+var_38], r15
 * 00000001402E5E03: mov     [rsp+88h+var_40], rax
 * 00000001402E5E08: lea     rax, [rsp+88h+arg_48]
 * 00000001402E5E10: mov     [rsp+88h+var_48], r15
 * 00000001402E5E15: mov     [rsp+88h+var_50], rax
 * 00000001402E5E1A: lea     rax, [rsp+88h+arg_40]
 * 00000001402E5E22: mov     [rsp+88h+var_58], 8
 * 00000001402E5E2B: mov     [rsp+88h+var_60], rax
 * 00000001402E5E30: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001402E5E36: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5E3D: call    cs:__imp_WppAutoLogTrace
 * 00000001402E5E44: nop     dword ptr [rax+rax+00h]
 * 00000001402E5E49: lea     r11, [rsp+88h+var_8]
 * 00000001402E5E51: mov     rbx, [r11+10h]
 * 00000001402E5E55: mov     rbp, [r11+18h]
 * 00000001402E5E59: mov     rsi, [r11+20h]
 * 00000001402E5E5D: mov     rdi, [r11+28h]
 * 00000001402E5E61: mov     rsp, r11
 * 00000001402E5E64: pop     r15
 * 00000001402E5E66: retn
 */
