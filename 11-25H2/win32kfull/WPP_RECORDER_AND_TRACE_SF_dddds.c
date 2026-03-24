/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddds @ 0x1402DB208
 * Callers:
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x1402D4264 (_anonymous_namespace_--FitRectToWorkArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dddds @ 0x1402DB208
 * Reason: Hex-Rays returned no pseudocode for 0x1402DB208
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402DB208: mov     [rsp+arg_0], rbx
 * 00000001402DB20D: mov     [rsp+arg_8], rbp
 * 00000001402DB212: mov     [rsp+arg_10], rsi
 * 00000001402DB217: push    rdi
 * 00000001402DB218: push    r13
 * 00000001402DB21A: push    r15
 * 00000001402DB21C: sub     rsp, 80h
 * 00000001402DB223: mov     rdi, [rsp+98h+arg_60]
 * 00000001402DB22B: lea     r13, aNull; "NULL"
 * 00000001402DB232: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402DB236: mov     sil, r8b
 * 00000001402DB239: mov     rbp, r9
 * 00000001402DB23C: mov     r11, rcx
 * 00000001402DB23F: lea     r8d, [rbx+0Dh]
 * 00000001402DB243: lea     r15d, [rbx+5]
 * 00000001402DB247: test    dl, dl
 * 00000001402DB249: jz      loc_1402DB2F3
 * 00000001402DB24F: mov     r10, cs:pfnWppTraceMessage
 * 00000001402DB256: test    rdi, rdi
 * 00000001402DB259: jz      short loc_1402DB26C
 * 00000001402DB25B: mov     rcx, rbx
 * 00000001402DB25E: inc     rcx
 * 00000001402DB261: cmp     byte ptr [rdi+rcx], 0
 * 00000001402DB265: jnz     short loc_1402DB25E
 * 00000001402DB267: inc     rcx
 * 00000001402DB26A: jmp     short loc_1402DB271
 * 00000001402DB26C: mov     ecx, 5
 * 00000001402DB271: test    rdi, rdi
 * 00000001402DB274: mov     r9d, r8d
 * 00000001402DB277: mov     rax, rdi
 * 00000001402DB27A: lea     r8, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001402DB281: cmovz   rax, r13
 * 00000001402DB285: mov     edx, 2Bh ; '+'
 * 00000001402DB28A: and     [rsp+98h+var_28], 0
 * 00000001402DB290: mov     [rsp+98h+var_30], rcx
 * 00000001402DB295: mov     rcx, r11
 * 00000001402DB298: mov     [rsp+98h+var_38], rax
 * 00000001402DB29D: lea     rax, [rsp+98h+arg_58]
 * 00000001402DB2A5: mov     [rsp+98h+var_40], r15
 * 00000001402DB2AA: mov     [rsp+98h+var_48], rax
 * 00000001402DB2AF: lea     rax, [rsp+98h+arg_50]
 * 00000001402DB2B7: mov     [rsp+98h+var_50], r15
 * 00000001402DB2BC: mov     [rsp+98h+var_58], rax
 * 00000001402DB2C1: lea     rax, [rsp+98h+arg_48]
 * 00000001402DB2C9: mov     [rsp+98h+var_60], r15
 * 00000001402DB2CE: mov     [rsp+98h+var_68], rax
 * 00000001402DB2D3: lea     rax, [rsp+98h+arg_40]
 * 00000001402DB2DB: mov     [rsp+98h+var_70], r15
 * 00000001402DB2E0: mov     [rsp+98h+var_78], rax
 * 00000001402DB2E5: mov     rax, r10
 * 00000001402DB2E8: call    _guard_dispatch_icall
 * 00000001402DB2ED: mov     r8d, 0Ch
 * 00000001402DB2F3: test    sil, sil
 * 00000001402DB2F6: jz      loc_1402DB397
 * 00000001402DB2FC: test    rdi, rdi
 * 00000001402DB2FF: jz      short loc_1402DB30F
 * 00000001402DB301: inc     rbx
 * 00000001402DB304: cmp     byte ptr [rdi+rbx], 0
 * 00000001402DB308: jnz     short loc_1402DB301
 * 00000001402DB30A: inc     rbx
 * 00000001402DB30D: jmp     short loc_1402DB314
 * 00000001402DB30F: mov     ebx, 5
 * 00000001402DB314: test    rdi, rdi
 * 00000001402DB317: lea     rax, [rsp+98h+arg_58]
 * 00000001402DB31F: lea     r9, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001402DB326: mov     edx, 5
 * 00000001402DB32B: cmovz   rdi, r13
 * 00000001402DB32F: mov     rcx, rbp
 * 00000001402DB332: and     [rsp+98h+var_20], 0
 * 00000001402DB338: mov     [rsp+98h+var_28], rbx
 * 00000001402DB33D: mov     [rsp+98h+var_30], rdi
 * 00000001402DB342: mov     [rsp+98h+var_38], r15
 * 00000001402DB347: mov     [rsp+98h+var_40], rax
 * 00000001402DB34C: lea     rax, [rsp+98h+arg_50]
 * 00000001402DB354: mov     [rsp+98h+var_48], r15
 * 00000001402DB359: mov     [rsp+98h+var_50], rax
 * 00000001402DB35E: lea     rax, [rsp+98h+arg_48]
 * 00000001402DB366: mov     [rsp+98h+var_58], r15
 * 00000001402DB36B: mov     [rsp+98h+var_60], rax
 * 00000001402DB370: lea     rax, [rsp+98h+arg_40]
 * 00000001402DB378: mov     [rsp+98h+var_68], r15
 * 00000001402DB37D: mov     [rsp+98h+var_70], rax
 * 00000001402DB382: mov     word ptr [rsp+98h+var_78], r8w
 * 00000001402DB388: mov     r8d, r15d
 * 00000001402DB38B: call    cs:__imp_WppAutoLogTrace
 * 00000001402DB392: nop     dword ptr [rax+rax+00h]
 * 00000001402DB397: lea     r11, [rsp+98h+var_18]
 * 00000001402DB39F: mov     rbx, [r11+20h]
 * 00000001402DB3A3: mov     rbp, [r11+28h]
 * 00000001402DB3A7: mov     rsi, [r11+30h]
 * 00000001402DB3AB: mov     rsp, r11
 * 00000001402DB3AE: pop     r15
 * 00000001402DB3B0: pop     r13
 * 00000001402DB3B2: pop     rdi
 * 00000001402DB3B3: retn
 */
