/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E60A0
 * Callers:
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x14025EB04 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDrawScrollBar @ 0x1402E847C (xxxDrawScrollBar.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E60A0
 * Reason: Hex-Rays returned no pseudocode for 0x1402E60A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E60A0: mov     r11, rsp
 * 00000001402E60A3: mov     [r11+8], rbx
 * 00000001402E60A7: mov     [r11+10h], rsi
 * 00000001402E60AB: push    rdi
 * 00000001402E60AC: sub     rsp, 50h
 * 00000001402E60B0: movzx   ebx, [rsp+58h+arg_30]
 * 00000001402E60B8: mov     rsi, r9
 * 00000001402E60BB: mov     dil, r8b
 * 00000001402E60BE: test    dl, dl
 * 00000001402E60C0: jz      short loc_1402E6102
 * 00000001402E60C2: and     qword ptr [r11-18h], 0
 * 00000001402E60C7: lea     rdx, [r11+50h]
 * 00000001402E60CB: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E60D2: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E60D9: mov     qword ptr [r11-20h], 4
 * 00000001402E60E1: mov     r9d, ebx
 * 00000001402E60E4: mov     [r11-28h], rdx
 * 00000001402E60E8: lea     rdx, [r11+48h]
 * 00000001402E60EC: mov     qword ptr [r11-30h], 8
 * 00000001402E60F4: mov     [r11-38h], rdx
 * 00000001402E60F8: mov     edx, 2Bh ; '+'
 * 00000001402E60FD: call    _guard_dispatch_icall
 * 00000001402E6102: test    dil, dil
 * 00000001402E6105: jz      short loc_1402E6162
 * 00000001402E6107: and     [rsp+58h+var_10], 0
 * 00000001402E610D: lea     rax, [rsp+58h+arg_48]
 * 00000001402E6115: movzx   edx, [rsp+58h+arg_20]
 * 00000001402E611D: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E6124: mov     [rsp+58h+var_18], 4
 * 00000001402E612D: mov     r8d, 9
 * 00000001402E6133: mov     [rsp+58h+var_20], rax
 * 00000001402E6138: mov     rcx, rsi
 * 00000001402E613B: lea     rax, [rsp+58h+arg_40]
 * 00000001402E6143: mov     [rsp+58h+var_28], 8
 * 00000001402E614C: mov     [rsp+58h+var_30], rax
 * 00000001402E6151: mov     [rsp+58h+var_38], bx
 * 00000001402E6156: call    cs:__imp_WppAutoLogTrace
 * 00000001402E615D: nop     dword ptr [rax+rax+00h]
 * 00000001402E6162: mov     rbx, [rsp+58h+arg_0]
 * 00000001402E6167: mov     rsi, [rsp+58h+arg_8]
 * 00000001402E616C: add     rsp, 50h
 * 00000001402E6170: pop     rdi
 * 00000001402E6171: retn
 */
