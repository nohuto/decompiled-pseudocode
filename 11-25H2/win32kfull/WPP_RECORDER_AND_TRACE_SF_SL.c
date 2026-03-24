/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401EA798
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401EA798
 * Reason: Hex-Rays returned no pseudocode for 0x1401EA798
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401EA798: mov     rax, rsp
 * 00000001401EA79B: mov     [rax+8], rbx
 * 00000001401EA79F: mov     [rax+10h], rbp
 * 00000001401EA7A3: mov     [rax+18h], rsi
 * 00000001401EA7A7: mov     [rax+20h], rdi
 * 00000001401EA7AB: push    r13
 * 00000001401EA7AD: push    r14
 * 00000001401EA7AF: push    r15
 * 00000001401EA7B1: sub     rsp, 50h
 * 00000001401EA7B5: mov     rbx, [rsp+68h+arg_40]
 * 00000001401EA7BD: lea     r13, aNull_0; "NULL"
 * 00000001401EA7C4: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401EA7C8: xor     r15d, r15d
 * 00000001401EA7CB: mov     bpl, r8b
 * 00000001401EA7CE: mov     r14, r9
 * 00000001401EA7D1: mov     r11, rcx
 * 00000001401EA7D4: lea     esi, [rdi+0Bh]
 * 00000001401EA7D7: lea     r8d, [rdi+1Ah]
 * 00000001401EA7DB: test    dl, dl
 * 00000001401EA7DD: jnz     loc_1401EA870
 * 00000001401EA7E3: test    bpl, bpl
 * 00000001401EA7E6: jz      short loc_1401EA850
 * 00000001401EA7E8: test    rbx, rbx
 * 00000001401EA7EB: jz      short loc_1401EA802
 * 00000001401EA7ED: inc     rdi
 * 00000001401EA7F0: cmp     [rbx+rdi*2], r15w
 * 00000001401EA7F5: jnz     short loc_1401EA7ED
 * 00000001401EA7F7: lea     rsi, ds:2[rdi*2]
 * 00000001401EA7FF: test    rbx, rbx
 * 00000001401EA802: mov     [rsp+68h+var_20], r15
 * 00000001401EA807: lea     rax, [rsp+68h+arg_48]
 * 00000001401EA80F: mov     [rsp+68h+var_28], 4
 * 00000001401EA818: lea     r9, WPP_e1faede55423302b9088ff86a1f044f2_Traceguids
 * 00000001401EA81F: mov     [rsp+68h+var_30], rax
 * 00000001401EA824: mov     edx, 4
 * 00000001401EA829: cmovz   rbx, r13
 * 00000001401EA82D: mov     [rsp+68h+var_38], rsi
 * 00000001401EA832: mov     [rsp+68h+var_40], rbx
 * 00000001401EA837: mov     rcx, r14
 * 00000001401EA83A: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001401EA840: lea     r8d, [rdx-1]
 * 00000001401EA844: call    cs:__imp_WppAutoLogTrace
 * 00000001401EA84B: nop     dword ptr [rax+rax+00h]
 * 00000001401EA850: lea     r11, [rsp+68h+var_18]
 * 00000001401EA855: mov     rbx, [r11+20h]
 * 00000001401EA859: mov     rbp, [r11+28h]
 * 00000001401EA85D: mov     rsi, [r11+30h]
 * 00000001401EA861: mov     rdi, [r11+38h]
 * 00000001401EA865: mov     rsp, r11
 * 00000001401EA868: pop     r15
 * 00000001401EA86A: pop     r14
 * 00000001401EA86C: pop     r13
 * 00000001401EA86E: retn
 * 00000001401EA870: mov     r10, cs:pfnWppTraceMessage
 * 00000001401EA877: test    rbx, rbx
 * 00000001401EA87A: jz      short loc_1401EA893
 * 00000001401EA87C: mov     rax, rdi
 * 00000001401EA87F: inc     rax
 * 00000001401EA882: cmp     [rbx+rax*2], r15w
 * 00000001401EA887: jnz     short loc_1401EA87F
 * 00000001401EA889: lea     rax, ds:2[rax*2]
 * 00000001401EA891: jmp     short loc_1401EA896
 * 00000001401EA893: mov     rax, rsi
 * 00000001401EA896: mov     [rsp+68h+var_28], r15
 * 00000001401EA89B: lea     rdx, [rsp+68h+arg_48]
 * 00000001401EA8A3: mov     [rsp+68h+var_30], 4
 * 00000001401EA8AC: test    rbx, rbx
 * 00000001401EA8AF: mov     [rsp+68h+var_38], rdx
 * 00000001401EA8B4: mov     r9d, r8d
 * 00000001401EA8B7: mov     [rsp+68h+var_40], rax
 * 00000001401EA8BC: lea     r8, WPP_e1faede55423302b9088ff86a1f044f2_Traceguids
 * 00000001401EA8C3: mov     rcx, rbx
 * 00000001401EA8C6: mov     edx, 2Bh ; '+'
 * 00000001401EA8CB: cmovz   rcx, r13
 * 00000001401EA8CF: mov     rax, r10
 * 00000001401EA8D2: mov     [rsp+68h+var_48], rcx
 * 00000001401EA8D7: mov     rcx, r11
 * 00000001401EA8DA: call    _guard_dispatch_icall
 * 00000001401EA8DF: mov     r8d, 19h
 * 00000001401EA8E5: jmp     loc_1401EA7E3
 */
