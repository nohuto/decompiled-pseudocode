/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x14016C4B0
 * Callers:
 *     UpdateMouseConnectionState @ 0x140163FC4 (UpdateMouseConnectionState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x14016C4B0
 * Reason: Hex-Rays returned no pseudocode for 0x14016C4B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C4B0: mov     [rsp+arg_0], rbx
 * 000000014016C4B5: mov     [rsp+arg_8], rbp
 * 000000014016C4BA: push    rdi
 * 000000014016C4BB: sub     rsp, 40h
 * 000000014016C4BF: mov     rdi, r9
 * 000000014016C4C2: mov     bl, r8b
 * 000000014016C4C5: mov     ebp, 0Bh
 * 000000014016C4CA: test    dl, dl
 * 000000014016C4CC: jnz     short loc_14016C526
 * 000000014016C4CE: test    bl, bl
 * 000000014016C4D0: jz      short loc_14016C515
 * 000000014016C4D2: mov     [rsp+48h+var_10], 0
 * 000000014016C4DB: lea     rax, [rsp+48h+arg_40]
 * 000000014016C4E3: mov     edx, 4
 * 000000014016C4E8: mov     [rsp+48h+var_18], 4
 * 000000014016C4F1: mov     [rsp+48h+var_20], rax
 * 000000014016C4F6: lea     r9, WPP_2f1627e9cdb73d4d6f02f75a8604347d_Traceguids
 * 000000014016C4FD: mov     rcx, rdi
 * 000000014016C500: mov     word ptr [rsp+48h+var_28], bp
 * 000000014016C505: lea     r8d, [rdx-2]
 * 000000014016C509: call    cs:__imp_WppAutoLogTrace
 * 000000014016C510: nop     dword ptr [rax+rax+00h]
 * 000000014016C515: mov     rbx, [rsp+48h+arg_0]
 * 000000014016C51A: mov     rbp, [rsp+48h+arg_8]
 * 000000014016C51F: add     rsp, 40h
 * 000000014016C523: pop     rdi
 * 000000014016C524: retn
 * 000000014016C526: mov     rax, cs:pfnWppTraceMessage
 * 000000014016C52D: lea     rdx, [rsp+48h+arg_40]
 * 000000014016C535: mov     [rsp+48h+var_18], 0
 * 000000014016C53E: lea     r8, WPP_2f1627e9cdb73d4d6f02f75a8604347d_Traceguids
 * 000000014016C545: mov     [rsp+48h+var_20], 4
 * 000000014016C54E: mov     r9d, ebp
 * 000000014016C551: mov     [rsp+48h+var_28], rdx
 * 000000014016C556: mov     edx, 2Bh ; '+'
 * 000000014016C55B: call    _guard_dispatch_icall
 * 000000014016C560: jmp     loc_14016C4CE
 */
