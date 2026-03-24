/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qslll @ 0x1402E9FE0
 * Callers:
 *     xxxShowScrollBar @ 0x1401D4208 (xxxShowScrollBar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qslll @ 0x1402E9FE0
 * Reason: Hex-Rays returned no pseudocode for 0x1402E9FE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E9FE0: mov     rax, rsp
 * 00000001402E9FE3: mov     [rax+8], rbx
 * 00000001402E9FE7: mov     [rax+10h], rbp
 * 00000001402E9FEB: mov     [rax+18h], rsi
 * 00000001402E9FEF: mov     [rax+20h], rdi
 * 00000001402E9FF3: push    r15
 * 00000001402E9FF5: sub     rsp, 80h
 * 00000001402E9FFC: mov     rdi, [rsp+88h+arg_48]
 * 00000001402EA004: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402EA008: mov     rbp, r9
 * 00000001402EA00B: mov     sil, r8b
 * 00000001402EA00E: lea     r8, aNull; "NULL"
 * 00000001402EA015: mov     r11, rcx
 * 00000001402EA018: lea     r9d, [rbx+0Bh]
 * 00000001402EA01C: lea     r15d, [rbx+5]
 * 00000001402EA020: test    dl, dl
 * 00000001402EA022: jz      loc_1402EA0D4
 * 00000001402EA028: mov     r10, cs:pfnWppTraceMessage
 * 00000001402EA02F: test    rdi, rdi
 * 00000001402EA032: jz      short loc_1402EA045
 * 00000001402EA034: mov     rax, rbx
 * 00000001402EA037: inc     rax
 * 00000001402EA03A: cmp     byte ptr [rdi+rax], 0
 * 00000001402EA03E: jnz     short loc_1402EA037
 * 00000001402EA040: inc     rax
 * 00000001402EA043: jmp     short loc_1402EA04A
 * 00000001402EA045: mov     eax, 5
 * 00000001402EA04A: test    rdi, rdi
 * 00000001402EA04D: lea     rdx, [rsp+88h+arg_60]
 * 00000001402EA055: mov     rcx, rdi
 * 00000001402EA058: cmovz   rcx, r8
 * 00000001402EA05C: and     [rsp+88h+var_18], 0
 * 00000001402EA062: mov     [rsp+88h+var_20], r15
 * 00000001402EA067: lea     r8, WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids
 * 00000001402EA06E: mov     [rsp+88h+var_28], rdx
 * 00000001402EA073: lea     rdx, [rsp+88h+arg_58]
 * 00000001402EA07B: mov     [rsp+88h+var_30], r15
 * 00000001402EA080: mov     [rsp+88h+var_38], rdx
 * 00000001402EA085: lea     rdx, [rsp+88h+arg_50]
 * 00000001402EA08D: mov     [rsp+88h+var_40], r15
 * 00000001402EA092: mov     [rsp+88h+var_48], rdx
 * 00000001402EA097: mov     edx, 2Bh ; '+'
 * 00000001402EA09C: mov     [rsp+88h+var_50], rax
 * 00000001402EA0A1: lea     rax, [rsp+88h+arg_40]
 * 00000001402EA0A9: mov     [rsp+88h+var_58], rcx
 * 00000001402EA0AE: mov     rcx, r11
 * 00000001402EA0B1: mov     [rsp+88h+var_60], 8
 * 00000001402EA0BA: mov     [rsp+88h+var_68], rax
 * 00000001402EA0BF: mov     rax, r10
 * 00000001402EA0C2: call    _guard_dispatch_icall
 * 00000001402EA0C7: lea     r8, aNull; "NULL"
 * 00000001402EA0CE: mov     r9d, 0Ah
 * 00000001402EA0D4: test    sil, sil
 * 00000001402EA0D7: jz      loc_1402EA17D
 * 00000001402EA0DD: test    rdi, rdi
 * 00000001402EA0E0: jz      short loc_1402EA0F0
 * 00000001402EA0E2: inc     rbx
 * 00000001402EA0E5: cmp     byte ptr [rdi+rbx], 0
 * 00000001402EA0E9: jnz     short loc_1402EA0E2
 * 00000001402EA0EB: inc     rbx
 * 00000001402EA0EE: jmp     short loc_1402EA0F5
 * 00000001402EA0F0: mov     ebx, 5
 * 00000001402EA0F5: test    rdi, rdi
 * 00000001402EA0F8: lea     rax, [rsp+88h+arg_60]
 * 00000001402EA100: mov     edx, r15d
 * 00000001402EA103: mov     rcx, rbp
 * 00000001402EA106: cmovz   rdi, r8
 * 00000001402EA10A: and     [rsp+88h+var_10], 0
 * 00000001402EA110: mov     [rsp+88h+var_18], r15
 * 00000001402EA115: mov     r8d, 9
 * 00000001402EA11B: mov     [rsp+88h+var_20], rax
 * 00000001402EA120: lea     rax, [rsp+88h+arg_58]
 * 00000001402EA128: mov     [rsp+88h+var_28], r15
 * 00000001402EA12D: mov     [rsp+88h+var_30], rax
 * 00000001402EA132: lea     rax, [rsp+88h+arg_50]
 * 00000001402EA13A: mov     [rsp+88h+var_38], r15
 * 00000001402EA13F: mov     [rsp+88h+var_40], rax
 * 00000001402EA144: lea     rax, [rsp+88h+arg_40]
 * 00000001402EA14C: mov     [rsp+88h+var_48], rbx
 * 00000001402EA151: mov     [rsp+88h+var_50], rdi
 * 00000001402EA156: mov     [rsp+88h+var_58], 8
 * 00000001402EA15F: mov     [rsp+88h+var_60], rax
 * 00000001402EA164: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001402EA16A: lea     r9, WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids
 * 00000001402EA171: call    cs:__imp_WppAutoLogTrace
 * 00000001402EA178: nop     dword ptr [rax+rax+00h]
 * 00000001402EA17D: lea     r11, [rsp+88h+var_8]
 * 00000001402EA185: mov     rbx, [r11+10h]
 * 00000001402EA189: mov     rbp, [r11+18h]
 * 00000001402EA18D: mov     rsi, [r11+20h]
 * 00000001402EA191: mov     rdi, [r11+28h]
 * 00000001402EA195: mov     rsp, r11
 * 00000001402EA198: pop     r15
 * 00000001402EA19A: retn
 */
