/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140138A2C
 * Callers:
 *     ValidateDelegatePointerList @ 0x140138708 (ValidateDelegatePointerList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LLL @ 0x140138A2C
 * Reason: Hex-Rays returned no pseudocode for 0x140138A2C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140138A2C: mov     [rsp+arg_0], rbx
 * 0000000140138A31: mov     [rsp+arg_8], rbp
 * 0000000140138A36: mov     [rsp+arg_10], rsi
 * 0000000140138A3B: push    rdi
 * 0000000140138A3C: sub     rsp, 60h
 * 0000000140138A40: movzx   edi, [rsp+68h+arg_30]
 * 0000000140138A48: mov     rsi, r9
 * 0000000140138A4B: mov     bl, r8b
 * 0000000140138A4E: mov     ebp, 4
 * 0000000140138A53: test    dl, dl
 * 0000000140138A55: jnz     short loc_140138AD1
 * 0000000140138A57: test    bl, bl
 * 0000000140138A59: jz      short loc_140138ABA
 * 0000000140138A5B: and     [rsp+68h+var_10], 0
 * 0000000140138A61: lea     rax, [rsp+68h+arg_50]
 * 0000000140138A69: mov     [rsp+68h+var_18], rbp
 * 0000000140138A6E: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140138A75: mov     [rsp+68h+var_20], rax
 * 0000000140138A7A: mov     r8d, 0Ah
 * 0000000140138A80: mov     [rsp+68h+var_28], rbp
 * 0000000140138A85: lea     rax, [rsp+68h+arg_48]
 * 0000000140138A8D: mov     [rsp+68h+var_30], rax
 * 0000000140138A92: mov     edx, ebp
 * 0000000140138A94: lea     rax, [rsp+68h+arg_40]
 * 0000000140138A9C: mov     [rsp+68h+var_38], rbp
 * 0000000140138AA1: mov     [rsp+68h+var_40], rax
 * 0000000140138AA6: mov     rcx, rsi
 * 0000000140138AA9: mov     word ptr [rsp+68h+var_48], di
 * 0000000140138AAE: call    cs:__imp_WppAutoLogTrace
 * 0000000140138AB5: nop     dword ptr [rax+rax+00h]
 * 0000000140138ABA: lea     r11, [rsp+68h+var_8]
 * 0000000140138ABF: mov     rbx, [r11+10h]
 * 0000000140138AC3: mov     rbp, [r11+18h]
 * 0000000140138AC7: mov     rsi, [r11+20h]
 * 0000000140138ACB: mov     rsp, r11
 * 0000000140138ACE: pop     rdi
 * 0000000140138ACF: retn
 * 0000000140138AD1: and     [rsp+68h+var_18], 0
 * 0000000140138AD7: lea     rdx, [rsp+68h+arg_50]
 * 0000000140138ADF: mov     rax, cs:pfnWppTraceMessage
 * 0000000140138AE6: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140138AED: mov     [rsp+68h+var_20], rbp
 * 0000000140138AF2: mov     r9d, edi
 * 0000000140138AF5: mov     [rsp+68h+var_28], rdx
 * 0000000140138AFA: lea     rdx, [rsp+68h+arg_48]
 * 0000000140138B02: mov     [rsp+68h+var_30], rbp
 * 0000000140138B07: mov     [rsp+68h+var_38], rdx
 * 0000000140138B0C: lea     rdx, [rsp+68h+arg_40]
 * 0000000140138B14: mov     [rsp+68h+var_40], rbp
 * 0000000140138B19: mov     [rsp+68h+var_48], rdx
 * 0000000140138B1E: mov     edx, 2Bh ; '+'
 * 0000000140138B23: call    _guard_dispatch_icall
 * 0000000140138B28: jmp     loc_140138A57
 */
