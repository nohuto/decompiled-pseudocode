/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1400689D4
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1400689D4
 * Reason: Hex-Rays returned no pseudocode for 0x1400689D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400689D4: mov     rax, rsp
 * 00000001400689D7: mov     [rax+8], rbx
 * 00000001400689DB: mov     [rax+10h], rbp
 * 00000001400689DF: mov     [rax+18h], rsi
 * 00000001400689E3: mov     [rax+20h], rdi
 * 00000001400689E7: push    r12
 * 00000001400689E9: push    r13
 * 00000001400689EB: push    r14
 * 00000001400689ED: sub     rsp, 50h
 * 00000001400689F1: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001400689F8: lea     r12, aNull_0; "NULL"
 * 00000001400689FF: mov     rbx, [rsp+68h+arg_28]
 * 0000000140068A07: xor     r14d, r14d
 * 0000000140068A0A: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140068A0E: mov     rbp, rcx
 * 0000000140068A11: test    dword ptr [rdx+2Ch], 200000h
 * 0000000140068A18: lea     r13d, [r14+11h]
 * 0000000140068A1C: lea     esi, [rdi+0Bh]
 * 0000000140068A1F: jz      short loc_140068A9B
 * 0000000140068A21: cmp     byte ptr [rdx+29h], 2
 * 0000000140068A25: jb      short loc_140068A9B
 * 0000000140068A27: test    rbx, rbx
 * 0000000140068A2A: jz      short loc_140068A43
 * 0000000140068A2C: mov     rax, rdi
 * 0000000140068A2F: inc     rax
 * 0000000140068A32: cmp     [rbx+rax*2], r14w
 * 0000000140068A37: jnz     short loc_140068A2F
 * 0000000140068A39: lea     rdx, ds:2[rax*2]
 * 0000000140068A41: jmp     short loc_140068A46
 * 0000000140068A43: mov     rdx, rsi
 * 0000000140068A46: mov     rax, cs:pfnWppTraceMessage
 * 0000000140068A4D: lea     r8, [rsp+68h+arg_30]
 * 0000000140068A55: mov     [rsp+68h+var_28], r14
 * 0000000140068A5A: test    rbx, rbx
 * 0000000140068A5D: mov     [rsp+68h+var_30], 4
 * 0000000140068A66: mov     rcx, rbx
 * 0000000140068A69: cmovz   rcx, r12
 * 0000000140068A6D: mov     [rsp+68h+var_38], r8
 * 0000000140068A72: mov     [rsp+68h+var_40], rdx
 * 0000000140068A77: lea     r8, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 0000000140068A7E: mov     [rsp+68h+var_48], rcx
 * 0000000140068A83: mov     r9d, r13d
 * 0000000140068A86: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140068A8D: mov     edx, 2Bh ; '+'
 * 0000000140068A92: mov     rcx, [rcx+18h]
 * 0000000140068A96: call    _guard_dispatch_icall
 * 0000000140068A9B: test    rbx, rbx
 * 0000000140068A9E: jz      short loc_140068AB5
 * 0000000140068AA0: inc     rdi
 * 0000000140068AA3: cmp     [rbx+rdi*2], r14w
 * 0000000140068AA8: jnz     short loc_140068AA0
 * 0000000140068AAA: lea     rsi, ds:2[rdi*2]
 * 0000000140068AB2: test    rbx, rbx
 * 0000000140068AB5: mov     [rsp+68h+var_20], r14
 * 0000000140068ABA: lea     rax, [rsp+68h+arg_30]
 * 0000000140068AC2: mov     [rsp+68h+var_28], 4
 * 0000000140068ACB: lea     r9, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 0000000140068AD2: mov     [rsp+68h+var_30], rax
 * 0000000140068AD7: mov     edx, 2
 * 0000000140068ADC: cmovz   rbx, r12
 * 0000000140068AE0: mov     [rsp+68h+var_38], rsi
 * 0000000140068AE5: mov     [rsp+68h+var_40], rbx
 * 0000000140068AEA: mov     rcx, rbp
 * 0000000140068AED: mov     word ptr [rsp+68h+var_48], r13w
 * 0000000140068AF3: lea     r8d, [rdx+14h]
 * 0000000140068AF7: call    cs:__imp_WppAutoLogTrace
 * 0000000140068AFE: nop     dword ptr [rax+rax+00h]
 * 0000000140068B03: lea     r11, [rsp+68h+var_18]
 * 0000000140068B08: mov     rbx, [r11+20h]
 * 0000000140068B0C: mov     rbp, [r11+28h]
 * 0000000140068B10: mov     rsi, [r11+30h]
 * 0000000140068B14: mov     rdi, [r11+38h]
 * 0000000140068B18: mov     rsp, r11
 * 0000000140068B1B: pop     r14
 * 0000000140068B1D: pop     r13
 * 0000000140068B1F: pop     r12
 * 0000000140068B21: retn
 */
