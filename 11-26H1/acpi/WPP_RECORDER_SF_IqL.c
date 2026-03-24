/*
 * XREFs of WPP_RECORDER_SF_IqL @ 0x14003BBB8
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1400C268C (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqL @ 0x14003BBB8
 * Reason: Hex-Rays returned no pseudocode for 0x14003BBB8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003BBB8: mov     [rsp+arg_0], rbx
 * 000000014003BBBD: mov     [rsp+arg_8], rbp
 * 000000014003BBC2: push    rsi
 * 000000014003BBC3: sub     rsp, 60h
 * 000000014003BBC7: mov     rbx, rcx
 * 000000014003BBCA: mov     ebp, 0Ah
 * 000000014003BBCF: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014003BBD6: lea     esi, [rbp-2]
 * 000000014003BBD9: mov     eax, [rcx+2Ch]
 * 000000014003BBDC: test    al, 20h
 * 000000014003BBDE: jnz     short loc_14003BC58
 * 000000014003BBE0: mov     [rsp+68h+var_10], 0
 * 000000014003BBE9: lea     rax, [rsp+68h+arg_38]
 * 000000014003BBF1: mov     [rsp+68h+var_18], 4
 * 000000014003BBFA: lea     r9, WPP_e31de8e794e03abc169a9744a0587e03_Traceguids
 * 000000014003BC01: mov     [rsp+68h+var_20], rax
 * 000000014003BC06: mov     edx, 4
 * 000000014003BC0B: mov     [rsp+68h+var_28], rsi
 * 000000014003BC10: lea     rax, [rsp+68h+arg_30]
 * 000000014003BC18: mov     [rsp+68h+var_30], rax
 * 000000014003BC1D: mov     rcx, rbx
 * 000000014003BC20: lea     rax, [rsp+68h+arg_28]
 * 000000014003BC28: mov     [rsp+68h+var_38], rsi
 * 000000014003BC2D: mov     [rsp+68h+var_40], rax
 * 000000014003BC32: lea     r8d, [rdx+2]
 * 000000014003BC36: mov     word ptr [rsp+68h+var_48], bp
 * 000000014003BC3B: call    cs:__imp_WppAutoLogTrace
 * 000000014003BC42: nop     dword ptr [rax+rax+00h]
 * 000000014003BC47: mov     rbx, [rsp+68h+arg_0]
 * 000000014003BC4C: mov     rbp, [rsp+68h+arg_8]
 * 000000014003BC51: add     rsp, 60h
 * 000000014003BC55: pop     rsi
 * 000000014003BC56: retn
 * 000000014003BC58: cmp     byte ptr [rcx+29h], 4
 * 000000014003BC5C: jb      short loc_14003BBE0
 * 000000014003BC5E: mov     rax, cs:pfnWppTraceMessage
 * 000000014003BC65: lea     rdx, [rsp+68h+arg_38]
 * 000000014003BC6D: mov     rcx, [rcx+18h]
 * 000000014003BC71: lea     r8, WPP_e31de8e794e03abc169a9744a0587e03_Traceguids
 * 000000014003BC78: mov     [rsp+68h+var_18], 0
 * 000000014003BC81: mov     r9d, ebp
 * 000000014003BC84: mov     [rsp+68h+var_20], 4
 * 000000014003BC8D: mov     [rsp+68h+var_28], rdx
 * 000000014003BC92: lea     rdx, [rsp+68h+arg_30]
 * 000000014003BC9A: mov     [rsp+68h+var_30], rsi
 * 000000014003BC9F: mov     [rsp+68h+var_38], rdx
 * 000000014003BCA4: lea     rdx, [rsp+68h+arg_28]
 * 000000014003BCAC: mov     [rsp+68h+var_40], rsi
 * 000000014003BCB1: mov     [rsp+68h+var_48], rdx
 * 000000014003BCB6: mov     edx, 2Bh ; '+'
 * 000000014003BCBB: call    _guard_dispatch_icall
 * 000000014003BCC0: jmp     loc_14003BBE0
 */
