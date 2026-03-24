/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x14028462C
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1402405D0 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x14025F3B0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x14028462C
 * Reason: Hex-Rays returned no pseudocode for 0x14028462C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028462C: mov     r11, rsp
 * 000000014028462F: mov     [r11+8], rbx
 * 0000000140284633: mov     [r11+10h], rsi
 * 0000000140284637: mov     [r11+18h], rdi
 * 000000014028463B: mov     [r11+20h], r14
 * 000000014028463F: push    rbp
 * 0000000140284640: lea     rbp, [r11-0Fh]
 * 0000000140284644: sub     rsp, 0B0h
 * 000000014028464B: movzx   edi, [rbp+7+arg_30]
 * 000000014028464F: mov     rsi, r9
 * 0000000140284652: mov     bl, r8b
 * 0000000140284655: mov     r14d, 4
 * 000000014028465B: test    dl, dl
 * 000000014028465D: jz      loc_1402846EC
 * 0000000140284663: and     qword ptr [r11-18h], 0
 * 0000000140284668: lea     rdx, [rbp+7+arg_78]
 * 000000014028466F: mov     rax, cs:pfnWppTraceMessage
 * 0000000140284676: mov     r9d, edi
 * 0000000140284679: mov     r8, [rbp+7+arg_38]
 * 000000014028467D: mov     [r11-20h], r14
 * 0000000140284681: mov     [r11-28h], rdx
 * 0000000140284685: lea     rdx, [rbp+7+arg_70]
 * 000000014028468C: mov     [r11-30h], r14
 * 0000000140284690: mov     [r11-38h], rdx
 * 0000000140284694: lea     rdx, [rbp+7+arg_68]
 * 0000000140284698: mov     [r11-40h], r14
 * 000000014028469C: mov     [r11-48h], rdx
 * 00000001402846A0: lea     rdx, [rbp+7+arg_60]
 * 00000001402846A4: mov     [r11-50h], r14
 * 00000001402846A8: mov     [r11-58h], rdx
 * 00000001402846AC: lea     rdx, [rbp+7+arg_58]
 * 00000001402846B0: mov     [r11-60h], r14
 * 00000001402846B4: mov     [r11-68h], rdx
 * 00000001402846B8: lea     rdx, [rbp+7+arg_50]
 * 00000001402846BC: mov     [r11-70h], r14
 * 00000001402846C0: mov     [r11-78h], rdx
 * 00000001402846C4: lea     rdx, [rbp+7+arg_48]
 * 00000001402846C8: mov     [r11-80h], r14
 * 00000001402846CC: mov     [rsp+0B0h+var_80], rdx
 * 00000001402846D1: lea     rdx, [rbp+7+arg_40]
 * 00000001402846D5: mov     [rsp+0B0h+var_88], 8
 * 00000001402846DE: mov     [rsp+0B0h+var_90], rdx
 * 00000001402846E3: lea     edx, [r14+27h]
 * 00000001402846E7: call    _guard_dispatch_icall
 * 00000001402846EC: test    bl, bl
 * 00000001402846EE: jz      loc_1402847A6
 * 00000001402846F4: and     qword ptr [rsp+0B0h+var_8], 0
 * 00000001402846FD: lea     rax, [rbp+7+arg_78]
 * 0000000140284704: mov     r9, [rbp+7+arg_38]
 * 0000000140284708: mov     rcx, rsi
 * 000000014028470B: mov     r8d, [rbp+7+arg_28]
 * 000000014028470F: movzx   edx, [rbp+7+arg_20]
 * 0000000140284713: mov     [rsp+0B0h+var_10], r14
 * 000000014028471B: mov     [rsp+0B0h+var_18], rax
 * 0000000140284723: lea     rax, [rbp+7+arg_70]
 * 000000014028472A: mov     [rsp+0B0h+var_20], r14
 * 0000000140284732: mov     [rsp+0B0h+var_28], rax
 * 000000014028473A: lea     rax, [rbp+7+arg_68]
 * 000000014028473E: mov     [rsp+0B0h+var_30], r14
 * 0000000140284746: mov     [rsp+0B0h+var_38], rax
 * 000000014028474B: lea     rax, [rbp+7+arg_60]
 * 000000014028474F: mov     [rsp+0B0h+var_40], r14
 * 0000000140284754: mov     [rsp+0B0h+var_48], rax
 * 0000000140284759: lea     rax, [rbp+7+arg_58]
 * 000000014028475D: mov     [rsp+0B0h+var_50], r14
 * 0000000140284762: mov     [rsp+0B0h+var_58], rax
 * 0000000140284767: lea     rax, [rbp+7+arg_50]
 * 000000014028476B: mov     [rsp+0B0h+var_60], r14
 * 0000000140284770: mov     [rsp+0B0h+var_68], rax
 * 0000000140284775: lea     rax, [rbp+7+arg_48]
 * 0000000140284779: mov     [rsp+0B0h+var_70], r14
 * 000000014028477E: mov     [rsp+0B0h+var_78], rax
 * 0000000140284783: lea     rax, [rbp+7+arg_40]
 * 0000000140284787: mov     [rsp+0B0h+var_80], 8
 * 0000000140284790: mov     [rsp+0B0h+var_88], rax
 * 0000000140284795: mov     word ptr [rsp+0B0h+var_90], di
 * 000000014028479A: call    cs:__imp_WppAutoLogTrace
 * 00000001402847A1: nop     dword ptr [rax+rax+00h]
 * 00000001402847A6: lea     r11, [rsp+0B0h+var_s0]
 * 00000001402847AE: mov     rbx, [r11+10h]
 * 00000001402847B2: mov     rsi, [r11+18h]
 * 00000001402847B6: mov     rdi, [r11+20h]
 * 00000001402847BA: mov     r14, [r11+28h]
 * 00000001402847BE: mov     rsp, r11
 * 00000001402847C1: pop     rbp
 * 00000001402847C2: retn
 */
