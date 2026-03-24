/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1402C3780
 * Callers:
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1402C3780
 * Reason: Hex-Rays returned no pseudocode for 0x1402C3780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C3780: mov     r11, rsp
 * 00000001402C3783: mov     [r11+8], rbx
 * 00000001402C3787: mov     [r11+10h], rsi
 * 00000001402C378B: mov     [r11+18h], rdi
 * 00000001402C378F: push    rbp
 * 00000001402C3790: push    r14
 * 00000001402C3792: push    r15
 * 00000001402C3794: lea     rbp, [r11-1Fh]
 * 00000001402C3798: sub     rsp, 0B0h
 * 00000001402C379F: mov     esi, 4
 * 00000001402C37A4: mov     rdi, r9
 * 00000001402C37A7: mov     bl, r8b
 * 00000001402C37AA: lea     r15d, [rsi+9]
 * 00000001402C37AE: lea     r14d, [rsi+4]
 * 00000001402C37B2: test    dl, dl
 * 00000001402C37B4: jz      loc_1402C3849
 * 00000001402C37BA: and     qword ptr [r11-28h], 0
 * 00000001402C37BF: lea     rdx, [rbp+17h+arg_78]
 * 00000001402C37C6: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C37CD: lea     r8, WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids
 * 00000001402C37D4: mov     [r11-30h], r14
 * 00000001402C37D8: mov     r9d, r15d
 * 00000001402C37DB: mov     [r11-38h], rdx
 * 00000001402C37DF: lea     rdx, [rbp+17h+arg_70]
 * 00000001402C37E6: mov     [r11-40h], rsi
 * 00000001402C37EA: mov     [r11-48h], rdx
 * 00000001402C37EE: lea     rdx, [rbp+17h+arg_68]
 * 00000001402C37F5: mov     [r11-50h], rsi
 * 00000001402C37F9: mov     [r11-58h], rdx
 * 00000001402C37FD: lea     rdx, [rbp+17h+arg_60]
 * 00000001402C3804: mov     [r11-60h], rsi
 * 00000001402C3808: mov     [r11-68h], rdx
 * 00000001402C380C: lea     rdx, [rbp+17h+arg_58]
 * 00000001402C3810: mov     [r11-70h], rsi
 * 00000001402C3814: mov     [r11-78h], rdx
 * 00000001402C3818: lea     rdx, [rbp+17h+arg_50]
 * 00000001402C381C: mov     [r11-80h], rsi
 * 00000001402C3820: mov     [rsp+0C0h+var_80], rdx
 * 00000001402C3825: lea     rdx, [rbp+17h+arg_48]
 * 00000001402C3829: mov     [rsp+0C0h+var_88], rsi
 * 00000001402C382E: mov     [rsp+0C0h+var_90], rdx
 * 00000001402C3833: lea     rdx, [rbp+17h+arg_40]
 * 00000001402C3837: mov     [rsp+0C0h+var_98], r14
 * 00000001402C383C: mov     [rsp+0C0h+var_A0], rdx
 * 00000001402C3841: lea     edx, [rsi+27h]
 * 00000001402C3844: call    _guard_dispatch_icall
 * 00000001402C3849: test    bl, bl
 * 00000001402C384B: jz      loc_1402C3906
 * 00000001402C3851: and     qword ptr [rsp+0C0h+var_18], 0
 * 00000001402C385A: lea     rax, [rbp+17h+arg_78]
 * 00000001402C3861: mov     [rsp+0C0h+var_20], r14
 * 00000001402C3869: lea     r9, WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids
 * 00000001402C3870: mov     [rsp+0C0h+var_28], rax
 * 00000001402C3878: mov     r8d, esi
 * 00000001402C387B: mov     [rsp+0C0h+var_30], rsi
 * 00000001402C3883: lea     rax, [rbp+17h+arg_70]
 * 00000001402C388A: mov     [rsp+0C0h+var_38], rax
 * 00000001402C3892: mov     edx, esi
 * 00000001402C3894: mov     [rsp+0C0h+var_40], rsi
 * 00000001402C389C: lea     rax, [rbp+17h+arg_68]
 * 00000001402C38A3: mov     [rsp+0C0h+var_48], rax
 * 00000001402C38A8: mov     rcx, rdi
 * 00000001402C38AB: mov     [rsp+0C0h+var_50], rsi
 * 00000001402C38B0: lea     rax, [rbp+17h+arg_60]
 * 00000001402C38B7: mov     [rsp+0C0h+var_58], rax
 * 00000001402C38BC: lea     rax, [rbp+17h+arg_58]
 * 00000001402C38C0: mov     [rsp+0C0h+var_60], rsi
 * 00000001402C38C5: mov     [rsp+0C0h+var_68], rax
 * 00000001402C38CA: lea     rax, [rbp+17h+arg_50]
 * 00000001402C38CE: mov     [rsp+0C0h+var_70], rsi
 * 00000001402C38D3: mov     [rsp+0C0h+var_78], rax
 * 00000001402C38D8: lea     rax, [rbp+17h+arg_48]
 * 00000001402C38DC: mov     [rsp+0C0h+var_80], rsi
 * 00000001402C38E1: mov     [rsp+0C0h+var_88], rax
 * 00000001402C38E6: lea     rax, [rbp+17h+arg_40]
 * 00000001402C38EA: mov     [rsp+0C0h+var_90], r14
 * 00000001402C38EF: mov     [rsp+0C0h+var_98], rax
 * 00000001402C38F4: mov     word ptr [rsp+0C0h+var_A0], r15w
 * 00000001402C38FA: call    cs:__imp_WppAutoLogTrace
 * 00000001402C3901: nop     dword ptr [rax+rax+00h]
 * 00000001402C3906: lea     r11, [rsp+0C0h+var_10]
 * 00000001402C390E: mov     rbx, [r11+20h]
 * 00000001402C3912: mov     rsi, [r11+28h]
 * 00000001402C3916: mov     rdi, [r11+30h]
 * 00000001402C391A: mov     rsp, r11
 * 00000001402C391D: pop     r15
 * 00000001402C391F: pop     r14
 * 00000001402C3921: pop     rbp
 * 00000001402C3922: retn
 */
