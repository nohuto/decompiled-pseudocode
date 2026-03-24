/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_didi @ 0x14027AF64
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_didi @ 0x14027AF64
 * Reason: Hex-Rays returned no pseudocode for 0x14027AF64
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014027AF64: mov     r11, rsp
 * 000000014027AF67: mov     [r11+8], rbx
 * 000000014027AF6B: mov     [r11+10h], rbp
 * 000000014027AF6F: mov     [r11+18h], rsi
 * 000000014027AF73: mov     [r11+20h], rdi
 * 000000014027AF77: push    r14
 * 000000014027AF79: sub     rsp, 70h
 * 000000014027AF7D: mov     esi, 8
 * 000000014027AF82: mov     rdi, r9
 * 000000014027AF85: mov     bl, r8b
 * 000000014027AF88: lea     ebp, [rsi-4]
 * 000000014027AF8B: lea     r14d, [rsi+24h]
 * 000000014027AF8F: test    dl, dl
 * 000000014027AF91: jz      short loc_14027AFE1
 * 000000014027AF93: and     qword ptr [r11-18h], 0
 * 000000014027AF98: lea     rdx, [r11+60h]
 * 000000014027AF9C: mov     rax, cs:pfnWppTraceMessage
 * 000000014027AFA3: lea     r8, WPP_0188b97e70b83b293653bee646bd69b6_Traceguids
 * 000000014027AFAA: mov     [r11-20h], rsi
 * 000000014027AFAE: mov     r9d, r14d
 * 000000014027AFB1: mov     [r11-28h], rdx
 * 000000014027AFB5: lea     rdx, [r11+58h]
 * 000000014027AFB9: mov     [r11-30h], rbp
 * 000000014027AFBD: mov     [r11-38h], rdx
 * 000000014027AFC1: lea     rdx, [r11+50h]
 * 000000014027AFC5: mov     [r11-40h], rsi
 * 000000014027AFC9: mov     [r11-48h], rdx
 * 000000014027AFCD: lea     rdx, [r11+48h]
 * 000000014027AFD1: mov     [r11-50h], rbp
 * 000000014027AFD5: mov     [r11-58h], rdx
 * 000000014027AFD9: lea     edx, [rsi+23h]
 * 000000014027AFDC: call    _guard_dispatch_icall
 * 000000014027AFE1: test    bl, bl
 * 000000014027AFE3: jz      short loc_14027B058
 * 000000014027AFE5: and     [rsp+78h+var_10], 0
 * 000000014027AFEB: lea     rax, [rsp+78h+arg_58]
 * 000000014027AFF3: mov     [rsp+78h+var_18], rsi
 * 000000014027AFF8: lea     r9, WPP_0188b97e70b83b293653bee646bd69b6_Traceguids
 * 000000014027AFFF: mov     [rsp+78h+var_20], rax
 * 000000014027B004: mov     edx, 2
 * 000000014027B009: mov     [rsp+78h+var_28], rbp
 * 000000014027B00E: lea     rax, [rsp+78h+arg_50]
 * 000000014027B016: mov     [rsp+78h+var_30], rax
 * 000000014027B01B: mov     rcx, rdi
 * 000000014027B01E: mov     [rsp+78h+var_38], rsi
 * 000000014027B023: lea     rax, [rsp+78h+arg_48]
 * 000000014027B02B: mov     [rsp+78h+var_40], rax
 * 000000014027B030: lea     r8d, [rdx+12h]
 * 000000014027B034: lea     rax, [rsp+78h+arg_40]
 * 000000014027B03C: mov     [rsp+78h+var_48], rbp
 * 000000014027B041: mov     [rsp+78h+var_50], rax
 * 000000014027B046: mov     [rsp+78h+var_58], r14w
 * 000000014027B04C: call    cs:__imp_WppAutoLogTrace
 * 000000014027B053: nop     dword ptr [rax+rax+00h]
 * 000000014027B058: lea     r11, [rsp+78h+var_8]
 * 000000014027B05D: mov     rbx, [r11+10h]
 * 000000014027B061: mov     rbp, [r11+18h]
 * 000000014027B065: mov     rsi, [r11+20h]
 * 000000014027B069: mov     rdi, [r11+28h]
 * 000000014027B06D: mov     rsp, r11
 * 000000014027B070: pop     r14
 * 000000014027B072: retn
 */
