/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178
 * Callers:
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1401C997C (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178
 * Reason: Hex-Rays returned no pseudocode for 0x14020A178
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020A178: mov     rax, rsp
 * 000000014020A17B: mov     [rax+8], rbx
 * 000000014020A17F: mov     [rax+10h], rsi
 * 000000014020A183: mov     [rax+18h], rdi
 * 000000014020A187: mov     [rax+20h], r13
 * 000000014020A18B: push    rbp
 * 000000014020A18C: push    r14
 * 000000014020A18E: push    r15
 * 000000014020A190: lea     rbp, [rax-1Fh]
 * 000000014020A194: sub     rsp, 0A0h
 * 000000014020A19B: mov     rdi, [rbp+17h+arg_40]
 * 000000014020A19F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014020A1A3: movzx   r14d, [rbp+17h+arg_30]
 * 000000014020A1A8: mov     sil, r8b
 * 000000014020A1AB: lea     r8, aNull; "NULL"
 * 000000014020A1B2: mov     r15, r9
 * 000000014020A1B5: mov     r11, rcx
 * 000000014020A1B8: lea     r13d, [rbx+5]
 * 000000014020A1BC: test    dl, dl
 * 000000014020A1BE: jnz     loc_14020A2B0
 * 000000014020A1C4: test    sil, sil
 * 000000014020A1C7: jnz     short loc_14020A1EB
 * 000000014020A1C9: lea     r11, [rsp+0B0h+var_10]
 * 000000014020A1D1: mov     rbx, [r11+20h]
 * 000000014020A1D5: mov     rsi, [r11+28h]
 * 000000014020A1D9: mov     rdi, [r11+30h]
 * 000000014020A1DD: mov     r13, [r11+38h]
 * 000000014020A1E1: mov     rsp, r11
 * 000000014020A1E4: pop     r15
 * 000000014020A1E6: pop     r14
 * 000000014020A1E8: pop     rbp
 * 000000014020A1E9: retn
 * 000000014020A1EB: test    rdi, rdi
 * 000000014020A1EE: jz      loc_14020A2A6
 * 000000014020A1F4: inc     rbx
 * 000000014020A1F7: cmp     byte ptr [rdi+rbx], 0
 * 000000014020A1FB: jnz     short loc_14020A1F4
 * 000000014020A1FD: inc     rbx
 * 000000014020A200: mov     r9, [rbp+17h+arg_38]
 * 000000014020A204: lea     rax, [rbp+17h+arg_70]
 * 000000014020A20B: movzx   edx, [rbp+17h+arg_20]
 * 000000014020A20F: test    rdi, rdi
 * 000000014020A212: mov     rcx, r15
 * 000000014020A215: cmovz   rdi, r8
 * 000000014020A219: and     qword ptr [rsp+0B0h+var_18], 0
 * 000000014020A222: mov     r8d, [rbp+17h+arg_28]
 * 000000014020A226: mov     [rsp+0B0h+var_20], r13
 * 000000014020A22E: mov     [rsp+0B0h+var_28], rax
 * 000000014020A236: lea     rax, [rbp+17h+arg_68]
 * 000000014020A23D: mov     [rsp+0B0h+var_30], r13
 * 000000014020A245: mov     [rsp+0B0h+var_38], rax
 * 000000014020A24A: lea     rax, [rbp+17h+arg_60]
 * 000000014020A251: mov     [rsp+0B0h+var_40], r13
 * 000000014020A256: mov     [rsp+0B0h+var_48], rax
 * 000000014020A25B: lea     rax, [rbp+17h+arg_58]
 * 000000014020A25F: mov     [rsp+0B0h+var_50], r13
 * 000000014020A264: mov     [rsp+0B0h+var_58], rax
 * 000000014020A269: lea     rax, [rbp+17h+arg_50]
 * 000000014020A26D: mov     [rsp+0B0h+var_60], r13
 * 000000014020A272: mov     [rsp+0B0h+var_68], rax
 * 000000014020A277: lea     rax, [rbp+17h+arg_48]
 * 000000014020A27B: mov     [rsp+0B0h+var_70], r13
 * 000000014020A280: mov     [rsp+0B0h+var_78], rax
 * 000000014020A285: mov     [rsp+0B0h+var_80], rbx
 * 000000014020A28A: mov     [rsp+0B0h+var_88], rdi
 * 000000014020A28F: mov     word ptr [rsp+0B0h+var_90], r14w
 * 000000014020A295: call    cs:__imp_WppAutoLogTrace
 * 000000014020A29C: nop     dword ptr [rax+rax+00h]
 * 000000014020A2A1: jmp     loc_14020A1C9
 * 000000014020A2A6: mov     ebx, 5
 * 000000014020A2AB: jmp     loc_14020A200
 * 000000014020A2B0: mov     r10, cs:pfnWppTraceMessage
 * 000000014020A2B7: test    rdi, rdi
 * 000000014020A2BA: jz      short loc_14020A2CD
 * 000000014020A2BC: mov     rax, rbx
 * 000000014020A2BF: inc     rax
 * 000000014020A2C2: cmp     byte ptr [rdi+rax], 0
 * 000000014020A2C6: jnz     short loc_14020A2BF
 * 000000014020A2C8: inc     rax
 * 000000014020A2CB: jmp     short loc_14020A2D2
 * 000000014020A2CD: mov     eax, 5
 * 000000014020A2D2: test    rdi, rdi
 * 000000014020A2D5: lea     rdx, [rbp+17h+arg_70]
 * 000000014020A2DC: mov     rcx, rdi
 * 000000014020A2DF: mov     r9d, r14d
 * 000000014020A2E2: cmovz   rcx, r8
 * 000000014020A2E6: and     [rsp+0B0h+var_20], 0
 * 000000014020A2EF: mov     r8, [rbp+17h+arg_38]
 * 000000014020A2F3: mov     [rsp+0B0h+var_28], r13
 * 000000014020A2FB: mov     [rsp+0B0h+var_30], rdx
 * 000000014020A303: lea     rdx, [rbp+17h+arg_68]
 * 000000014020A30A: mov     [rsp+0B0h+var_38], r13
 * 000000014020A30F: mov     [rsp+0B0h+var_40], rdx
 * 000000014020A314: lea     rdx, [rbp+17h+arg_60]
 * 000000014020A31B: mov     [rsp+0B0h+var_48], r13
 * 000000014020A320: mov     [rsp+0B0h+var_50], rdx
 * 000000014020A325: lea     rdx, [rbp+17h+arg_58]
 * 000000014020A329: mov     [rsp+0B0h+var_58], r13
 * 000000014020A32E: mov     [rsp+0B0h+var_60], rdx
 * 000000014020A333: lea     rdx, [rbp+17h+arg_50]
 * 000000014020A337: mov     [rsp+0B0h+var_68], r13
 * 000000014020A33C: mov     [rsp+0B0h+var_70], rdx
 * 000000014020A341: lea     rdx, [rbp+17h+arg_48]
 * 000000014020A345: mov     [rsp+0B0h+var_78], r13
 * 000000014020A34A: mov     [rsp+0B0h+var_80], rdx
 * 000000014020A34F: mov     edx, 2Bh ; '+'
 * 000000014020A354: mov     [rsp+0B0h+var_88], rax
 * 000000014020A359: mov     rax, r10
 * 000000014020A35C: mov     [rsp+0B0h+var_90], rcx
 * 000000014020A361: mov     rcx, r11
 * 000000014020A364: call    _guard_dispatch_icall
 * 000000014020A369: lea     r8, aNull; "NULL"
 * 000000014020A370: jmp     loc_14020A1C4
 */
