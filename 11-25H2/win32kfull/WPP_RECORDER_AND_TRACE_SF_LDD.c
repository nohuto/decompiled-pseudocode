/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LDD @ 0x1402A4760
 * Callers:
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LDD @ 0x1402A4760
 * Reason: Hex-Rays returned no pseudocode for 0x1402A4760
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A4760: mov     r11, rsp
 * 00000001402A4763: mov     [r11+8], rbx
 * 00000001402A4767: mov     [r11+10h], rbp
 * 00000001402A476B: mov     [r11+18h], rsi
 * 00000001402A476F: push    rdi
 * 00000001402A4770: sub     rsp, 60h
 * 00000001402A4774: mov     ebp, 0Ch
 * 00000001402A4779: mov     rdi, r9
 * 00000001402A477C: mov     bl, r8b
 * 00000001402A477F: lea     esi, [rbp-8]
 * 00000001402A4782: test    dl, dl
 * 00000001402A4784: jz      short loc_1402A47C8
 * 00000001402A4786: and     qword ptr [r11-18h], 0
 * 00000001402A478B: lea     rdx, [r11+58h]
 * 00000001402A478F: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A4796: lea     r8, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A479D: mov     [r11-20h], rsi
 * 00000001402A47A1: mov     r9d, ebp
 * 00000001402A47A4: mov     [r11-28h], rdx
 * 00000001402A47A8: lea     rdx, [r11+50h]
 * 00000001402A47AC: mov     [r11-30h], rsi
 * 00000001402A47B0: mov     [r11-38h], rdx
 * 00000001402A47B4: lea     rdx, [r11+48h]
 * 00000001402A47B8: mov     [r11-40h], rsi
 * 00000001402A47BC: mov     [r11-48h], rdx
 * 00000001402A47C0: lea     edx, [rbp+1Fh]
 * 00000001402A47C3: call    _guard_dispatch_icall
 * 00000001402A47C8: test    bl, bl
 * 00000001402A47CA: jz      short loc_1402A482C
 * 00000001402A47CC: and     [rsp+68h+var_10], 0
 * 00000001402A47D2: lea     rax, [rsp+68h+arg_50]
 * 00000001402A47DA: mov     [rsp+68h+var_18], rsi
 * 00000001402A47DF: lea     r9, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A47E6: mov     [rsp+68h+var_20], rax
 * 00000001402A47EB: mov     edx, 3
 * 00000001402A47F0: mov     [rsp+68h+var_28], rsi
 * 00000001402A47F5: lea     rax, [rsp+68h+arg_48]
 * 00000001402A47FD: mov     [rsp+68h+var_30], rax
 * 00000001402A4802: mov     rcx, rdi
 * 00000001402A4805: lea     rax, [rsp+68h+arg_40]
 * 00000001402A480D: mov     [rsp+68h+var_38], rsi
 * 00000001402A4812: mov     [rsp+68h+var_40], rax
 * 00000001402A4817: lea     r8d, [rdx+0Dh]
 * 00000001402A481B: mov     [rsp+68h+var_48], bp
 * 00000001402A4820: call    cs:__imp_WppAutoLogTrace
 * 00000001402A4827: nop     dword ptr [rax+rax+00h]
 * 00000001402A482C: lea     r11, [rsp+68h+var_8]
 * 00000001402A4831: mov     rbx, [r11+10h]
 * 00000001402A4835: mov     rbp, [r11+18h]
 * 00000001402A4839: mov     rsi, [r11+20h]
 * 00000001402A483D: mov     rsp, r11
 * 00000001402A4840: pop     rdi
 * 00000001402A4841: retn
 */
