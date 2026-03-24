/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqi @ 0x1402772D0
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x140119B20 (EditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqi @ 0x1402772D0
 * Reason: Hex-Rays returned no pseudocode for 0x1402772D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402772D0: mov     r11, rsp
 * 00000001402772D3: mov     [r11+8], rbx
 * 00000001402772D7: mov     [r11+10h], rbp
 * 00000001402772DB: mov     [r11+18h], rsi
 * 00000001402772DF: push    rdi
 * 00000001402772E0: sub     rsp, 60h
 * 00000001402772E4: mov     ebp, 2Bh ; '+'
 * 00000001402772E9: mov     rdi, r9
 * 00000001402772EC: mov     bl, r8b
 * 00000001402772EF: lea     esi, [rbp-23h]
 * 00000001402772F2: test    dl, dl
 * 00000001402772F4: jz      short loc_140277337
 * 00000001402772F6: and     qword ptr [r11-18h], 0
 * 00000001402772FB: lea     rdx, [r11+58h]
 * 00000001402772FF: mov     rax, cs:pfnWppTraceMessage
 * 0000000140277306: lea     r8, WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids
 * 000000014027730D: mov     [r11-20h], rsi
 * 0000000140277311: mov     r9d, ebp
 * 0000000140277314: mov     [r11-28h], rdx
 * 0000000140277318: lea     rdx, [r11+50h]
 * 000000014027731C: mov     [r11-30h], rsi
 * 0000000140277320: mov     [r11-38h], rdx
 * 0000000140277324: lea     rdx, [r11+48h]
 * 0000000140277328: mov     [r11-40h], rsi
 * 000000014027732C: mov     [r11-48h], rdx
 * 0000000140277330: mov     edx, ebp
 * 0000000140277332: call    _guard_dispatch_icall
 * 0000000140277337: test    bl, bl
 * 0000000140277339: jz      short loc_14027739B
 * 000000014027733B: and     [rsp+68h+var_10], 0
 * 0000000140277341: lea     rax, [rsp+68h+arg_50]
 * 0000000140277349: mov     [rsp+68h+var_18], rsi
 * 000000014027734E: lea     r9, WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids
 * 0000000140277355: mov     [rsp+68h+var_20], rax
 * 000000014027735A: mov     edx, 4
 * 000000014027735F: mov     [rsp+68h+var_28], rsi
 * 0000000140277364: lea     rax, [rsp+68h+arg_48]
 * 000000014027736C: mov     [rsp+68h+var_30], rax
 * 0000000140277371: mov     rcx, rdi
 * 0000000140277374: lea     rax, [rsp+68h+arg_40]
 * 000000014027737C: mov     [rsp+68h+var_38], rsi
 * 0000000140277381: mov     [rsp+68h+var_40], rax
 * 0000000140277386: lea     r8d, [rdx+10h]
 * 000000014027738A: mov     [rsp+68h+var_48], bp
 * 000000014027738F: call    cs:__imp_WppAutoLogTrace
 * 0000000140277396: nop     dword ptr [rax+rax+00h]
 * 000000014027739B: lea     r11, [rsp+68h+var_8]
 * 00000001402773A0: mov     rbx, [r11+10h]
 * 00000001402773A4: mov     rbp, [r11+18h]
 * 00000001402773A8: mov     rsi, [r11+20h]
 * 00000001402773AC: mov     rsp, r11
 * 00000001402773AF: pop     rdi
 * 00000001402773B0: retn
 */
