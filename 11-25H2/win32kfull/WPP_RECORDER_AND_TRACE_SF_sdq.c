/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401EF8C0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401EF8C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401EF8C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401EF8C0: mov     [rsp+arg_0], rbx
 * 00000001401EF8C5: mov     [rsp+arg_8], rdi
 * 00000001401EF8CA: mov     [rsp+arg_10], r12
 * 00000001401EF8CF: push    r15
 * 00000001401EF8D1: sub     rsp, 60h
 * 00000001401EF8D5: lea     r12, aNtusersetwindo; "NtUserSetWindowCompositionAttribute"
 * 00000001401EF8DC: mov     rdi, r9
 * 00000001401EF8DF: mov     bl, r8b
 * 00000001401EF8E2: mov     r15d, 1Bh
 * 00000001401EF8E8: test    dl, dl
 * 00000001401EF8EA: jnz     loc_1401EF971
 * 00000001401EF8F0: test    bl, bl
 * 00000001401EF8F2: jz      short loc_1401EF959
 * 00000001401EF8F4: and     [rsp+68h+var_10], 0
 * 00000001401EF8FA: lea     rax, [rsp+68h+arg_50]
 * 00000001401EF902: mov     [rsp+68h+var_18], 8
 * 00000001401EF90B: lea     r9, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001401EF912: mov     [rsp+68h+var_20], rax
 * 00000001401EF917: mov     edx, 3
 * 00000001401EF91C: mov     [rsp+68h+var_28], 4
 * 00000001401EF925: lea     rax, [rsp+68h+arg_48]
 * 00000001401EF92D: mov     [rsp+68h+var_30], rax
 * 00000001401EF932: mov     rcx, rdi
 * 00000001401EF935: mov     [rsp+68h+var_38], 24h ; '$'
 * 00000001401EF93E: mov     [rsp+68h+var_40], r12
 * 00000001401EF943: lea     r8d, [rdx-2]
 * 00000001401EF947: mov     word ptr [rsp+68h+var_48], r15w
 * 00000001401EF94D: call    cs:__imp_WppAutoLogTrace
 * 00000001401EF954: nop     dword ptr [rax+rax+00h]
 * 00000001401EF959: lea     r11, [rsp+68h+var_8]
 * 00000001401EF95E: mov     rbx, [r11+10h]
 * 00000001401EF962: mov     rdi, [r11+18h]
 * 00000001401EF966: mov     r12, [r11+20h]
 * 00000001401EF96A: mov     rsp, r11
 * 00000001401EF96D: pop     r15
 * 00000001401EF96F: retn
 * 00000001401EF971: and     [rsp+68h+var_18], 0
 * 00000001401EF977: lea     rdx, [rsp+68h+arg_50]
 * 00000001401EF97F: mov     rax, cs:pfnWppTraceMessage
 * 00000001401EF986: lea     r8, WPP_212fca24ed3e3073058b582086d1855d_Traceguids
 * 00000001401EF98D: mov     [rsp+68h+var_20], 8
 * 00000001401EF996: mov     r9d, r15d
 * 00000001401EF999: mov     [rsp+68h+var_28], rdx
 * 00000001401EF99E: lea     rdx, [rsp+68h+arg_48]
 * 00000001401EF9A6: mov     [rsp+68h+var_30], 4
 * 00000001401EF9AF: mov     [rsp+68h+var_38], rdx
 * 00000001401EF9B4: mov     edx, 2Bh ; '+'
 * 00000001401EF9B9: mov     [rsp+68h+var_40], 24h ; '$'
 * 00000001401EF9C2: mov     [rsp+68h+var_48], r12
 * 00000001401EF9C7: call    _guard_dispatch_icall
 * 00000001401EF9CC: jmp     loc_1401EF8F0
 */
