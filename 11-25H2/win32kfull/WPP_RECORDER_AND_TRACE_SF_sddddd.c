/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402DB3BC
 * Callers:
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D6458 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402DB3BC
 * Reason: Hex-Rays returned no pseudocode for 0x1402DB3BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402DB3BC: mov     [rsp+arg_0], rbx
 * 00000001402DB3C1: mov     [rsp+arg_8], rbp
 * 00000001402DB3C6: mov     [rsp+arg_10], rsi
 * 00000001402DB3CB: push    rdi
 * 00000001402DB3CC: push    r13
 * 00000001402DB3CE: push    r15
 * 00000001402DB3D0: sub     rsp, 90h
 * 00000001402DB3D7: mov     rdi, [rsp+0A8h+arg_40]
 * 00000001402DB3DF: lea     r13, aNull; "NULL"
 * 00000001402DB3E6: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402DB3EA: mov     sil, r8b
 * 00000001402DB3ED: mov     rbp, r9
 * 00000001402DB3F0: mov     r11, rcx
 * 00000001402DB3F3: mov     r8d, 91h
 * 00000001402DB3F9: lea     r15d, [rbx+5]
 * 00000001402DB3FD: test    dl, dl
 * 00000001402DB3FF: jz      loc_1402DB4BE
 * 00000001402DB405: mov     r10, cs:pfnWppTraceMessage
 * 00000001402DB40C: test    rdi, rdi
 * 00000001402DB40F: jz      short loc_1402DB422
 * 00000001402DB411: mov     rax, rbx
 * 00000001402DB414: inc     rax
 * 00000001402DB417: cmp     byte ptr [rdi+rax], 0
 * 00000001402DB41B: jnz     short loc_1402DB414
 * 00000001402DB41D: inc     rax
 * 00000001402DB420: jmp     short loc_1402DB427
 * 00000001402DB422: mov     eax, 5
 * 00000001402DB427: test    rdi, rdi
 * 00000001402DB42A: lea     rdx, [rsp+0A8h+arg_68]
 * 00000001402DB432: mov     r9d, r8d
 * 00000001402DB435: mov     rcx, rdi
 * 00000001402DB438: cmovz   rcx, r13
 * 00000001402DB43C: lea     r8, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001402DB443: and     [rsp+0A8h+var_28], 0
 * 00000001402DB44C: mov     [rsp+0A8h+var_30], r15
 * 00000001402DB451: mov     [rsp+0A8h+var_38], rdx
 * 00000001402DB456: lea     rdx, [rsp+0A8h+arg_60]
 * 00000001402DB45E: mov     [rsp+0A8h+var_40], r15
 * 00000001402DB463: mov     [rsp+0A8h+var_48], rdx
 * 00000001402DB468: lea     rdx, [rsp+0A8h+arg_58]
 * 00000001402DB470: mov     [rsp+0A8h+var_50], r15
 * 00000001402DB475: mov     [rsp+0A8h+var_58], rdx
 * 00000001402DB47A: lea     rdx, [rsp+0A8h+arg_50]
 * 00000001402DB482: mov     [rsp+0A8h+var_60], r15
 * 00000001402DB487: mov     [rsp+0A8h+var_68], rdx
 * 00000001402DB48C: lea     rdx, [rsp+0A8h+arg_48]
 * 00000001402DB494: mov     [rsp+0A8h+var_70], r15
 * 00000001402DB499: mov     [rsp+0A8h+var_78], rdx
 * 00000001402DB49E: mov     edx, 2Bh ; '+'
 * 00000001402DB4A3: mov     [rsp+0A8h+var_80], rax
 * 00000001402DB4A8: mov     rax, r10
 * 00000001402DB4AB: mov     [rsp+0A8h+var_88], rcx
 * 00000001402DB4B0: mov     rcx, r11
 * 00000001402DB4B3: call    _guard_dispatch_icall
 * 00000001402DB4B8: mov     r8d, 91h
 * 00000001402DB4BE: test    sil, sil
 * 00000001402DB4C1: jz      loc_1402DB578
 * 00000001402DB4C7: test    rdi, rdi
 * 00000001402DB4CA: jz      short loc_1402DB4DA
 * 00000001402DB4CC: inc     rbx
 * 00000001402DB4CF: cmp     byte ptr [rdi+rbx], 0
 * 00000001402DB4D3: jnz     short loc_1402DB4CC
 * 00000001402DB4D5: inc     rbx
 * 00000001402DB4D8: jmp     short loc_1402DB4DF
 * 00000001402DB4DA: mov     ebx, 5
 * 00000001402DB4DF: test    rdi, rdi
 * 00000001402DB4E2: lea     rax, [rsp+0A8h+arg_68]
 * 00000001402DB4EA: lea     r9, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001402DB4F1: mov     edx, r15d
 * 00000001402DB4F4: cmovz   rdi, r13
 * 00000001402DB4F8: mov     rcx, rbp
 * 00000001402DB4FB: and     [rsp+0A8h+var_20], 0
 * 00000001402DB504: mov     [rsp+0A8h+var_28], r15
 * 00000001402DB50C: mov     [rsp+0A8h+var_30], rax
 * 00000001402DB511: lea     rax, [rsp+0A8h+arg_60]
 * 00000001402DB519: mov     [rsp+0A8h+var_38], r15
 * 00000001402DB51E: mov     [rsp+0A8h+var_40], rax
 * 00000001402DB523: lea     rax, [rsp+0A8h+arg_58]
 * 00000001402DB52B: mov     [rsp+0A8h+var_48], r15
 * 00000001402DB530: mov     [rsp+0A8h+var_50], rax
 * 00000001402DB535: lea     rax, [rsp+0A8h+arg_50]
 * 00000001402DB53D: mov     [rsp+0A8h+var_58], r15
 * 00000001402DB542: mov     [rsp+0A8h+var_60], rax
 * 00000001402DB547: lea     rax, [rsp+0A8h+arg_48]
 * 00000001402DB54F: mov     [rsp+0A8h+var_68], r15
 * 00000001402DB554: mov     [rsp+0A8h+var_70], rax
 * 00000001402DB559: mov     [rsp+0A8h+var_78], rbx
 * 00000001402DB55E: mov     [rsp+0A8h+var_80], rdi
 * 00000001402DB563: mov     word ptr [rsp+0A8h+var_88], r8w
 * 00000001402DB569: mov     r8d, r15d
 * 00000001402DB56C: call    cs:__imp_WppAutoLogTrace
 * 00000001402DB573: nop     dword ptr [rax+rax+00h]
 * 00000001402DB578: lea     r11, [rsp+0A8h+var_18]
 * 00000001402DB580: mov     rbx, [r11+20h]
 * 00000001402DB584: mov     rbp, [r11+28h]
 * 00000001402DB588: mov     rsi, [r11+30h]
 * 00000001402DB58C: mov     rsp, r11
 * 00000001402DB58F: pop     r15
 * 00000001402DB591: pop     r13
 * 00000001402DB593: pop     rdi
 * 00000001402DB594: retn
 */
