/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqd @ 0x1401287F4
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sqd @ 0x1401287F4
 * Reason: Hex-Rays returned no pseudocode for 0x1401287F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401287F4: mov     rax, rsp
 * 00000001401287F7: mov     [rax+8], rbx
 * 00000001401287FB: mov     [rax+10h], rbp
 * 00000001401287FF: mov     [rax+18h], rsi
 * 0000000140128803: mov     [rax+20h], rdi
 * 0000000140128807: push    r14
 * 0000000140128809: sub     rsp, 60h
 * 000000014012880D: mov     rdi, [rsp+68h+arg_40]
 * 0000000140128815: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140128819: movzx   ebp, [rsp+68h+arg_30]
 * 0000000140128821: mov     sil, r8b
 * 0000000140128824: lea     r8, aNull; "NULL"
 * 000000014012882B: mov     r14, r9
 * 000000014012882E: mov     r11, rcx
 * 0000000140128831: test    dl, dl
 * 0000000140128833: jz      loc_1401288C3
 * 0000000140128839: mov     r10, cs:pfnWppTraceMessage
 * 0000000140128840: test    rdi, rdi
 * 0000000140128843: jz      short loc_140128856
 * 0000000140128845: mov     rax, rbx
 * 0000000140128848: inc     rax
 * 000000014012884B: cmp     byte ptr [rdi+rax], 0
 * 000000014012884F: jnz     short loc_140128848
 * 0000000140128851: inc     rax
 * 0000000140128854: jmp     short loc_14012885B
 * 0000000140128856: mov     eax, 5
 * 000000014012885B: test    rdi, rdi
 * 000000014012885E: lea     rdx, [rsp+68h+arg_50]
 * 0000000140128866: mov     rcx, rdi
 * 0000000140128869: mov     r9d, ebp
 * 000000014012886C: cmovz   rcx, r8
 * 0000000140128870: and     [rsp+68h+var_18], 0
 * 0000000140128876: mov     r8, [rsp+68h+arg_38]
 * 000000014012887E: mov     [rsp+68h+var_20], 4
 * 0000000140128887: mov     [rsp+68h+var_28], rdx
 * 000000014012888C: lea     rdx, [rsp+68h+arg_48]
 * 0000000140128894: mov     [rsp+68h+var_30], 8
 * 000000014012889D: mov     [rsp+68h+var_38], rdx
 * 00000001401288A2: mov     edx, 2Bh ; '+'
 * 00000001401288A7: mov     [rsp+68h+var_40], rax
 * 00000001401288AC: mov     rax, r10
 * 00000001401288AF: mov     [rsp+68h+var_48], rcx
 * 00000001401288B4: mov     rcx, r11
 * 00000001401288B7: call    _guard_dispatch_icall
 * 00000001401288BC: lea     r8, aNull; "NULL"
 * 00000001401288C3: test    sil, sil
 * 00000001401288C6: jz      loc_14012894C
 * 00000001401288CC: test    rdi, rdi
 * 00000001401288CF: jz      short loc_1401288DF
 * 00000001401288D1: inc     rbx
 * 00000001401288D4: cmp     byte ptr [rdi+rbx], 0
 * 00000001401288D8: jnz     short loc_1401288D1
 * 00000001401288DA: inc     rbx
 * 00000001401288DD: jmp     short loc_1401288E4
 * 00000001401288DF: mov     ebx, 5
 * 00000001401288E4: mov     r9, [rsp+68h+arg_38]
 * 00000001401288EC: lea     rax, [rsp+68h+arg_50]
 * 00000001401288F4: test    rdi, rdi
 * 00000001401288F7: mov     edx, 5
 * 00000001401288FC: mov     rcx, r14
 * 00000001401288FF: cmovz   rdi, r8
 * 0000000140128903: and     [rsp+68h+var_10], 0
 * 0000000140128909: mov     [rsp+68h+var_18], 4
 * 0000000140128912: mov     [rsp+68h+var_20], rax
 * 0000000140128917: lea     r8d, [rdx+2]
 * 000000014012891B: mov     [rsp+68h+var_28], 8
 * 0000000140128924: lea     rax, [rsp+68h+arg_48]
 * 000000014012892C: mov     [rsp+68h+var_30], rax
 * 0000000140128931: mov     [rsp+68h+var_38], rbx
 * 0000000140128936: mov     [rsp+68h+var_40], rdi
 * 000000014012893B: mov     word ptr [rsp+68h+var_48], bp
 * 0000000140128940: call    cs:__imp_WppAutoLogTrace
 * 0000000140128947: nop     dword ptr [rax+rax+00h]
 * 000000014012894C: lea     r11, [rsp+68h+var_8]
 * 0000000140128951: mov     rbx, [r11+10h]
 * 0000000140128955: mov     rbp, [r11+18h]
 * 0000000140128959: mov     rsi, [r11+20h]
 * 000000014012895D: mov     rdi, [r11+28h]
 * 0000000140128961: mov     rsp, r11
 * 0000000140128964: pop     r14
 * 0000000140128966: retn
 */
