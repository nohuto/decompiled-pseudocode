/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638
 * Callers:
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     NtUserSBGetParms @ 0x14024C8E0 (NtUserSBGetParms.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D2C50 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638
 * Reason: Hex-Rays returned no pseudocode for 0x140272638
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140272638: mov     rax, rsp
 * 000000014027263B: mov     [rax+8], rbx
 * 000000014027263F: mov     [rax+10h], rbp
 * 0000000140272643: mov     [rax+18h], rsi
 * 0000000140272647: mov     [rax+20h], rdi
 * 000000014027264B: push    r14
 * 000000014027264D: sub     rsp, 50h
 * 0000000140272651: mov     rdi, [rsp+58h+arg_40]
 * 0000000140272659: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014027265D: movzx   ebp, [rsp+58h+arg_30]
 * 0000000140272665: mov     sil, r8b
 * 0000000140272668: lea     r8, aNull; "NULL"
 * 000000014027266F: mov     r14, r9
 * 0000000140272672: mov     r11, rcx
 * 0000000140272675: test    dl, dl
 * 0000000140272677: jz      short loc_1402726ED
 * 0000000140272679: mov     r10, cs:pfnWppTraceMessage
 * 0000000140272680: test    rdi, rdi
 * 0000000140272683: jz      short loc_140272696
 * 0000000140272685: mov     rax, rbx
 * 0000000140272688: inc     rax
 * 000000014027268B: cmp     byte ptr [rdi+rax], 0
 * 000000014027268F: jnz     short loc_140272688
 * 0000000140272691: inc     rax
 * 0000000140272694: jmp     short loc_14027269B
 * 0000000140272696: mov     eax, 5
 * 000000014027269B: lea     rdx, [rsp+58h+arg_48]
 * 00000001402726A3: test    rdi, rdi
 * 00000001402726A6: mov     rcx, rdi
 * 00000001402726A9: mov     r9d, ebp
 * 00000001402726AC: cmovz   rcx, r8
 * 00000001402726B0: and     [rsp+58h+var_18], 0
 * 00000001402726B6: mov     r8, [rsp+58h+arg_38]
 * 00000001402726BE: mov     [rsp+58h+var_20], 8
 * 00000001402726C7: mov     [rsp+58h+var_28], rdx
 * 00000001402726CC: mov     edx, 2Bh ; '+'
 * 00000001402726D1: mov     [rsp+58h+var_30], rax
 * 00000001402726D6: mov     rax, r10
 * 00000001402726D9: mov     [rsp+58h+var_38], rcx
 * 00000001402726DE: mov     rcx, r11
 * 00000001402726E1: call    _guard_dispatch_icall
 * 00000001402726E6: lea     r8, aNull; "NULL"
 * 00000001402726ED: test    sil, sil
 * 00000001402726F0: jz      short loc_140272763
 * 00000001402726F2: test    rdi, rdi
 * 00000001402726F5: jz      short loc_140272705
 * 00000001402726F7: inc     rbx
 * 00000001402726FA: cmp     byte ptr [rdi+rbx], 0
 * 00000001402726FE: jnz     short loc_1402726F7
 * 0000000140272700: inc     rbx
 * 0000000140272703: jmp     short loc_14027270A
 * 0000000140272705: mov     ebx, 5
 * 000000014027270A: mov     r9, [rsp+58h+arg_38]
 * 0000000140272712: lea     rax, [rsp+58h+arg_48]
 * 000000014027271A: movzx   edx, [rsp+58h+arg_20]
 * 0000000140272722: test    rdi, rdi
 * 0000000140272725: mov     rcx, r14
 * 0000000140272728: cmovz   rdi, r8
 * 000000014027272C: and     [rsp+58h+var_10], 0
 * 0000000140272732: mov     r8d, [rsp+58h+arg_28]
 * 000000014027273A: mov     [rsp+58h+var_18], 8
 * 0000000140272743: mov     [rsp+58h+var_20], rax
 * 0000000140272748: mov     [rsp+58h+var_28], rbx
 * 000000014027274D: mov     [rsp+58h+var_30], rdi
 * 0000000140272752: mov     word ptr [rsp+58h+var_38], bp
 * 0000000140272757: call    cs:__imp_WppAutoLogTrace
 * 000000014027275E: nop     dword ptr [rax+rax+00h]
 * 0000000140272763: mov     rbx, [rsp+58h+arg_0]
 * 0000000140272768: mov     rbp, [rsp+58h+arg_8]
 * 000000014027276D: mov     rsi, [rsp+58h+arg_10]
 * 0000000140272772: mov     rdi, [rsp+58h+arg_18]
 * 0000000140272777: add     rsp, 50h
 * 000000014027277B: pop     r14
 * 000000014027277D: retn
 */
