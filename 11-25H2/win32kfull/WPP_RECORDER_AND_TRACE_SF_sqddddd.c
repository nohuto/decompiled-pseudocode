/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x14018AFA8
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x14018AFA8
 * Reason: Hex-Rays returned no pseudocode for 0x14018AFA8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018AFA8: mov     rax, rsp
 * 000000014018AFAB: mov     [rax+8], rbx
 * 000000014018AFAF: mov     [rax+10h], rsi
 * 000000014018AFB3: mov     [rax+18h], rdi
 * 000000014018AFB7: push    rbp
 * 000000014018AFB8: push    r12
 * 000000014018AFBA: push    r14
 * 000000014018AFBC: lea     rbp, [rax-1Fh]
 * 000000014018AFC0: sub     rsp, 0A0h
 * 000000014018AFC7: mov     rdi, [rbp+17h+arg_40]
 * 000000014018AFCB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014018AFCF: mov     r14, r9
 * 000000014018AFD2: mov     sil, r8b
 * 000000014018AFD5: lea     r8, aNull; "NULL"
 * 000000014018AFDC: mov     r11, rcx
 * 000000014018AFDF: lea     r9d, [rbx+17h]
 * 000000014018AFE3: lea     r12d, [rbx+5]
 * 000000014018AFE7: test    dl, dl
 * 000000014018AFE9: jnz     loc_14018B0D4
 * 000000014018AFEF: test    sil, sil
 * 000000014018AFF2: jz      loc_14018B0B6
 * 000000014018AFF8: test    rdi, rdi
 * 000000014018AFFB: jz      loc_14018B1A3
 * 000000014018B001: inc     rbx
 * 000000014018B004: cmp     byte ptr [rdi+rbx], 0
 * 000000014018B008: jnz     short loc_14018B001
 * 000000014018B00A: inc     rbx
 * 000000014018B00D: test    rdi, rdi
 * 000000014018B010: lea     rax, [rbp+17h+arg_70]
 * 000000014018B017: mov     edx, r12d
 * 000000014018B01A: mov     rcx, r14
 * 000000014018B01D: cmovz   rdi, r8
 * 000000014018B021: and     qword ptr [rsp+0B0h+var_18], 0
 * 000000014018B02A: mov     [rsp+0B0h+var_20], r12
 * 000000014018B032: mov     r8d, 15h
 * 000000014018B038: mov     [rsp+0B0h+var_28], rax
 * 000000014018B040: lea     rax, [rbp+17h+arg_68]
 * 000000014018B047: mov     [rsp+0B0h+var_30], r12
 * 000000014018B04F: mov     [rsp+0B0h+var_38], rax
 * 000000014018B054: lea     rax, [rbp+17h+arg_60]
 * 000000014018B05B: mov     [rsp+0B0h+var_40], r12
 * 000000014018B060: mov     [rsp+0B0h+var_48], rax
 * 000000014018B065: lea     rax, [rbp+17h+arg_58]
 * 000000014018B069: mov     [rsp+0B0h+var_50], r12
 * 000000014018B06E: mov     [rsp+0B0h+var_58], rax
 * 000000014018B073: lea     rax, [rbp+17h+arg_50]
 * 000000014018B077: mov     [rsp+0B0h+var_60], r12
 * 000000014018B07C: mov     [rsp+0B0h+var_68], rax
 * 000000014018B081: lea     rax, [rbp+17h+arg_48]
 * 000000014018B085: mov     [rsp+0B0h+var_70], 8
 * 000000014018B08E: mov     [rsp+0B0h+var_78], rax
 * 000000014018B093: mov     [rsp+0B0h+var_80], rbx
 * 000000014018B098: mov     [rsp+0B0h+var_88], rdi
 * 000000014018B09D: mov     word ptr [rsp+0B0h+var_90], r9w
 * 000000014018B0A3: lea     r9, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 000000014018B0AA: call    cs:__imp_WppAutoLogTrace
 * 000000014018B0B1: nop     dword ptr [rax+rax+00h]
 * 000000014018B0B6: lea     r11, [rsp+0B0h+var_10]
 * 000000014018B0BE: mov     rbx, [r11+20h]
 * 000000014018B0C2: mov     rsi, [r11+28h]
 * 000000014018B0C6: mov     rdi, [r11+30h]
 * 000000014018B0CA: mov     rsp, r11
 * 000000014018B0CD: pop     r14
 * 000000014018B0CF: pop     r12
 * 000000014018B0D1: pop     rbp
 * 000000014018B0D2: retn
 * 000000014018B0D4: mov     r10, cs:pfnWppTraceMessage
 * 000000014018B0DB: test    rdi, rdi
 * 000000014018B0DE: jz      short loc_14018B0F1
 * 000000014018B0E0: mov     rax, rbx
 * 000000014018B0E3: inc     rax
 * 000000014018B0E6: cmp     byte ptr [rdi+rax], 0
 * 000000014018B0EA: jnz     short loc_14018B0E3
 * 000000014018B0EC: inc     rax
 * 000000014018B0EF: jmp     short loc_14018B0F6
 * 000000014018B0F1: mov     eax, 5
 * 000000014018B0F6: test    rdi, rdi
 * 000000014018B0F9: lea     rdx, [rbp+17h+arg_70]
 * 000000014018B100: mov     rcx, rdi
 * 000000014018B103: cmovz   rcx, r8
 * 000000014018B107: and     [rsp+0B0h+var_20], 0
 * 000000014018B110: mov     [rsp+0B0h+var_28], r12
 * 000000014018B118: lea     r8, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 000000014018B11F: mov     [rsp+0B0h+var_30], rdx
 * 000000014018B127: lea     rdx, [rbp+17h+arg_68]
 * 000000014018B12E: mov     [rsp+0B0h+var_38], r12
 * 000000014018B133: mov     [rsp+0B0h+var_40], rdx
 * 000000014018B138: lea     rdx, [rbp+17h+arg_60]
 * 000000014018B13F: mov     [rsp+0B0h+var_48], r12
 * 000000014018B144: mov     [rsp+0B0h+var_50], rdx
 * 000000014018B149: lea     rdx, [rbp+17h+arg_58]
 * 000000014018B14D: mov     [rsp+0B0h+var_58], r12
 * 000000014018B152: mov     [rsp+0B0h+var_60], rdx
 * 000000014018B157: lea     rdx, [rbp+17h+arg_50]
 * 000000014018B15B: mov     [rsp+0B0h+var_68], r12
 * 000000014018B160: mov     [rsp+0B0h+var_70], rdx
 * 000000014018B165: lea     rdx, [rbp+17h+arg_48]
 * 000000014018B169: mov     [rsp+0B0h+var_78], 8
 * 000000014018B172: mov     [rsp+0B0h+var_80], rdx
 * 000000014018B177: mov     edx, 2Bh ; '+'
 * 000000014018B17C: mov     [rsp+0B0h+var_88], rax
 * 000000014018B181: mov     rax, r10
 * 000000014018B184: mov     [rsp+0B0h+var_90], rcx
 * 000000014018B189: mov     rcx, r11
 * 000000014018B18C: call    _guard_dispatch_icall
 * 000000014018B191: lea     r8, aNull; "NULL"
 * 000000014018B198: mov     r9d, 16h
 * 000000014018B19E: jmp     loc_14018AFEF
 * 000000014018B1A3: mov     ebx, 5
 * 000000014018B1A8: jmp     loc_14018B00D
 */
