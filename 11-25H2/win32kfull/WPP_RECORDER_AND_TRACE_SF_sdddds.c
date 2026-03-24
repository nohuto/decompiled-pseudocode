/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402E7F0C
 * Callers:
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402E7F0C
 * Reason: Hex-Rays returned no pseudocode for 0x1402E7F0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E7F0C: mov     rax, rsp
 * 00000001402E7F0F: mov     [rax+8], rbx
 * 00000001402E7F13: mov     [rax+10h], rbp
 * 00000001402E7F17: mov     [rax+18h], rsi
 * 00000001402E7F1B: mov     [rax+20h], rdi
 * 00000001402E7F1F: push    r12
 * 00000001402E7F21: push    r13
 * 00000001402E7F23: push    r14
 * 00000001402E7F25: sub     rsp, 90h
 * 00000001402E7F2C: mov     rsi, [rsp+0A8h+arg_40]
 * 00000001402E7F34: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402E7F38: mov     rdi, [rsp+0A8h+arg_68]
 * 00000001402E7F40: mov     r14, r9
 * 00000001402E7F43: lea     r9, aNull; "NULL"
 * 00000001402E7F4A: mov     r11, rcx
 * 00000001402E7F4D: mov     bpl, r8b
 * 00000001402E7F50: lea     r12d, [rbx+6]
 * 00000001402E7F54: lea     ecx, [rbx+41h]
 * 00000001402E7F57: lea     r13d, [rbx+5]
 * 00000001402E7F5B: test    dl, dl
 * 00000001402E7F5D: jz      loc_1402E803D
 * 00000001402E7F63: mov     r10, cs:pfnWppTraceMessage
 * 00000001402E7F6A: test    rdi, rdi
 * 00000001402E7F6D: jz      short loc_1402E7F80
 * 00000001402E7F6F: mov     rdx, rbx
 * 00000001402E7F72: inc     rdx
 * 00000001402E7F75: cmp     byte ptr [rdi+rdx], 0
 * 00000001402E7F79: jnz     short loc_1402E7F72
 * 00000001402E7F7B: inc     rdx
 * 00000001402E7F7E: jmp     short loc_1402E7F83
 * 00000001402E7F80: mov     rdx, r12
 * 00000001402E7F83: test    rdi, rdi
 * 00000001402E7F86: mov     r8, rdi
 * 00000001402E7F89: cmovz   r8, r9
 * 00000001402E7F8D: test    rsi, rsi
 * 00000001402E7F90: jz      short loc_1402E7FA3
 * 00000001402E7F92: mov     rax, rbx
 * 00000001402E7F95: inc     rax
 * 00000001402E7F98: cmp     byte ptr [rsi+rax], 0
 * 00000001402E7F9C: jnz     short loc_1402E7F95
 * 00000001402E7F9E: inc     rax
 * 00000001402E7FA1: jmp     short loc_1402E7FA6
 * 00000001402E7FA3: mov     rax, r12
 * 00000001402E7FA6: test    rsi, rsi
 * 00000001402E7FA9: mov     rcx, rsi
 * 00000001402E7FAC: cmovz   rcx, r9
 * 00000001402E7FB0: and     [rsp+0A8h+var_28], 0
 * 00000001402E7FB9: mov     [rsp+0A8h+var_30], rdx
 * 00000001402E7FBE: mov     r9d, 40h ; '@'
 * 00000001402E7FC4: mov     [rsp+0A8h+var_38], r8
 * 00000001402E7FC9: lea     rdx, [rsp+0A8h+arg_60]
 * 00000001402E7FD1: mov     [rsp+0A8h+var_40], r13
 * 00000001402E7FD6: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E7FDD: mov     [rsp+0A8h+var_48], rdx
 * 00000001402E7FE2: lea     rdx, [rsp+0A8h+arg_58]
 * 00000001402E7FEA: mov     [rsp+0A8h+var_50], r13
 * 00000001402E7FEF: mov     [rsp+0A8h+var_58], rdx
 * 00000001402E7FF4: lea     rdx, [rsp+0A8h+arg_50]
 * 00000001402E7FFC: mov     [rsp+0A8h+var_60], r13
 * 00000001402E8001: mov     [rsp+0A8h+var_68], rdx
 * 00000001402E8006: lea     rdx, [rsp+0A8h+arg_48]
 * 00000001402E800E: mov     [rsp+0A8h+var_70], r13
 * 00000001402E8013: mov     [rsp+0A8h+var_78], rdx
 * 00000001402E8018: lea     edx, [r9-15h]
 * 00000001402E801C: mov     [rsp+0A8h+var_80], rax
 * 00000001402E8021: mov     rax, r10
 * 00000001402E8024: mov     [rsp+0A8h+var_88], rcx
 * 00000001402E8029: mov     rcx, r11
 * 00000001402E802C: call    _guard_dispatch_icall
 * 00000001402E8031: lea     r9, aNull; "NULL"
 * 00000001402E8038: mov     ecx, 40h ; '@'
 * 00000001402E803D: test    bpl, bpl
 * 00000001402E8040: jz      loc_1402E810F
 * 00000001402E8046: test    rdi, rdi
 * 00000001402E8049: jz      short loc_1402E805C
 * 00000001402E804B: mov     rax, rbx
 * 00000001402E804E: inc     rax
 * 00000001402E8051: cmp     byte ptr [rdi+rax], 0
 * 00000001402E8055: jnz     short loc_1402E804E
 * 00000001402E8057: inc     rax
 * 00000001402E805A: jmp     short loc_1402E805F
 * 00000001402E805C: mov     rax, r12
 * 00000001402E805F: test    rdi, rdi
 * 00000001402E8062: cmovz   rdi, r9
 * 00000001402E8066: test    rsi, rsi
 * 00000001402E8069: jz      short loc_1402E8079
 * 00000001402E806B: inc     rbx
 * 00000001402E806E: cmp     byte ptr [rsi+rbx], 0
 * 00000001402E8072: jnz     short loc_1402E806B
 * 00000001402E8074: inc     rbx
 * 00000001402E8077: jmp     short loc_1402E807C
 * 00000001402E8079: mov     rbx, r12
 * 00000001402E807C: test    rsi, rsi
 * 00000001402E807F: mov     r8d, 9
 * 00000001402E8085: mov     edx, r13d
 * 00000001402E8088: cmovz   rsi, r9
 * 00000001402E808C: and     [rsp+0A8h+var_20], 0
 * 00000001402E8095: mov     [rsp+0A8h+var_28], rax
 * 00000001402E809D: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E80A4: mov     [rsp+0A8h+var_30], rdi
 * 00000001402E80A9: lea     rax, [rsp+0A8h+arg_60]
 * 00000001402E80B1: mov     [rsp+0A8h+var_38], r13
 * 00000001402E80B6: mov     [rsp+0A8h+var_40], rax
 * 00000001402E80BB: lea     rax, [rsp+0A8h+arg_58]
 * 00000001402E80C3: mov     [rsp+0A8h+var_48], r13
 * 00000001402E80C8: mov     [rsp+0A8h+var_50], rax
 * 00000001402E80CD: lea     rax, [rsp+0A8h+arg_50]
 * 00000001402E80D5: mov     [rsp+0A8h+var_58], r13
 * 00000001402E80DA: mov     [rsp+0A8h+var_60], rax
 * 00000001402E80DF: lea     rax, [rsp+0A8h+arg_48]
 * 00000001402E80E7: mov     [rsp+0A8h+var_68], r13
 * 00000001402E80EC: mov     [rsp+0A8h+var_70], rax
 * 00000001402E80F1: mov     [rsp+0A8h+var_78], rbx
 * 00000001402E80F6: mov     [rsp+0A8h+var_80], rsi
 * 00000001402E80FB: mov     word ptr [rsp+0A8h+var_88], cx
 * 00000001402E8100: mov     rcx, r14
 * 00000001402E8103: call    cs:__imp_WppAutoLogTrace
 * 00000001402E810A: nop     dword ptr [rax+rax+00h]
 * 00000001402E810F: lea     r11, [rsp+0A8h+var_18]
 * 00000001402E8117: mov     rbx, [r11+20h]
 * 00000001402E811B: mov     rbp, [r11+28h]
 * 00000001402E811F: mov     rsi, [r11+30h]
 * 00000001402E8123: mov     rdi, [r11+38h]
 * 00000001402E8127: mov     rsp, r11
 * 00000001402E812A: pop     r14
 * 00000001402E812C: pop     r13
 * 00000001402E812E: pop     r12
 * 00000001402E8130: retn
 */
