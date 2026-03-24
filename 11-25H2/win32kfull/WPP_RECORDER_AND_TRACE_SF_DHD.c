/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DHD @ 0x14028EB5C
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x14013677C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DHD @ 0x14028EB5C
 * Reason: Hex-Rays returned no pseudocode for 0x14028EB5C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028EB5C: mov     r11, rsp
 * 000000014028EB5F: mov     [r11+8], rbx
 * 000000014028EB63: mov     [r11+10h], rsi
 * 000000014028EB67: mov     [r11+18h], rdi
 * 000000014028EB6B: push    r14
 * 000000014028EB6D: sub     rsp, 60h
 * 000000014028EB71: mov     esi, 4
 * 000000014028EB76: mov     rdi, r9
 * 000000014028EB79: mov     bl, r8b
 * 000000014028EB7C: lea     r14d, [rsi+8]
 * 000000014028EB80: test    dl, dl
 * 000000014028EB82: jz      short loc_14028EBCA
 * 000000014028EB84: and     qword ptr [r11-18h], 0
 * 000000014028EB89: lea     rdx, [r11+58h]
 * 000000014028EB8D: mov     rax, cs:pfnWppTraceMessage
 * 000000014028EB94: lea     r8, WPP_ca1e44f75832309edeb469877726343a_Traceguids
 * 000000014028EB9B: mov     [r11-20h], rsi
 * 000000014028EB9F: mov     r9d, r14d
 * 000000014028EBA2: mov     [r11-28h], rdx
 * 000000014028EBA6: lea     rdx, [r11+50h]
 * 000000014028EBAA: mov     qword ptr [r11-30h], 2
 * 000000014028EBB2: mov     [r11-38h], rdx
 * 000000014028EBB6: lea     rdx, [r11+48h]
 * 000000014028EBBA: mov     [r11-40h], rsi
 * 000000014028EBBE: mov     [r11-48h], rdx
 * 000000014028EBC2: lea     edx, [rsi+27h]
 * 000000014028EBC5: call    _guard_dispatch_icall
 * 000000014028EBCA: test    bl, bl
 * 000000014028EBCC: jz      short loc_14028EC33
 * 000000014028EBCE: and     [rsp+68h+var_10], 0
 * 000000014028EBD4: lea     rax, [rsp+68h+arg_50]
 * 000000014028EBDC: mov     [rsp+68h+var_18], rsi
 * 000000014028EBE1: lea     r9, WPP_ca1e44f75832309edeb469877726343a_Traceguids
 * 000000014028EBE8: mov     [rsp+68h+var_20], rax
 * 000000014028EBED: mov     edx, 5
 * 000000014028EBF2: mov     [rsp+68h+var_28], 2
 * 000000014028EBFB: lea     rax, [rsp+68h+arg_48]
 * 000000014028EC03: mov     [rsp+68h+var_30], rax
 * 000000014028EC08: mov     rcx, rdi
 * 000000014028EC0B: lea     rax, [rsp+68h+arg_40]
 * 000000014028EC13: mov     [rsp+68h+var_38], rsi
 * 000000014028EC18: mov     [rsp+68h+var_40], rax
 * 000000014028EC1D: lea     r8d, [rdx+5]
 * 000000014028EC21: mov     [rsp+68h+var_48], r14w
 * 000000014028EC27: call    cs:__imp_WppAutoLogTrace
 * 000000014028EC2E: nop     dword ptr [rax+rax+00h]
 * 000000014028EC33: lea     r11, [rsp+68h+var_8]
 * 000000014028EC38: mov     rbx, [r11+10h]
 * 000000014028EC3C: mov     rsi, [r11+18h]
 * 000000014028EC40: mov     rdi, [r11+20h]
 * 000000014028EC44: mov     rsp, r11
 * 000000014028EC47: pop     r14
 * 000000014028EC49: retn
 */
