/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1402C94A4
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1402C94A4
 * Reason: Hex-Rays returned no pseudocode for 0x1402C94A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C94A4: mov     r11, rsp
 * 00000001402C94A7: mov     [r11+8], rbx
 * 00000001402C94AB: mov     [r11+10h], rsi
 * 00000001402C94AF: mov     [r11+18h], rdi
 * 00000001402C94B3: push    r14
 * 00000001402C94B5: sub     rsp, 70h
 * 00000001402C94B9: mov     esi, 8
 * 00000001402C94BE: mov     rdi, r9
 * 00000001402C94C1: mov     bl, r8b
 * 00000001402C94C4: lea     r14d, [rsi+0Ah]
 * 00000001402C94C8: test    dl, dl
 * 00000001402C94CA: jz      short loc_1402C951E
 * 00000001402C94CC: and     qword ptr [r11-18h], 0
 * 00000001402C94D1: lea     rdx, [r11+60h]
 * 00000001402C94D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C94DC: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C94E3: mov     qword ptr [r11-20h], 4
 * 00000001402C94EB: mov     r9d, r14d
 * 00000001402C94EE: mov     [r11-28h], rdx
 * 00000001402C94F2: lea     rdx, [r11+58h]
 * 00000001402C94F6: mov     [r11-30h], rsi
 * 00000001402C94FA: mov     [r11-38h], rdx
 * 00000001402C94FE: lea     rdx, [r11+50h]
 * 00000001402C9502: mov     [r11-40h], rsi
 * 00000001402C9506: mov     [r11-48h], rdx
 * 00000001402C950A: lea     rdx, [r11+48h]
 * 00000001402C950E: mov     [r11-50h], rsi
 * 00000001402C9512: mov     [r11-58h], rdx
 * 00000001402C9516: lea     edx, [rsi+23h]
 * 00000001402C9519: call    _guard_dispatch_icall
 * 00000001402C951E: test    bl, bl
 * 00000001402C9520: jz      short loc_1402C9599
 * 00000001402C9522: and     [rsp+78h+var_10], 0
 * 00000001402C9528: lea     rax, [rsp+78h+arg_58]
 * 00000001402C9530: mov     [rsp+78h+var_18], 4
 * 00000001402C9539: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C9540: mov     [rsp+78h+var_20], rax
 * 00000001402C9545: mov     edx, 5
 * 00000001402C954A: mov     [rsp+78h+var_28], rsi
 * 00000001402C954F: lea     rax, [rsp+78h+arg_50]
 * 00000001402C9557: mov     [rsp+78h+var_30], rax
 * 00000001402C955C: mov     rcx, rdi
 * 00000001402C955F: mov     [rsp+78h+var_38], rsi
 * 00000001402C9564: lea     rax, [rsp+78h+arg_48]
 * 00000001402C956C: mov     [rsp+78h+var_40], rax
 * 00000001402C9571: lea     r8d, [rdx+2]
 * 00000001402C9575: lea     rax, [rsp+78h+arg_40]
 * 00000001402C957D: mov     [rsp+78h+var_48], rsi
 * 00000001402C9582: mov     [rsp+78h+var_50], rax
 * 00000001402C9587: mov     [rsp+78h+var_58], r14w
 * 00000001402C958D: call    cs:__imp_WppAutoLogTrace
 * 00000001402C9594: nop     dword ptr [rax+rax+00h]
 * 00000001402C9599: lea     r11, [rsp+78h+var_8]
 * 00000001402C959E: mov     rbx, [r11+10h]
 * 00000001402C95A2: mov     rsi, [r11+18h]
 * 00000001402C95A6: mov     rdi, [r11+20h]
 * 00000001402C95AA: mov     rsp, r11
 * 00000001402C95AD: pop     r14
 * 00000001402C95AF: retn
 */
