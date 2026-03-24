/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDll @ 0x1402CA75C
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDll @ 0x1402CA75C
 * Reason: Hex-Rays returned no pseudocode for 0x1402CA75C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402CA75C: mov     r11, rsp
 * 00000001402CA75F: mov     [r11+8], rbx
 * 00000001402CA763: mov     [r11+10h], rsi
 * 00000001402CA767: mov     [r11+18h], rdi
 * 00000001402CA76B: push    r14
 * 00000001402CA76D: sub     rsp, 80h
 * 00000001402CA774: mov     [rsp+88h+var_18], 81h
 * 00000001402CA77C: mov     esi, 4
 * 00000001402CA781: mov     rdi, r9
 * 00000001402CA784: mov     bl, r8b
 * 00000001402CA787: lea     r14d, [rsi+6]
 * 00000001402CA78B: test    dl, dl
 * 00000001402CA78D: jz      short loc_1402CA7E1
 * 00000001402CA78F: and     qword ptr [r11-28h], 0
 * 00000001402CA794: lea     rdx, [r11+60h]
 * 00000001402CA798: mov     rax, cs:pfnWppTraceMessage
 * 00000001402CA79F: lea     r8, WPP_e7f9d892a7df3bd3258e6ab52dcaf87a_Traceguids
 * 00000001402CA7A6: mov     [r11-30h], rsi
 * 00000001402CA7AA: mov     r9d, r14d
 * 00000001402CA7AD: mov     [r11-38h], rdx
 * 00000001402CA7B1: lea     rdx, [r11+58h]
 * 00000001402CA7B5: mov     [r11-40h], rsi
 * 00000001402CA7B9: mov     [r11-48h], rdx
 * 00000001402CA7BD: lea     rdx, [r11-18h]
 * 00000001402CA7C1: mov     [r11-50h], rsi
 * 00000001402CA7C5: mov     [r11-58h], rdx
 * 00000001402CA7C9: lea     rdx, [r11+48h]
 * 00000001402CA7CD: mov     qword ptr [r11-60h], 8
 * 00000001402CA7D5: mov     [r11-68h], rdx
 * 00000001402CA7D9: lea     edx, [rsi+27h]
 * 00000001402CA7DC: call    _guard_dispatch_icall
 * 00000001402CA7E1: test    bl, bl
 * 00000001402CA7E3: jz      short loc_1402CA858
 * 00000001402CA7E5: and     [rsp+88h+var_20], 0
 * 00000001402CA7EB: lea     rax, [rsp+88h+arg_58]
 * 00000001402CA7F3: mov     [rsp+88h+var_28], rsi
 * 00000001402CA7F8: lea     r9, WPP_e7f9d892a7df3bd3258e6ab52dcaf87a_Traceguids
 * 00000001402CA7FF: mov     [rsp+88h+var_30], rax
 * 00000001402CA804: mov     r8d, 9
 * 00000001402CA80A: mov     [rsp+88h+var_38], rsi
 * 00000001402CA80F: lea     rax, [rsp+88h+arg_50]
 * 00000001402CA817: mov     [rsp+88h+var_40], rax
 * 00000001402CA81C: mov     edx, esi
 * 00000001402CA81E: mov     [rsp+88h+var_48], rsi
 * 00000001402CA823: lea     rax, [rsp+88h+var_18]
 * 00000001402CA828: mov     [rsp+88h+var_50], rax
 * 00000001402CA82D: mov     rcx, rdi
 * 00000001402CA830: lea     rax, [rsp+88h+arg_40]
 * 00000001402CA838: mov     [rsp+88h+var_58], 8
 * 00000001402CA841: mov     [rsp+88h+var_60], rax
 * 00000001402CA846: mov     [rsp+88h+var_68], r14w
 * 00000001402CA84C: call    cs:__imp_WppAutoLogTrace
 * 00000001402CA853: nop     dword ptr [rax+rax+00h]
 * 00000001402CA858: lea     r11, [rsp+88h+var_8]
 * 00000001402CA860: mov     rbx, [r11+10h]
 * 00000001402CA864: mov     rsi, [r11+18h]
 * 00000001402CA868: mov     rdi, [r11+20h]
 * 00000001402CA86C: mov     rsp, r11
 * 00000001402CA86F: pop     r14
 * 00000001402CA871: retn
 */
