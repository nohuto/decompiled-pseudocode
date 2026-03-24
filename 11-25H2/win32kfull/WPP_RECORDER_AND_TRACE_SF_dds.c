/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dds @ 0x1401F5620
 * Callers:
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x14014B688 (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x14018D4E0 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dds @ 0x1401F5620
 * Reason: Hex-Rays returned no pseudocode for 0x1401F5620
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401F5620: mov     [rsp+arg_0], rbx
 * 00000001401F5625: mov     [rsp+arg_8], rbp
 * 00000001401F562A: mov     [rsp+arg_10], rsi
 * 00000001401F562F: push    rdi
 * 00000001401F5630: push    r12
 * 00000001401F5632: push    r14
 * 00000001401F5634: sub     rsp, 60h
 * 00000001401F5638: mov     rdi, [rsp+78h+arg_50]
 * 00000001401F5640: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401F5644: movzx   ebp, [rsp+78h+arg_30]
 * 00000001401F564C: mov     sil, r8b
 * 00000001401F564F: lea     r8, aNull; "NULL"
 * 00000001401F5656: mov     r14, r9
 * 00000001401F5659: mov     r11, rcx
 * 00000001401F565C: lea     r12d, [rbx+5]
 * 00000001401F5660: test    dl, dl
 * 00000001401F5662: jnz     loc_1401F5706
 * 00000001401F5668: test    sil, sil
 * 00000001401F566B: jz      short loc_1401F56E1
 * 00000001401F566D: test    rdi, rdi
 * 00000001401F5670: jz      loc_1401F56FC
 * 00000001401F5676: inc     rbx
 * 00000001401F5679: cmp     byte ptr [rdi+rbx], 0
 * 00000001401F567D: jnz     short loc_1401F5676
 * 00000001401F567F: inc     rbx
 * 00000001401F5682: test    rdi, rdi
 * 00000001401F5685: lea     rax, [rsp+78h+arg_48]
 * 00000001401F568D: lea     r9, WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids
 * 00000001401F5694: mov     edx, r12d
 * 00000001401F5697: cmovz   rdi, r8
 * 00000001401F569B: mov     rcx, r14
 * 00000001401F569E: and     [rsp+78h+var_20], 0
 * 00000001401F56A4: mov     r8d, 1
 * 00000001401F56AA: mov     [rsp+78h+var_28], rbx
 * 00000001401F56AF: mov     [rsp+78h+var_30], rdi
 * 00000001401F56B4: mov     [rsp+78h+var_38], r12
 * 00000001401F56B9: mov     [rsp+78h+var_40], rax
 * 00000001401F56BE: lea     rax, [rsp+78h+arg_40]
 * 00000001401F56C6: mov     [rsp+78h+var_48], r12
 * 00000001401F56CB: mov     [rsp+78h+var_50], rax
 * 00000001401F56D0: mov     word ptr [rsp+78h+var_58], bp
 * 00000001401F56D5: call    cs:__imp_WppAutoLogTrace
 * 00000001401F56DC: nop     dword ptr [rax+rax+00h]
 * 00000001401F56E1: lea     r11, [rsp+78h+var_18]
 * 00000001401F56E6: mov     rbx, [r11+20h]
 * 00000001401F56EA: mov     rbp, [r11+28h]
 * 00000001401F56EE: mov     rsi, [r11+30h]
 * 00000001401F56F2: mov     rsp, r11
 * 00000001401F56F5: pop     r14
 * 00000001401F56F7: pop     r12
 * 00000001401F56F9: pop     rdi
 * 00000001401F56FA: retn
 * 00000001401F56FC: mov     ebx, 5
 * 00000001401F5701: jmp     loc_1401F5682
 * 00000001401F5706: mov     r10, cs:pfnWppTraceMessage
 * 00000001401F570D: test    rdi, rdi
 * 00000001401F5710: jz      short loc_1401F5723
 * 00000001401F5712: mov     rax, rbx
 * 00000001401F5715: inc     rax
 * 00000001401F5718: cmp     byte ptr [rdi+rax], 0
 * 00000001401F571C: jnz     short loc_1401F5715
 * 00000001401F571E: inc     rax
 * 00000001401F5721: jmp     short loc_1401F5728
 * 00000001401F5723: mov     eax, 5
 * 00000001401F5728: test    rdi, rdi
 * 00000001401F572B: mov     rcx, rdi
 * 00000001401F572E: mov     r9d, ebp
 * 00000001401F5731: mov     edx, 2Bh ; '+'
 * 00000001401F5736: cmovz   rcx, r8
 * 00000001401F573A: and     [rsp+78h+var_28], 0
 * 00000001401F5740: mov     [rsp+78h+var_30], rax
 * 00000001401F5745: lea     r8, WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids
 * 00000001401F574C: mov     [rsp+78h+var_38], rcx
 * 00000001401F5751: lea     rax, [rsp+78h+arg_48]
 * 00000001401F5759: mov     [rsp+78h+var_40], r12
 * 00000001401F575E: mov     rcx, r11
 * 00000001401F5761: mov     [rsp+78h+var_48], rax
 * 00000001401F5766: lea     rax, [rsp+78h+arg_40]
 * 00000001401F576E: mov     [rsp+78h+var_50], r12
 * 00000001401F5773: mov     [rsp+78h+var_58], rax
 * 00000001401F5778: mov     rax, r10
 * 00000001401F577B: call    _guard_dispatch_icall
 * 00000001401F5780: lea     r8, aNull; "NULL"
 * 00000001401F5787: jmp     loc_1401F5668
 */
