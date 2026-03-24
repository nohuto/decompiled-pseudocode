/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401D31A0
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x140242920 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D94B8 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401D31A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D31A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D31A0: mov     rax, rsp
 * 00000001401D31A3: mov     [rax+8], rbx
 * 00000001401D31A7: mov     [rax+10h], rbp
 * 00000001401D31AB: mov     [rax+18h], rsi
 * 00000001401D31AF: mov     [rax+20h], rdi
 * 00000001401D31B3: push    r12
 * 00000001401D31B5: push    r14
 * 00000001401D31B7: push    r15
 * 00000001401D31B9: sub     rsp, 50h
 * 00000001401D31BD: mov     rbx, [rsp+68h+arg_48]
 * 00000001401D31C5: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001401D31C9: movzx   r14d, [rsp+68h+arg_30]
 * 00000001401D31D2: xor     r12d, r12d
 * 00000001401D31D5: mov     bpl, r8b
 * 00000001401D31D8: mov     r15, r9
 * 00000001401D31DB: lea     r8, aNull_0; "NULL"
 * 00000001401D31E2: mov     r11, rcx
 * 00000001401D31E5: lea     esi, [rdi+0Bh]
 * 00000001401D31E8: test    dl, dl
 * 00000001401D31EA: jnz     loc_1401D3285
 * 00000001401D31F0: test    bpl, bpl
 * 00000001401D31F3: jz      short loc_1401D3265
 * 00000001401D31F5: test    rbx, rbx
 * 00000001401D31F8: jz      short loc_1401D320F
 * 00000001401D31FA: inc     rdi
 * 00000001401D31FD: cmp     [rbx+rdi*2], r12w
 * 00000001401D3202: jnz     short loc_1401D31FA
 * 00000001401D3204: lea     rsi, ds:2[rdi*2]
 * 00000001401D320C: test    rbx, rbx
 * 00000001401D320F: mov     r9, [rsp+68h+arg_38]
 * 00000001401D3217: lea     rax, [rsp+68h+arg_40]
 * 00000001401D321F: movzx   edx, [rsp+68h+arg_20]
 * 00000001401D3227: cmovz   rbx, r8
 * 00000001401D322B: mov     r8d, [rsp+68h+arg_28]
 * 00000001401D3233: mov     rcx, r15
 * 00000001401D3236: mov     [rsp+68h+var_20], r12
 * 00000001401D323B: mov     [rsp+68h+var_28], rsi
 * 00000001401D3240: mov     [rsp+68h+var_30], rbx
 * 00000001401D3245: mov     [rsp+68h+var_38], 8
 * 00000001401D324E: mov     [rsp+68h+var_40], rax
 * 00000001401D3253: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001401D3259: call    cs:__imp_WppAutoLogTrace
 * 00000001401D3260: nop     dword ptr [rax+rax+00h]
 * 00000001401D3265: lea     r11, [rsp+68h+var_18]
 * 00000001401D326A: mov     rbx, [r11+20h]
 * 00000001401D326E: mov     rbp, [r11+28h]
 * 00000001401D3272: mov     rsi, [r11+30h]
 * 00000001401D3276: mov     rdi, [r11+38h]
 * 00000001401D327A: mov     rsp, r11
 * 00000001401D327D: pop     r15
 * 00000001401D327F: pop     r14
 * 00000001401D3281: pop     r12
 * 00000001401D3283: retn
 * 00000001401D3285: mov     r10, cs:pfnWppTraceMessage
 * 00000001401D328C: test    rbx, rbx
 * 00000001401D328F: jz      short loc_1401D32A8
 * 00000001401D3291: mov     rax, rdi
 * 00000001401D3294: inc     rax
 * 00000001401D3297: cmp     [rbx+rax*2], r12w
 * 00000001401D329C: jnz     short loc_1401D3294
 * 00000001401D329E: lea     rax, ds:2[rax*2]
 * 00000001401D32A6: jmp     short loc_1401D32AB
 * 00000001401D32A8: mov     rax, rsi
 * 00000001401D32AB: mov     [rsp+68h+var_28], r12
 * 00000001401D32B0: test    rbx, rbx
 * 00000001401D32B3: mov     [rsp+68h+var_30], rax
 * 00000001401D32B8: mov     rcx, rbx
 * 00000001401D32BB: cmovz   rcx, r8
 * 00000001401D32BF: lea     rax, [rsp+68h+arg_40]
 * 00000001401D32C7: mov     r8, [rsp+68h+arg_38]
 * 00000001401D32CF: mov     r9d, r14d
 * 00000001401D32D2: mov     [rsp+68h+var_38], rcx
 * 00000001401D32D7: mov     edx, 2Bh ; '+'
 * 00000001401D32DC: mov     [rsp+68h+var_40], 8
 * 00000001401D32E5: mov     rcx, r11
 * 00000001401D32E8: mov     [rsp+68h+var_48], rax
 * 00000001401D32ED: mov     rax, r10
 * 00000001401D32F0: call    _guard_dispatch_icall
 * 00000001401D32F5: lea     r8, aNull_0; "NULL"
 * 00000001401D32FC: jmp     loc_1401D31F0
 */
