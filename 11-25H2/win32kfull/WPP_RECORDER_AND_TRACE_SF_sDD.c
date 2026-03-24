/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401CAF9C
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14018ED6C (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401CAF9C
 * Reason: Hex-Rays returned no pseudocode for 0x1401CAF9C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CAF9C: mov     [rsp+arg_0], rbx
 * 00000001401CAFA1: mov     [rsp+arg_8], rbp
 * 00000001401CAFA6: mov     [rsp+arg_10], rsi
 * 00000001401CAFAB: push    rdi
 * 00000001401CAFAC: push    r13
 * 00000001401CAFAE: push    r15
 * 00000001401CAFB0: sub     rsp, 60h
 * 00000001401CAFB4: mov     rdi, [rsp+78h+arg_40]
 * 00000001401CAFBC: lea     r13, aNull; "NULL"
 * 00000001401CAFC3: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401CAFC7: mov     sil, r8b
 * 00000001401CAFCA: mov     rbp, r9
 * 00000001401CAFCD: mov     r11, rcx
 * 00000001401CAFD0: lea     r8d, [rbx+20h]
 * 00000001401CAFD4: lea     r15d, [rbx+5]
 * 00000001401CAFD8: test    dl, dl
 * 00000001401CAFDA: jnz     loc_1401CB075
 * 00000001401CAFE0: test    sil, sil
 * 00000001401CAFE3: jz      short loc_1401CB05A
 * 00000001401CAFE5: test    rdi, rdi
 * 00000001401CAFE8: jz      loc_1401CB0FA
 * 00000001401CAFEE: inc     rbx
 * 00000001401CAFF1: cmp     byte ptr [rdi+rbx], 0
 * 00000001401CAFF5: jnz     short loc_1401CAFEE
 * 00000001401CAFF7: inc     rbx
 * 00000001401CAFFA: test    rdi, rdi
 * 00000001401CAFFD: lea     rax, [rsp+78h+arg_50]
 * 00000001401CB005: lea     r9, WPP_07fed4fced1f34af39f96e586dcec445_Traceguids
 * 00000001401CB00C: mov     edx, r15d
 * 00000001401CB00F: cmovz   rdi, r13
 * 00000001401CB013: mov     rcx, rbp
 * 00000001401CB016: and     [rsp+78h+var_20], 0
 * 00000001401CB01C: mov     [rsp+78h+var_28], r15
 * 00000001401CB021: mov     [rsp+78h+var_30], rax
 * 00000001401CB026: lea     rax, [rsp+78h+arg_48]
 * 00000001401CB02E: mov     [rsp+78h+var_38], r15
 * 00000001401CB033: mov     [rsp+78h+var_40], rax
 * 00000001401CB038: mov     [rsp+78h+var_48], rbx
 * 00000001401CB03D: mov     [rsp+78h+var_50], rdi
 * 00000001401CB042: mov     word ptr [rsp+78h+var_58], r8w
 * 00000001401CB048: mov     r8d, 2
 * 00000001401CB04E: call    cs:__imp_WppAutoLogTrace
 * 00000001401CB055: nop     dword ptr [rax+rax+00h]
 * 00000001401CB05A: lea     r11, [rsp+78h+var_18]
 * 00000001401CB05F: mov     rbx, [r11+20h]
 * 00000001401CB063: mov     rbp, [r11+28h]
 * 00000001401CB067: mov     rsi, [r11+30h]
 * 00000001401CB06B: mov     rsp, r11
 * 00000001401CB06E: pop     r15
 * 00000001401CB070: pop     r13
 * 00000001401CB072: pop     rdi
 * 00000001401CB073: retn
 * 00000001401CB075: mov     r10, cs:pfnWppTraceMessage
 * 00000001401CB07C: test    rdi, rdi
 * 00000001401CB07F: jz      short loc_1401CB092
 * 00000001401CB081: mov     rax, rbx
 * 00000001401CB084: inc     rax
 * 00000001401CB087: cmp     byte ptr [rdi+rax], 0
 * 00000001401CB08B: jnz     short loc_1401CB084
 * 00000001401CB08D: inc     rax
 * 00000001401CB090: jmp     short loc_1401CB097
 * 00000001401CB092: mov     eax, 5
 * 00000001401CB097: test    rdi, rdi
 * 00000001401CB09A: lea     rdx, [rsp+78h+arg_50]
 * 00000001401CB0A2: mov     r9d, r8d
 * 00000001401CB0A5: mov     rcx, rdi
 * 00000001401CB0A8: cmovz   rcx, r13
 * 00000001401CB0AC: lea     r8, WPP_07fed4fced1f34af39f96e586dcec445_Traceguids
 * 00000001401CB0B3: and     [rsp+78h+var_28], 0
 * 00000001401CB0B9: mov     [rsp+78h+var_30], r15
 * 00000001401CB0BE: mov     [rsp+78h+var_38], rdx
 * 00000001401CB0C3: lea     rdx, [rsp+78h+arg_48]
 * 00000001401CB0CB: mov     [rsp+78h+var_40], r15
 * 00000001401CB0D0: mov     [rsp+78h+var_48], rdx
 * 00000001401CB0D5: mov     edx, 2Bh ; '+'
 * 00000001401CB0DA: mov     [rsp+78h+var_50], rax
 * 00000001401CB0DF: mov     rax, r10
 * 00000001401CB0E2: mov     [rsp+78h+var_58], rcx
 * 00000001401CB0E7: mov     rcx, r11
 * 00000001401CB0EA: call    _guard_dispatch_icall
 * 00000001401CB0EF: mov     r8d, 1Fh
 * 00000001401CB0F5: jmp     loc_1401CAFE0
 * 00000001401CB0FA: mov     ebx, 5
 * 00000001401CB0FF: jmp     loc_1401CAFFA
 */
