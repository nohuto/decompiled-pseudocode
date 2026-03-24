/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A4938
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1401B8D60 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A4938
 * Reason: Hex-Rays returned no pseudocode for 0x1402A4938
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A4938: mov     r11, rsp
 * 00000001402A493B: mov     [r11+8], rbx
 * 00000001402A493F: mov     [r11+10h], rdi
 * 00000001402A4943: push    r14
 * 00000001402A4945: sub     rsp, 50h
 * 00000001402A4949: mov     rdi, r9
 * 00000001402A494C: mov     bl, r8b
 * 00000001402A494F: mov     r14d, 11h
 * 00000001402A4955: test    dl, dl
 * 00000001402A4957: jz      short loc_1402A4998
 * 00000001402A4959: and     qword ptr [r11-18h], 0
 * 00000001402A495E: lea     rdx, [r11+50h]
 * 00000001402A4962: mov     rax, cs:pfnWppTraceMessage
 * 00000001402A4969: lea     r8, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A4970: mov     qword ptr [r11-20h], 8
 * 00000001402A4978: mov     r9d, r14d
 * 00000001402A497B: mov     [r11-28h], rdx
 * 00000001402A497F: lea     rdx, [r11+48h]
 * 00000001402A4983: mov     qword ptr [r11-30h], 4
 * 00000001402A498B: mov     [r11-38h], rdx
 * 00000001402A498F: lea     edx, [r14+1Ah]
 * 00000001402A4993: call    _guard_dispatch_icall
 * 00000001402A4998: test    bl, bl
 * 00000001402A499A: jz      short loc_1402A49F3
 * 00000001402A499C: and     [rsp+58h+var_10], 0
 * 00000001402A49A2: lea     rax, [rsp+58h+arg_48]
 * 00000001402A49AA: mov     [rsp+58h+var_18], 8
 * 00000001402A49B3: lea     r9, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001402A49BA: mov     [rsp+58h+var_20], rax
 * 00000001402A49BF: mov     edx, 2
 * 00000001402A49C4: lea     rax, [rsp+58h+arg_40]
 * 00000001402A49CC: mov     [rsp+58h+var_28], 4
 * 00000001402A49D5: mov     [rsp+58h+var_30], rax
 * 00000001402A49DA: mov     rcx, rdi
 * 00000001402A49DD: mov     [rsp+58h+var_38], r14w
 * 00000001402A49E3: lea     r8d, [rdx+7]
 * 00000001402A49E7: call    cs:__imp_WppAutoLogTrace
 * 00000001402A49EE: nop     dword ptr [rax+rax+00h]
 * 00000001402A49F3: mov     rbx, [rsp+58h+arg_0]
 * 00000001402A49F8: mov     rdi, [rsp+58h+arg_8]
 * 00000001402A49FD: add     rsp, 50h
 * 00000001402A4A01: pop     r14
 * 00000001402A4A03: retn
 */
