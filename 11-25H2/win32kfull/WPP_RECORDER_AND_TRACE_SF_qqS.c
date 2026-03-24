/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401EF9D8
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401EF9D8
 * Reason: Hex-Rays returned no pseudocode for 0x1401EF9D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401EF9D8: mov     [rsp+arg_0], rbx
 * 00000001401EF9DD: mov     [rsp+arg_8], rbp
 * 00000001401EF9E2: mov     [rsp+arg_10], rsi
 * 00000001401EF9E7: push    rdi
 * 00000001401EF9E8: push    r12
 * 00000001401EF9EA: push    r13
 * 00000001401EF9EC: push    r14
 * 00000001401EF9EE: push    r15
 * 00000001401EF9F0: sub     rsp, 60h
 * 00000001401EF9F4: mov     rbx, [rsp+88h+arg_50]
 * 00000001401EF9FC: lea     r13, aNull_0; "NULL"
 * 00000001401EFA03: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401EFA07: xor     r15d, r15d
 * 00000001401EFA0A: mov     bpl, r8b
 * 00000001401EFA0D: mov     r14, r9
 * 00000001401EFA10: mov     r11, rcx
 * 00000001401EFA13: lea     esi, [rdi+0Bh]
 * 00000001401EFA16: lea     r8d, [rdi+13h]
 * 00000001401EFA1A: lea     r12d, [rdi+9]
 * 00000001401EFA1E: test    dl, dl
 * 00000001401EFA20: jnz     loc_1401EFABF
 * 00000001401EFA26: test    bpl, bpl
 * 00000001401EFA29: jz      short loc_1401EFAA0
 * 00000001401EFA2B: test    rbx, rbx
 * 00000001401EFA2E: jz      short loc_1401EFA45
 * 00000001401EFA30: inc     rdi
 * 00000001401EFA33: cmp     [rbx+rdi*2], r15w
 * 00000001401EFA38: jnz     short loc_1401EFA30
 * 00000001401EFA3A: lea     rsi, ds:2[rdi*2]
 * 00000001401EFA42: test    rbx, rbx
 * 00000001401EFA45: mov     [rsp+88h+var_30], r15
 * 00000001401EFA4A: lea     rax, [rsp+88h+arg_48]
 * 00000001401EFA52: mov     [rsp+88h+var_38], rsi
 * 00000001401EFA57: lea     r9, WPP_e1faede55423302b9088ff86a1f044f2_Traceguids
 * 00000001401EFA5E: cmovz   rbx, r13
 * 00000001401EFA62: mov     edx, 4
 * 00000001401EFA67: mov     [rsp+88h+var_40], rbx
 * 00000001401EFA6C: mov     rcx, r14
 * 00000001401EFA6F: mov     [rsp+88h+var_48], r12
 * 00000001401EFA74: mov     [rsp+88h+var_50], rax
 * 00000001401EFA79: lea     rax, [rsp+88h+arg_40]
 * 00000001401EFA81: mov     [rsp+88h+var_58], r12
 * 00000001401EFA86: mov     [rsp+88h+var_60], rax
 * 00000001401EFA8B: mov     word ptr [rsp+88h+var_68], r8w
 * 00000001401EFA91: mov     r8d, r12d
 * 00000001401EFA94: call    cs:__imp_WppAutoLogTrace
 * 00000001401EFA9B: nop     dword ptr [rax+rax+00h]
 * 00000001401EFAA0: lea     r11, [rsp+88h+var_28]
 * 00000001401EFAA5: mov     rbx, [r11+30h]
 * 00000001401EFAA9: mov     rbp, [r11+38h]
 * 00000001401EFAAD: mov     rsi, [r11+40h]
 * 00000001401EFAB1: mov     rsp, r11
 * 00000001401EFAB4: pop     r15
 * 00000001401EFAB6: pop     r14
 * 00000001401EFAB8: pop     r13
 * 00000001401EFABA: pop     r12
 * 00000001401EFABC: pop     rdi
 * 00000001401EFABD: retn
 * 00000001401EFABF: mov     r10, cs:pfnWppTraceMessage
 * 00000001401EFAC6: test    rbx, rbx
 * 00000001401EFAC9: jz      short loc_1401EFAE2
 * 00000001401EFACB: mov     rax, rdi
 * 00000001401EFACE: inc     rax
 * 00000001401EFAD1: cmp     [rbx+rax*2], r15w
 * 00000001401EFAD6: jnz     short loc_1401EFACE
 * 00000001401EFAD8: lea     rax, ds:2[rax*2]
 * 00000001401EFAE0: jmp     short loc_1401EFAE5
 * 00000001401EFAE2: mov     rax, rsi
 * 00000001401EFAE5: mov     [rsp+88h+var_38], r15
 * 00000001401EFAEA: test    rbx, rbx
 * 00000001401EFAED: mov     [rsp+88h+var_40], rax
 * 00000001401EFAF2: mov     r9d, r8d
 * 00000001401EFAF5: lea     rax, [rsp+88h+arg_48]
 * 00000001401EFAFD: mov     rcx, rbx
 * 00000001401EFB00: cmovz   rcx, r13
 * 00000001401EFB04: lea     r8, WPP_e1faede55423302b9088ff86a1f044f2_Traceguids
 * 00000001401EFB0B: mov     [rsp+88h+var_48], rcx
 * 00000001401EFB10: mov     edx, 2Bh ; '+'
 * 00000001401EFB15: mov     [rsp+88h+var_50], r12
 * 00000001401EFB1A: mov     rcx, r11
 * 00000001401EFB1D: mov     [rsp+88h+var_58], rax
 * 00000001401EFB22: lea     rax, [rsp+88h+arg_40]
 * 00000001401EFB2A: mov     [rsp+88h+var_60], r12
 * 00000001401EFB2F: mov     [rsp+88h+var_68], rax
 * 00000001401EFB34: mov     rax, r10
 * 00000001401EFB37: call    _guard_dispatch_icall
 * 00000001401EFB3C: mov     r8d, 12h
 * 00000001401EFB42: jmp     loc_1401EFA26
 */
