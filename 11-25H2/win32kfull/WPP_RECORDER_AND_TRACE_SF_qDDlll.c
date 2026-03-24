/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDDlll @ 0x1402E58F0
 * Callers:
 *     xxxEnableWndSBArrows @ 0x1401E8CE0 (xxxEnableWndSBArrows.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDDlll @ 0x1402E58F0
 * Reason: Hex-Rays returned no pseudocode for 0x1402E58F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E58F0: mov     r11, rsp
 * 00000001402E58F3: mov     [r11+8], rbx
 * 00000001402E58F7: mov     [r11+10h], rsi
 * 00000001402E58FB: mov     [r11+18h], rdi
 * 00000001402E58FF: mov     [r11+20h], r15
 * 00000001402E5903: push    rbp
 * 00000001402E5904: lea     rbp, [r11-0Fh]
 * 00000001402E5908: sub     rsp, 90h
 * 00000001402E590F: mov     esi, 4
 * 00000001402E5914: mov     rdi, r9
 * 00000001402E5917: mov     bl, r8b
 * 00000001402E591A: lea     r15d, [rsi+0Bh]
 * 00000001402E591E: test    dl, dl
 * 00000001402E5920: jz      short loc_1402E598C
 * 00000001402E5922: and     qword ptr [r11-18h], 0
 * 00000001402E5927: lea     rdx, [rbp+7+arg_68]
 * 00000001402E592B: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E5932: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5939: mov     [r11-20h], rsi
 * 00000001402E593D: mov     r9d, r15d
 * 00000001402E5940: mov     [r11-28h], rdx
 * 00000001402E5944: lea     rdx, [rbp+7+arg_60]
 * 00000001402E5948: mov     [r11-30h], rsi
 * 00000001402E594C: mov     [r11-38h], rdx
 * 00000001402E5950: lea     rdx, [rbp+7+arg_58]
 * 00000001402E5954: mov     [r11-40h], rsi
 * 00000001402E5958: mov     [r11-48h], rdx
 * 00000001402E595C: lea     rdx, [rbp+7+arg_50]
 * 00000001402E5960: mov     [r11-50h], rsi
 * 00000001402E5964: mov     [r11-58h], rdx
 * 00000001402E5968: lea     rdx, [rbp+7+arg_48]
 * 00000001402E596C: mov     [r11-60h], rsi
 * 00000001402E5970: mov     [r11-68h], rdx
 * 00000001402E5974: lea     rdx, [rbp+7+arg_40]
 * 00000001402E5978: mov     qword ptr [r11-70h], 8
 * 00000001402E5980: mov     [r11-78h], rdx
 * 00000001402E5984: lea     edx, [rsi+27h]
 * 00000001402E5987: call    _guard_dispatch_icall
 * 00000001402E598C: test    bl, bl
 * 00000001402E598E: jz      loc_1402E5A1C
 * 00000001402E5994: and     qword ptr [rsp+90h+var_8], 0
 * 00000001402E599D: lea     rax, [rbp+7+arg_68]
 * 00000001402E59A1: mov     [rsp+90h+var_10], rsi
 * 00000001402E59A9: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E59B0: mov     [rsp+90h+var_18], rax
 * 00000001402E59B5: mov     r8d, 9
 * 00000001402E59BB: mov     [rsp+90h+var_20], rsi
 * 00000001402E59C0: lea     rax, [rbp+7+arg_60]
 * 00000001402E59C4: mov     [rsp+90h+var_28], rax
 * 00000001402E59C9: mov     edx, esi
 * 00000001402E59CB: mov     [rsp+90h+var_30], rsi
 * 00000001402E59D0: lea     rax, [rbp+7+arg_58]
 * 00000001402E59D4: mov     [rsp+90h+var_38], rax
 * 00000001402E59D9: mov     rcx, rdi
 * 00000001402E59DC: mov     [rsp+90h+var_40], rsi
 * 00000001402E59E1: lea     rax, [rbp+7+arg_50]
 * 00000001402E59E5: mov     [rsp+90h+var_48], rax
 * 00000001402E59EA: lea     rax, [rbp+7+arg_48]
 * 00000001402E59EE: mov     [rsp+90h+var_50], rsi
 * 00000001402E59F3: mov     [rsp+90h+var_58], rax
 * 00000001402E59F8: lea     rax, [rbp+7+arg_40]
 * 00000001402E59FC: mov     [rsp+90h+var_60], 8
 * 00000001402E5A05: mov     [rsp+90h+var_68], rax
 * 00000001402E5A0A: mov     word ptr [rsp+90h+var_70], r15w
 * 00000001402E5A10: call    cs:__imp_WppAutoLogTrace
 * 00000001402E5A17: nop     dword ptr [rax+rax+00h]
 * 00000001402E5A1C: lea     r11, [rsp+90h+var_s0]
 * 00000001402E5A24: mov     rbx, [r11+10h]
 * 00000001402E5A28: mov     rsi, [r11+18h]
 * 00000001402E5A2C: mov     rdi, [r11+20h]
 * 00000001402E5A30: mov     r15, [r11+28h]
 * 00000001402E5A34: mov     rsp, r11
 * 00000001402E5A37: pop     rbp
 * 00000001402E5A38: retn
 */
