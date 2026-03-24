/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqddd @ 0x1402B6CA8
 * Callers:
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402B68D4 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sqddd @ 0x1402B6CA8
 * Reason: Hex-Rays returned no pseudocode for 0x1402B6CA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402B6CA8: mov     rax, rsp
 * 00000001402B6CAB: mov     [rax+8], rbx
 * 00000001402B6CAF: mov     [rax+10h], rbp
 * 00000001402B6CB3: mov     [rax+18h], rsi
 * 00000001402B6CB7: mov     [rax+20h], rdi
 * 00000001402B6CBB: push    r15
 * 00000001402B6CBD: sub     rsp, 80h
 * 00000001402B6CC4: mov     rdi, [rsp+88h+arg_40]
 * 00000001402B6CCC: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402B6CD0: mov     rbp, r9
 * 00000001402B6CD3: mov     sil, r8b
 * 00000001402B6CD6: lea     r8, aNull; "NULL"
 * 00000001402B6CDD: mov     r11, rcx
 * 00000001402B6CE0: lea     r9d, [rbx+0Bh]
 * 00000001402B6CE4: lea     r15d, [rbx+5]
 * 00000001402B6CE8: test    dl, dl
 * 00000001402B6CEA: jz      loc_1402B6D9C
 * 00000001402B6CF0: mov     r10, cs:pfnWppTraceMessage
 * 00000001402B6CF7: test    rdi, rdi
 * 00000001402B6CFA: jz      short loc_1402B6D0D
 * 00000001402B6CFC: mov     rax, rbx
 * 00000001402B6CFF: inc     rax
 * 00000001402B6D02: cmp     byte ptr [rdi+rax], 0
 * 00000001402B6D06: jnz     short loc_1402B6CFF
 * 00000001402B6D08: inc     rax
 * 00000001402B6D0B: jmp     short loc_1402B6D12
 * 00000001402B6D0D: mov     eax, 5
 * 00000001402B6D12: test    rdi, rdi
 * 00000001402B6D15: lea     rdx, [rsp+88h+arg_60]
 * 00000001402B6D1D: mov     rcx, rdi
 * 00000001402B6D20: cmovz   rcx, r8
 * 00000001402B6D24: and     [rsp+88h+var_18], 0
 * 00000001402B6D2A: mov     [rsp+88h+var_20], r15
 * 00000001402B6D2F: lea     r8, WPP_51d1a7bb52fb381b0bc4cc3ca2c02820_Traceguids
 * 00000001402B6D36: mov     [rsp+88h+var_28], rdx
 * 00000001402B6D3B: lea     rdx, [rsp+88h+arg_58]
 * 00000001402B6D43: mov     [rsp+88h+var_30], r15
 * 00000001402B6D48: mov     [rsp+88h+var_38], rdx
 * 00000001402B6D4D: lea     rdx, [rsp+88h+arg_50]
 * 00000001402B6D55: mov     [rsp+88h+var_40], r15
 * 00000001402B6D5A: mov     [rsp+88h+var_48], rdx
 * 00000001402B6D5F: lea     rdx, [rsp+88h+arg_48]
 * 00000001402B6D67: mov     [rsp+88h+var_50], 8
 * 00000001402B6D70: mov     [rsp+88h+var_58], rdx
 * 00000001402B6D75: mov     edx, 2Bh ; '+'
 * 00000001402B6D7A: mov     [rsp+88h+var_60], rax
 * 00000001402B6D7F: mov     rax, r10
 * 00000001402B6D82: mov     [rsp+88h+var_68], rcx
 * 00000001402B6D87: mov     rcx, r11
 * 00000001402B6D8A: call    _guard_dispatch_icall
 * 00000001402B6D8F: lea     r8, aNull; "NULL"
 * 00000001402B6D96: mov     r9d, 0Ah
 * 00000001402B6D9C: test    sil, sil
 * 00000001402B6D9F: jz      loc_1402B6E45
 * 00000001402B6DA5: test    rdi, rdi
 * 00000001402B6DA8: jz      short loc_1402B6DB8
 * 00000001402B6DAA: inc     rbx
 * 00000001402B6DAD: cmp     byte ptr [rdi+rbx], 0
 * 00000001402B6DB1: jnz     short loc_1402B6DAA
 * 00000001402B6DB3: inc     rbx
 * 00000001402B6DB6: jmp     short loc_1402B6DBD
 * 00000001402B6DB8: mov     ebx, 5
 * 00000001402B6DBD: test    rdi, rdi
 * 00000001402B6DC0: lea     rax, [rsp+88h+arg_60]
 * 00000001402B6DC8: mov     edx, r15d
 * 00000001402B6DCB: mov     rcx, rbp
 * 00000001402B6DCE: cmovz   rdi, r8
 * 00000001402B6DD2: and     [rsp+88h+var_10], 0
 * 00000001402B6DD8: mov     [rsp+88h+var_18], r15
 * 00000001402B6DDD: mov     r8d, 1
 * 00000001402B6DE3: mov     [rsp+88h+var_20], rax
 * 00000001402B6DE8: lea     rax, [rsp+88h+arg_58]
 * 00000001402B6DF0: mov     [rsp+88h+var_28], r15
 * 00000001402B6DF5: mov     [rsp+88h+var_30], rax
 * 00000001402B6DFA: lea     rax, [rsp+88h+arg_50]
 * 00000001402B6E02: mov     [rsp+88h+var_38], r15
 * 00000001402B6E07: mov     [rsp+88h+var_40], rax
 * 00000001402B6E0C: lea     rax, [rsp+88h+arg_48]
 * 00000001402B6E14: mov     [rsp+88h+var_48], 8
 * 00000001402B6E1D: mov     [rsp+88h+var_50], rax
 * 00000001402B6E22: mov     [rsp+88h+var_58], rbx
 * 00000001402B6E27: mov     [rsp+88h+var_60], rdi
 * 00000001402B6E2C: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001402B6E32: lea     r9, WPP_51d1a7bb52fb381b0bc4cc3ca2c02820_Traceguids
 * 00000001402B6E39: call    cs:__imp_WppAutoLogTrace
 * 00000001402B6E40: nop     dword ptr [rax+rax+00h]
 * 00000001402B6E45: lea     r11, [rsp+88h+var_8]
 * 00000001402B6E4D: mov     rbx, [r11+10h]
 * 00000001402B6E51: mov     rbp, [r11+18h]
 * 00000001402B6E55: mov     rsi, [r11+20h]
 * 00000001402B6E59: mov     rdi, [r11+28h]
 * 00000001402B6E5D: mov     rsp, r11
 * 00000001402B6E60: pop     r15
 * 00000001402B6E62: retn
 */
