/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402C8FAC
 * Callers:
 *     ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x14021D850 (-SessionInitialize@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402C8FAC
 * Reason: Hex-Rays returned no pseudocode for 0x1402C8FAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C8FAC: mov     rax, rsp
 * 00000001402C8FAF: mov     [rax+8], rbx
 * 00000001402C8FB3: mov     [rax+10h], rbp
 * 00000001402C8FB7: mov     [rax+18h], rsi
 * 00000001402C8FBB: mov     [rax+20h], rdi
 * 00000001402C8FBF: push    r13
 * 00000001402C8FC1: sub     rsp, 50h
 * 00000001402C8FC5: mov     rdi, [rsp+58h+arg_48]
 * 00000001402C8FCD: lea     r13, aNull; "NULL"
 * 00000001402C8FD4: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C8FD8: mov     sil, r8b
 * 00000001402C8FDB: mov     rbp, r9
 * 00000001402C8FDE: mov     r11, rcx
 * 00000001402C8FE1: mov     r8d, 9Bh
 * 00000001402C8FE7: test    dl, dl
 * 00000001402C8FE9: jz      short loc_1402C905D
 * 00000001402C8FEB: mov     r10, cs:pfnWppTraceMessage
 * 00000001402C8FF2: test    rdi, rdi
 * 00000001402C8FF5: jz      short loc_1402C9008
 * 00000001402C8FF7: mov     rax, rbx
 * 00000001402C8FFA: inc     rax
 * 00000001402C8FFD: cmp     byte ptr [rdi+rax], 0
 * 00000001402C9001: jnz     short loc_1402C8FFA
 * 00000001402C9003: inc     rax
 * 00000001402C9006: jmp     short loc_1402C900D
 * 00000001402C9008: mov     eax, 5
 * 00000001402C900D: test    rdi, rdi
 * 00000001402C9010: mov     r9d, r8d
 * 00000001402C9013: mov     rcx, rdi
 * 00000001402C9016: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C901D: cmovz   rcx, r13
 * 00000001402C9021: mov     edx, 2Bh ; '+'
 * 00000001402C9026: and     [rsp+58h+var_18], 0
 * 00000001402C902C: mov     [rsp+58h+var_20], rax
 * 00000001402C9031: lea     rax, [rsp+58h+arg_40]
 * 00000001402C9039: mov     [rsp+58h+var_28], rcx
 * 00000001402C903E: mov     rcx, r11
 * 00000001402C9041: mov     [rsp+58h+var_30], 4
 * 00000001402C904A: mov     [rsp+58h+var_38], rax
 * 00000001402C904F: mov     rax, r10
 * 00000001402C9052: call    _guard_dispatch_icall
 * 00000001402C9057: mov     r8d, 9Bh
 * 00000001402C905D: test    sil, sil
 * 00000001402C9060: jz      short loc_1402C90CC
 * 00000001402C9062: test    rdi, rdi
 * 00000001402C9065: jz      short loc_1402C9075
 * 00000001402C9067: inc     rbx
 * 00000001402C906A: cmp     byte ptr [rdi+rbx], 0
 * 00000001402C906E: jnz     short loc_1402C9067
 * 00000001402C9070: inc     rbx
 * 00000001402C9073: jmp     short loc_1402C907A
 * 00000001402C9075: mov     ebx, 5
 * 00000001402C907A: test    rdi, rdi
 * 00000001402C907D: lea     rax, [rsp+58h+arg_40]
 * 00000001402C9085: mov     edx, 4
 * 00000001402C908A: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C9091: cmovz   rdi, r13
 * 00000001402C9095: mov     rcx, rbp
 * 00000001402C9098: and     [rsp+58h+var_10], 0
 * 00000001402C909E: mov     [rsp+58h+var_18], rbx
 * 00000001402C90A3: mov     [rsp+58h+var_20], rdi
 * 00000001402C90A8: mov     [rsp+58h+var_28], 4
 * 00000001402C90B1: mov     [rsp+58h+var_30], rax
 * 00000001402C90B6: mov     word ptr [rsp+58h+var_38], r8w
 * 00000001402C90BC: lea     r8d, [rdx+3]
 * 00000001402C90C0: call    cs:__imp_WppAutoLogTrace
 * 00000001402C90C7: nop     dword ptr [rax+rax+00h]
 * 00000001402C90CC: mov     rbx, [rsp+58h+arg_0]
 * 00000001402C90D1: mov     rbp, [rsp+58h+arg_8]
 * 00000001402C90D6: mov     rsi, [rsp+58h+arg_10]
 * 00000001402C90DB: mov     rdi, [rsp+58h+arg_18]
 * 00000001402C90E0: add     rsp, 50h
 * 00000001402C90E4: pop     r13
 * 00000001402C90E6: retn
 */
