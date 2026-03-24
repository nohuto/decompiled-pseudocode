/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402E6650
 * Callers:
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E29E0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402E30C8 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qldddddd @ 0x1402E6650
 * Reason: Hex-Rays returned no pseudocode for 0x1402E6650
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E6650: mov     r11, rsp
 * 00000001402E6653: mov     [r11+8], rbx
 * 00000001402E6657: mov     [r11+10h], rsi
 * 00000001402E665B: mov     [r11+18h], rdi
 * 00000001402E665F: mov     [r11+20h], r14
 * 00000001402E6663: push    rbp
 * 00000001402E6664: lea     rbp, [r11-0Fh]
 * 00000001402E6668: sub     rsp, 0B0h
 * 00000001402E666F: movzx   edi, [rbp+7+arg_30]
 * 00000001402E6673: mov     rsi, r9
 * 00000001402E6676: mov     bl, r8b
 * 00000001402E6679: mov     r14d, 4
 * 00000001402E667F: test    dl, dl
 * 00000001402E6681: jz      loc_1402E6713
 * 00000001402E6687: and     qword ptr [r11-18h], 0
 * 00000001402E668C: lea     rdx, [rbp+7+arg_78]
 * 00000001402E6693: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E669A: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E66A1: mov     [r11-20h], r14
 * 00000001402E66A5: mov     r9d, edi
 * 00000001402E66A8: mov     [r11-28h], rdx
 * 00000001402E66AC: lea     rdx, [rbp+7+arg_70]
 * 00000001402E66B3: mov     [r11-30h], r14
 * 00000001402E66B7: mov     [r11-38h], rdx
 * 00000001402E66BB: lea     rdx, [rbp+7+arg_68]
 * 00000001402E66BF: mov     [r11-40h], r14
 * 00000001402E66C3: mov     [r11-48h], rdx
 * 00000001402E66C7: lea     rdx, [rbp+7+arg_60]
 * 00000001402E66CB: mov     [r11-50h], r14
 * 00000001402E66CF: mov     [r11-58h], rdx
 * 00000001402E66D3: lea     rdx, [rbp+7+arg_58]
 * 00000001402E66D7: mov     [r11-60h], r14
 * 00000001402E66DB: mov     [r11-68h], rdx
 * 00000001402E66DF: lea     rdx, [rbp+7+arg_50]
 * 00000001402E66E3: mov     [r11-70h], r14
 * 00000001402E66E7: mov     [r11-78h], rdx
 * 00000001402E66EB: lea     rdx, [rbp+7+arg_48]
 * 00000001402E66EF: mov     [r11-80h], r14
 * 00000001402E66F3: mov     [rsp+0B0h+var_80], rdx
 * 00000001402E66F8: lea     rdx, [rbp+7+arg_40]
 * 00000001402E66FC: mov     [rsp+0B0h+var_88], 8
 * 00000001402E6705: mov     [rsp+0B0h+var_90], rdx
 * 00000001402E670A: lea     edx, [r14+27h]
 * 00000001402E670E: call    _guard_dispatch_icall
 * 00000001402E6713: test    bl, bl
 * 00000001402E6715: jz      loc_1402E67D1
 * 00000001402E671B: and     qword ptr [rsp+0B0h+var_8], 0
 * 00000001402E6724: lea     rax, [rbp+7+arg_78]
 * 00000001402E672B: mov     [rsp+0B0h+var_10], r14
 * 00000001402E6733: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E673A: mov     [rsp+0B0h+var_18], rax
 * 00000001402E6742: mov     r8d, 9
 * 00000001402E6748: mov     [rsp+0B0h+var_20], r14
 * 00000001402E6750: lea     rax, [rbp+7+arg_70]
 * 00000001402E6757: mov     [rsp+0B0h+var_28], rax
 * 00000001402E675F: mov     edx, r14d
 * 00000001402E6762: mov     [rsp+0B0h+var_30], r14
 * 00000001402E676A: lea     rax, [rbp+7+arg_68]
 * 00000001402E676E: mov     [rsp+0B0h+var_38], rax
 * 00000001402E6773: mov     rcx, rsi
 * 00000001402E6776: mov     [rsp+0B0h+var_40], r14
 * 00000001402E677B: lea     rax, [rbp+7+arg_60]
 * 00000001402E677F: mov     [rsp+0B0h+var_48], rax
 * 00000001402E6784: lea     rax, [rbp+7+arg_58]
 * 00000001402E6788: mov     [rsp+0B0h+var_50], r14
 * 00000001402E678D: mov     [rsp+0B0h+var_58], rax
 * 00000001402E6792: lea     rax, [rbp+7+arg_50]
 * 00000001402E6796: mov     [rsp+0B0h+var_60], r14
 * 00000001402E679B: mov     [rsp+0B0h+var_68], rax
 * 00000001402E67A0: lea     rax, [rbp+7+arg_48]
 * 00000001402E67A4: mov     [rsp+0B0h+var_70], r14
 * 00000001402E67A9: mov     [rsp+0B0h+var_78], rax
 * 00000001402E67AE: lea     rax, [rbp+7+arg_40]
 * 00000001402E67B2: mov     [rsp+0B0h+var_80], 8
 * 00000001402E67BB: mov     [rsp+0B0h+var_88], rax
 * 00000001402E67C0: mov     word ptr [rsp+0B0h+var_90], di
 * 00000001402E67C5: call    cs:__imp_WppAutoLogTrace
 * 00000001402E67CC: nop     dword ptr [rax+rax+00h]
 * 00000001402E67D1: lea     r11, [rsp+0B0h+var_s0]
 * 00000001402E67D9: mov     rbx, [r11+10h]
 * 00000001402E67DD: mov     rsi, [r11+18h]
 * 00000001402E67E1: mov     rdi, [r11+20h]
 * 00000001402E67E5: mov     r14, [r11+28h]
 * 00000001402E67E9: mov     rsp, r11
 * 00000001402E67EC: pop     rbp
 * 00000001402E67ED: retn
 */
