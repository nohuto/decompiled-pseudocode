/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1402A4A0C
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1402A4A0C
 * Reason: Hex-Rays returned no pseudocode for 0x1402A4A0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A4A0C: mov     r11, rsp
 * 00000001402A4A0F: mov     [r11+8], rbx
 * 00000001402A4A13: mov     [r11+10h], rbp
 * 00000001402A4A17: mov     [r11+18h], rsi
 * 00000001402A4A1B: mov     [r11+20h], rdi
 * 00000001402A4A1F: push    r14
 * 00000001402A4A21: sub     rsp, 70h
 * 00000001402A4A25: movzx   edi, [rsp+78h+arg_30]
 * 00000001402A4A2D: mov     ebp, 4
 * 00000001402A4A32: mov     rsi, r9
 * 00000001402A4A35: mov     bl, r8b
 * 00000001402A4A38: lea     r14d, [rbp+4]
 * 00000001402A4A3C: test    dl, dl
 * 00000001402A4A3E: jz      short loc_1402A4A8E
 * 00000001402A4A40: and     qword ptr [r11-18h], 0
 * 00000001402A4A45: lea     rdx, [r11+60h]
 * 00000001402A4A49: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A4A50: lea     r8, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A4A57: mov     [r11-20h], rbp
 * 00000001402A4A5B: mov     r9d, edi
 * 00000001402A4A5E: mov     [r11-28h], rdx
 * 00000001402A4A62: lea     rdx, [r11+58h]
 * 00000001402A4A66: mov     [r11-30h], r14
 * 00000001402A4A6A: mov     [r11-38h], rdx
 * 00000001402A4A6E: lea     rdx, [r11+50h]
 * 00000001402A4A72: mov     [r11-40h], rbp
 * 00000001402A4A76: mov     [r11-48h], rdx
 * 00000001402A4A7A: lea     rdx, [r11+48h]
 * 00000001402A4A7E: mov     [r11-50h], r14
 * 00000001402A4A82: mov     [r11-58h], rdx
 * 00000001402A4A86: lea     edx, [rbp+27h]
 * 00000001402A4A89: call    _guard_dispatch_icall
 * 00000001402A4A8E: test    bl, bl
 * 00000001402A4A90: jz      short loc_1402A4B03
 * 00000001402A4A92: and     [rsp+78h+var_10], 0
 * 00000001402A4A98: lea     rax, [rsp+78h+arg_58]
 * 00000001402A4AA0: mov     [rsp+78h+var_18], rbp
 * 00000001402A4AA5: lea     r9, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A4AAC: mov     [rsp+78h+var_20], rax
 * 00000001402A4AB1: mov     r8d, ebp
 * 00000001402A4AB4: mov     [rsp+78h+var_28], r14
 * 00000001402A4AB9: lea     rax, [rsp+78h+arg_50]
 * 00000001402A4AC1: mov     [rsp+78h+var_30], rax
 * 00000001402A4AC6: mov     edx, 3
 * 00000001402A4ACB: mov     [rsp+78h+var_38], rbp
 * 00000001402A4AD0: lea     rax, [rsp+78h+arg_48]
 * 00000001402A4AD8: mov     [rsp+78h+var_40], rax
 * 00000001402A4ADD: mov     rcx, rsi
 * 00000001402A4AE0: lea     rax, [rsp+78h+arg_40]
 * 00000001402A4AE8: mov     [rsp+78h+var_48], r14
 * 00000001402A4AED: mov     [rsp+78h+var_50], rax
 * 00000001402A4AF2: mov     [rsp+78h+var_58], di
 * 00000001402A4AF7: call    cs:__imp_WppAutoLogTrace
 * 00000001402A4AFE: nop     dword ptr [rax+rax+00h]
 * 00000001402A4B03: lea     r11, [rsp+78h+var_8]
 * 00000001402A4B08: mov     rbx, [r11+10h]
 * 00000001402A4B0C: mov     rbp, [r11+18h]
 * 00000001402A4B10: mov     rsi, [r11+20h]
 * 00000001402A4B14: mov     rdi, [r11+28h]
 * 00000001402A4B18: mov     rsp, r11
 * 00000001402A4B1B: pop     r14
 * 00000001402A4B1D: retn
 */
