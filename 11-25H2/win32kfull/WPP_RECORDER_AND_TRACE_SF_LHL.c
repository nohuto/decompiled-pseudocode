/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHL @ 0x140138B34
 * Callers:
 *     _DelegateCapturePointers @ 0x140137D48 (_DelegateCapturePointers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHL @ 0x140138B34
 * Reason: Hex-Rays returned no pseudocode for 0x140138B34
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140138B34: mov     [rsp+arg_0], rbx
 * 0000000140138B39: mov     [rsp+arg_8], rbp
 * 0000000140138B3E: mov     [rsp+arg_10], rsi
 * 0000000140138B43: push    rdi
 * 0000000140138B44: sub     rsp, 60h
 * 0000000140138B48: movzx   edi, [rsp+68h+arg_30]
 * 0000000140138B50: mov     rsi, r9
 * 0000000140138B53: mov     bl, r8b
 * 0000000140138B56: mov     ebp, 4
 * 0000000140138B5B: test    dl, dl
 * 0000000140138B5D: jnz     short loc_140138BDD
 * 0000000140138B5F: test    bl, bl
 * 0000000140138B61: jz      short loc_140138BC6
 * 0000000140138B63: and     [rsp+68h+var_10], 0
 * 0000000140138B69: lea     rax, [rsp+68h+arg_50]
 * 0000000140138B71: mov     [rsp+68h+var_18], rbp
 * 0000000140138B76: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140138B7D: mov     [rsp+68h+var_20], rax
 * 0000000140138B82: mov     r8d, 0Ah
 * 0000000140138B88: mov     [rsp+68h+var_28], 2
 * 0000000140138B91: lea     rax, [rsp+68h+arg_48]
 * 0000000140138B99: mov     [rsp+68h+var_30], rax
 * 0000000140138B9E: mov     edx, ebp
 * 0000000140138BA0: lea     rax, [rsp+68h+arg_40]
 * 0000000140138BA8: mov     [rsp+68h+var_38], rbp
 * 0000000140138BAD: mov     [rsp+68h+var_40], rax
 * 0000000140138BB2: mov     rcx, rsi
 * 0000000140138BB5: mov     word ptr [rsp+68h+var_48], di
 * 0000000140138BBA: call    cs:__imp_WppAutoLogTrace
 * 0000000140138BC1: nop     dword ptr [rax+rax+00h]
 * 0000000140138BC6: lea     r11, [rsp+68h+var_8]
 * 0000000140138BCB: mov     rbx, [r11+10h]
 * 0000000140138BCF: mov     rbp, [r11+18h]
 * 0000000140138BD3: mov     rsi, [r11+20h]
 * 0000000140138BD7: mov     rsp, r11
 * 0000000140138BDA: pop     rdi
 * 0000000140138BDB: retn
 * 0000000140138BDD: and     [rsp+68h+var_18], 0
 * 0000000140138BE3: lea     rdx, [rsp+68h+arg_50]
 * 0000000140138BEB: mov     rax, cs:pfnWppTraceMessage
 * 0000000140138BF2: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 0000000140138BF9: mov     [rsp+68h+var_20], rbp
 * 0000000140138BFE: mov     r9d, edi
 * 0000000140138C01: mov     [rsp+68h+var_28], rdx
 * 0000000140138C06: lea     rdx, [rsp+68h+arg_48]
 * 0000000140138C0E: mov     [rsp+68h+var_30], 2
 * 0000000140138C17: mov     [rsp+68h+var_38], rdx
 * 0000000140138C1C: lea     rdx, [rsp+68h+arg_40]
 * 0000000140138C24: mov     [rsp+68h+var_40], rbp
 * 0000000140138C29: mov     [rsp+68h+var_48], rdx
 * 0000000140138C2E: mov     edx, 2Bh ; '+'
 * 0000000140138C33: call    _guard_dispatch_icall
 * 0000000140138C38: jmp     loc_140138B5F
 */
