/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x140132920
 * Callers:
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x140132920
 * Reason: Hex-Rays returned no pseudocode for 0x140132920
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140132920: mov     [rsp+arg_0], rbx
 * 0000000140132925: mov     [rsp+arg_8], rbp
 * 000000014013292A: push    rdi
 * 000000014013292B: sub     rsp, 40h
 * 000000014013292F: mov     rdi, r9
 * 0000000140132932: mov     bl, r8b
 * 0000000140132935: mov     ebp, 0Bh
 * 000000014013293A: test    dl, dl
 * 000000014013293C: jnz     short loc_140132993
 * 000000014013293E: test    bl, bl
 * 0000000140132940: jz      short loc_140132982
 * 0000000140132942: and     [rsp+48h+var_10], 0
 * 0000000140132948: lea     rax, [rsp+48h+arg_40]
 * 0000000140132950: mov     edx, 4
 * 0000000140132955: mov     [rsp+48h+var_18], 4
 * 000000014013295E: mov     [rsp+48h+var_20], rax
 * 0000000140132963: lea     r9, WPP_2b15afcf479f3f86221c34eb2f24255f_Traceguids
 * 000000014013296A: mov     rcx, rdi
 * 000000014013296D: mov     word ptr [rsp+48h+var_28], bp
 * 0000000140132972: lea     r8d, [rdx-2]
 * 0000000140132976: call    cs:__imp_WppAutoLogTrace
 * 000000014013297D: nop     dword ptr [rax+rax+00h]
 * 0000000140132982: mov     rbx, [rsp+48h+arg_0]
 * 0000000140132987: mov     rbp, [rsp+48h+arg_8]
 * 000000014013298C: add     rsp, 40h
 * 0000000140132990: pop     rdi
 * 0000000140132991: retn
 * 0000000140132993: and     [rsp+48h+var_18], 0
 * 0000000140132999: lea     rdx, [rsp+48h+arg_40]
 * 00000001401329A1: mov     rax, cs:pfnWppTraceMessage
 * 00000001401329A8: lea     r8, WPP_2b15afcf479f3f86221c34eb2f24255f_Traceguids
 * 00000001401329AF: mov     [rsp+48h+var_20], 4
 * 00000001401329B8: mov     r9d, ebp
 * 00000001401329BB: mov     [rsp+48h+var_28], rdx
 * 00000001401329C0: mov     edx, 2Bh ; '+'
 * 00000001401329C5: call    _guard_dispatch_icall
 * 00000001401329CA: jmp     loc_14013293E
 */
