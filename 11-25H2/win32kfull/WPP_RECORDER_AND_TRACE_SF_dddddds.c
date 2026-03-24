/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x14018F66C
 * Callers:
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x14018D658 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D19CC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x14018F66C
 * Reason: Hex-Rays returned no pseudocode for 0x14018F66C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018F66C: mov     rax, rsp
 * 000000014018F66F: mov     [rax+8], rbx
 * 000000014018F673: mov     [rax+10h], rsi
 * 000000014018F677: mov     [rax+18h], rdi
 * 000000014018F67B: mov     [rax+20h], r13
 * 000000014018F67F: push    rbp
 * 000000014018F680: push    r14
 * 000000014018F682: push    r15
 * 000000014018F684: lea     rbp, [rax-1Fh]
 * 000000014018F688: sub     rsp, 0A0h
 * 000000014018F68F: mov     rdi, [rbp+17h+arg_70]
 * 000000014018F696: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014018F69A: movzx   r14d, [rbp+17h+arg_30]
 * 000000014018F69F: mov     sil, r8b
 * 000000014018F6A2: lea     r8, aNull; "NULL"
 * 000000014018F6A9: mov     r15, r9
 * 000000014018F6AC: mov     r11, rcx
 * 000000014018F6AF: lea     r13d, [rbx+5]
 * 000000014018F6B3: test    dl, dl
 * 000000014018F6B5: jnz     loc_14018F7A3
 * 000000014018F6BB: test    sil, sil
 * 000000014018F6BE: jz      loc_14018F777
 * 000000014018F6C4: test    rdi, rdi
 * 000000014018F6C7: jz      loc_14018F799
 * 000000014018F6CD: inc     rbx
 * 000000014018F6D0: cmp     byte ptr [rdi+rbx], 0
 * 000000014018F6D4: jnz     short loc_14018F6CD
 * 000000014018F6D6: inc     rbx
 * 000000014018F6D9: mov     r9, [rbp+17h+arg_38]
 * 000000014018F6DD: lea     rax, [rbp+17h+arg_68]
 * 000000014018F6E4: movzx   edx, [rbp+17h+arg_20]
 * 000000014018F6E8: test    rdi, rdi
 * 000000014018F6EB: mov     rcx, r15
 * 000000014018F6EE: cmovz   rdi, r8
 * 000000014018F6F2: and     qword ptr [rsp+0B0h+var_18], 0
 * 000000014018F6FB: mov     r8d, [rbp+17h+arg_28]
 * 000000014018F6FF: mov     [rsp+0B0h+var_20], rbx
 * 000000014018F707: mov     [rsp+0B0h+var_28], rdi
 * 000000014018F70F: mov     [rsp+0B0h+var_30], r13
 * 000000014018F717: mov     [rsp+0B0h+var_38], rax
 * 000000014018F71C: lea     rax, [rbp+17h+arg_60]
 * 000000014018F723: mov     [rsp+0B0h+var_40], r13
 * 000000014018F728: mov     [rsp+0B0h+var_48], rax
 * 000000014018F72D: lea     rax, [rbp+17h+arg_58]
 * 000000014018F731: mov     [rsp+0B0h+var_50], r13
 * 000000014018F736: mov     [rsp+0B0h+var_58], rax
 * 000000014018F73B: lea     rax, [rbp+17h+arg_50]
 * 000000014018F73F: mov     [rsp+0B0h+var_60], r13
 * 000000014018F744: mov     [rsp+0B0h+var_68], rax
 * 000000014018F749: lea     rax, [rbp+17h+arg_48]
 * 000000014018F74D: mov     [rsp+0B0h+var_70], r13
 * 000000014018F752: mov     [rsp+0B0h+var_78], rax
 * 000000014018F757: lea     rax, [rbp+17h+arg_40]
 * 000000014018F75B: mov     [rsp+0B0h+var_80], r13
 * 000000014018F760: mov     [rsp+0B0h+var_88], rax
 * 000000014018F765: mov     word ptr [rsp+0B0h+var_90], r14w
 * 000000014018F76B: call    cs:__imp_WppAutoLogTrace
 * 000000014018F772: nop     dword ptr [rax+rax+00h]
 * 000000014018F777: lea     r11, [rsp+0B0h+var_10]
 * 000000014018F77F: mov     rbx, [r11+20h]
 * 000000014018F783: mov     rsi, [r11+28h]
 * 000000014018F787: mov     rdi, [r11+30h]
 * 000000014018F78B: mov     r13, [r11+38h]
 * 000000014018F78F: mov     rsp, r11
 * 000000014018F792: pop     r15
 * 000000014018F794: pop     r14
 * 000000014018F796: pop     rbp
 * 000000014018F797: retn
 * 000000014018F799: mov     ebx, 5
 * 000000014018F79E: jmp     loc_14018F6D9
 * 000000014018F7A3: mov     r10, cs:pfnWppTraceMessage
 * 000000014018F7AA: test    rdi, rdi
 * 000000014018F7AD: jz      short loc_14018F7C0
 * 000000014018F7AF: mov     rcx, rbx
 * 000000014018F7B2: inc     rcx
 * 000000014018F7B5: cmp     byte ptr [rdi+rcx], 0
 * 000000014018F7B9: jnz     short loc_14018F7B2
 * 000000014018F7BB: inc     rcx
 * 000000014018F7BE: jmp     short loc_14018F7C5
 * 000000014018F7C0: mov     ecx, 5
 * 000000014018F7C5: test    rdi, rdi
 * 000000014018F7C8: mov     rax, rdi
 * 000000014018F7CB: mov     r9d, r14d
 * 000000014018F7CE: mov     edx, 2Bh ; '+'
 * 000000014018F7D3: cmovz   rax, r8
 * 000000014018F7D7: and     [rsp+0B0h+var_20], 0
 * 000000014018F7E0: mov     r8, [rbp+17h+arg_38]
 * 000000014018F7E4: mov     [rsp+0B0h+var_28], rcx
 * 000000014018F7EC: mov     rcx, r11
 * 000000014018F7EF: mov     [rsp+0B0h+var_30], rax
 * 000000014018F7F7: lea     rax, [rbp+17h+arg_68]
 * 000000014018F7FE: mov     [rsp+0B0h+var_38], r13
 * 000000014018F803: mov     [rsp+0B0h+var_40], rax
 * 000000014018F808: lea     rax, [rbp+17h+arg_60]
 * 000000014018F80F: mov     [rsp+0B0h+var_48], r13
 * 000000014018F814: mov     [rsp+0B0h+var_50], rax
 * 000000014018F819: lea     rax, [rbp+17h+arg_58]
 * 000000014018F81D: mov     [rsp+0B0h+var_58], r13
 * 000000014018F822: mov     [rsp+0B0h+var_60], rax
 * 000000014018F827: lea     rax, [rbp+17h+arg_50]
 * 000000014018F82B: mov     [rsp+0B0h+var_68], r13
 * 000000014018F830: mov     [rsp+0B0h+var_70], rax
 * 000000014018F835: lea     rax, [rbp+17h+arg_48]
 * 000000014018F839: mov     [rsp+0B0h+var_78], r13
 * 000000014018F83E: mov     [rsp+0B0h+var_80], rax
 * 000000014018F843: lea     rax, [rbp+17h+arg_40]
 * 000000014018F847: mov     [rsp+0B0h+var_88], r13
 * 000000014018F84C: mov     [rsp+0B0h+var_90], rax
 * 000000014018F851: mov     rax, r10
 * 000000014018F854: call    _guard_dispatch_icall
 * 000000014018F859: lea     r8, aNull; "NULL"
 * 000000014018F860: jmp     loc_14018F6BB
 */
