/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402E4FFC
 * Callers:
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402E4FFC
 * Reason: Hex-Rays returned no pseudocode for 0x1402E4FFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E4FFC: mov     r11, rsp
 * 00000001402E4FFF: mov     [r11+8], rbx
 * 00000001402E5003: mov     [r11+10h], rsi
 * 00000001402E5007: mov     [r11+18h], rdi
 * 00000001402E500B: push    r14
 * 00000001402E500D: sub     rsp, 70h
 * 00000001402E5011: mov     [rsp+78h+var_18], 80000000h
 * 00000001402E5019: mov     esi, 8
 * 00000001402E501E: mov     rdi, r9
 * 00000001402E5021: mov     bl, r8b
 * 00000001402E5024: lea     r14d, [rsi+3Ah]
 * 00000001402E5028: test    dl, dl
 * 00000001402E502A: jz      short loc_1402E5072
 * 00000001402E502C: and     qword ptr [r11-28h], 0
 * 00000001402E5031: lea     rdx, [r11+58h]
 * 00000001402E5035: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E503C: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5043: mov     [r11-30h], rsi
 * 00000001402E5047: mov     r9d, r14d
 * 00000001402E504A: mov     [r11-38h], rdx
 * 00000001402E504E: lea     rdx, [r11+50h]
 * 00000001402E5052: mov     [r11-40h], rsi
 * 00000001402E5056: mov     [r11-48h], rdx
 * 00000001402E505A: lea     rdx, [r11-18h]
 * 00000001402E505E: mov     qword ptr [r11-50h], 4
 * 00000001402E5066: mov     [r11-58h], rdx
 * 00000001402E506A: lea     edx, [rsi+23h]
 * 00000001402E506D: call    _guard_dispatch_icall
 * 00000001402E5072: test    bl, bl
 * 00000001402E5074: jz      short loc_1402E50D8
 * 00000001402E5076: and     [rsp+78h+var_20], 0
 * 00000001402E507C: lea     rax, [rsp+78h+arg_50]
 * 00000001402E5084: mov     [rsp+78h+var_28], rsi
 * 00000001402E5089: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5090: mov     [rsp+78h+var_30], rax
 * 00000001402E5095: mov     edx, 3
 * 00000001402E509A: mov     [rsp+78h+var_38], rsi
 * 00000001402E509F: lea     rax, [rsp+78h+arg_48]
 * 00000001402E50A7: mov     [rsp+78h+var_40], rax
 * 00000001402E50AC: mov     rcx, rdi
 * 00000001402E50AF: lea     rax, [rsp+78h+var_18]
 * 00000001402E50B4: mov     [rsp+78h+var_48], 4
 * 00000001402E50BD: mov     [rsp+78h+var_50], rax
 * 00000001402E50C2: lea     r8d, [rdx+6]
 * 00000001402E50C6: mov     [rsp+78h+var_58], r14w
 * 00000001402E50CC: call    cs:__imp_WppAutoLogTrace
 * 00000001402E50D3: nop     dword ptr [rax+rax+00h]
 * 00000001402E50D8: lea     r11, [rsp+78h+var_8]
 * 00000001402E50DD: mov     rbx, [r11+10h]
 * 00000001402E50E1: mov     rsi, [r11+18h]
 * 00000001402E50E5: mov     rdi, [r11+20h]
 * 00000001402E50E9: mov     rsp, r11
 * 00000001402E50EC: pop     r14
 * 00000001402E50EE: retn
 */
