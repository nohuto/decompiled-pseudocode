/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402C9324
 * Callers:
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C6A30 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402C9324
 * Reason: Hex-Rays returned no pseudocode for 0x1402C9324
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C9324: mov     rax, rsp
 * 00000001402C9327: mov     [rax+8], rbx
 * 00000001402C932B: mov     [rax+10h], rbp
 * 00000001402C932F: mov     [rax+18h], rsi
 * 00000001402C9333: mov     [rax+20h], rdi
 * 00000001402C9337: push    r14
 * 00000001402C9339: sub     rsp, 60h
 * 00000001402C933D: mov     rdi, [rsp+68h+arg_50]
 * 00000001402C9345: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C9349: movzx   ebp, [rsp+68h+arg_30]
 * 00000001402C9351: mov     sil, r8b
 * 00000001402C9354: lea     r8, aNull; "NULL"
 * 00000001402C935B: mov     r14, r9
 * 00000001402C935E: mov     r11, rcx
 * 00000001402C9361: test    dl, dl
 * 00000001402C9363: jz      loc_1402C93F2
 * 00000001402C9369: mov     r10, cs:pfnWppTraceMessage
 * 00000001402C9370: test    rdi, rdi
 * 00000001402C9373: jz      short loc_1402C9386
 * 00000001402C9375: mov     rax, rbx
 * 00000001402C9378: inc     rax
 * 00000001402C937B: cmp     byte ptr [rdi+rax], 0
 * 00000001402C937F: jnz     short loc_1402C9378
 * 00000001402C9381: inc     rax
 * 00000001402C9384: jmp     short loc_1402C938B
 * 00000001402C9386: mov     eax, 5
 * 00000001402C938B: test    rdi, rdi
 * 00000001402C938E: mov     rcx, rdi
 * 00000001402C9391: mov     r9d, ebp
 * 00000001402C9394: mov     edx, 2Bh ; '+'
 * 00000001402C9399: cmovz   rcx, r8
 * 00000001402C939D: and     [rsp+68h+var_18], 0
 * 00000001402C93A3: mov     [rsp+68h+var_20], rax
 * 00000001402C93A8: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C93AF: mov     [rsp+68h+var_28], rcx
 * 00000001402C93B4: lea     rax, [rsp+68h+arg_48]
 * 00000001402C93BC: mov     [rsp+68h+var_30], 4
 * 00000001402C93C5: mov     rcx, r11
 * 00000001402C93C8: mov     [rsp+68h+var_38], rax
 * 00000001402C93CD: lea     rax, [rsp+68h+arg_40]
 * 00000001402C93D5: mov     [rsp+68h+var_40], 8
 * 00000001402C93DE: mov     [rsp+68h+var_48], rax
 * 00000001402C93E3: mov     rax, r10
 * 00000001402C93E6: call    _guard_dispatch_icall
 * 00000001402C93EB: lea     r8, aNull; "NULL"
 * 00000001402C93F2: test    sil, sil
 * 00000001402C93F5: jz      loc_1402C947F
 * 00000001402C93FB: test    rdi, rdi
 * 00000001402C93FE: jz      short loc_1402C940E
 * 00000001402C9400: inc     rbx
 * 00000001402C9403: cmp     byte ptr [rdi+rbx], 0
 * 00000001402C9407: jnz     short loc_1402C9400
 * 00000001402C9409: inc     rbx
 * 00000001402C940C: jmp     short loc_1402C9413
 * 00000001402C940E: mov     ebx, 5
 * 00000001402C9413: movzx   edx, [rsp+68h+arg_20]
 * 00000001402C941B: lea     rax, [rsp+68h+arg_48]
 * 00000001402C9423: test    rdi, rdi
 * 00000001402C9426: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C942D: mov     rcx, r14
 * 00000001402C9430: cmovz   rdi, r8
 * 00000001402C9434: and     [rsp+68h+var_10], 0
 * 00000001402C943A: mov     [rsp+68h+var_18], rbx
 * 00000001402C943F: mov     r8d, 7
 * 00000001402C9445: mov     [rsp+68h+var_20], rdi
 * 00000001402C944A: mov     [rsp+68h+var_28], 4
 * 00000001402C9453: mov     [rsp+68h+var_30], rax
 * 00000001402C9458: lea     rax, [rsp+68h+arg_40]
 * 00000001402C9460: mov     [rsp+68h+var_38], 8
 * 00000001402C9469: mov     [rsp+68h+var_40], rax
 * 00000001402C946E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001402C9473: call    cs:__imp_WppAutoLogTrace
 * 00000001402C947A: nop     dword ptr [rax+rax+00h]
 * 00000001402C947F: lea     r11, [rsp+68h+var_8]
 * 00000001402C9484: mov     rbx, [r11+10h]
 * 00000001402C9488: mov     rbp, [r11+18h]
 * 00000001402C948C: mov     rsi, [r11+20h]
 * 00000001402C9490: mov     rdi, [r11+28h]
 * 00000001402C9494: mov     rsp, r11
 * 00000001402C9497: pop     r14
 * 00000001402C9499: retn
 */
