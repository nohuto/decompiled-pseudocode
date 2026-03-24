/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DqD @ 0x14020A7FC
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DqD @ 0x14020A7FC
 * Reason: Hex-Rays returned no pseudocode for 0x14020A7FC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020A7FC: mov     [rsp+arg_0], rbx
 * 000000014020A801: mov     [rsp+arg_8], rsi
 * 000000014020A806: mov     [rsp+arg_10], rdi
 * 000000014020A80B: push    r14
 * 000000014020A80D: sub     rsp, 60h
 * 000000014020A811: mov     esi, 4
 * 000000014020A816: mov     rdi, r9
 * 000000014020A819: mov     bl, r8b
 * 000000014020A81C: lea     r14d, [rsi+4Ah]
 * 000000014020A820: test    dl, dl
 * 000000014020A822: jnz     loc_14020A8A8
 * 000000014020A828: test    bl, bl
 * 000000014020A82A: jz      short loc_14020A890
 * 000000014020A82C: and     [rsp+68h+var_10], 0
 * 000000014020A832: lea     rax, [rsp+68h+arg_50]
 * 000000014020A83A: mov     [rsp+68h+var_18], rsi
 * 000000014020A83F: lea     r9, WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids
 * 000000014020A846: mov     [rsp+68h+var_20], rax
 * 000000014020A84B: mov     r8d, 2
 * 000000014020A851: mov     [rsp+68h+var_28], 8
 * 000000014020A85A: lea     rax, [rsp+68h+arg_48]
 * 000000014020A862: mov     [rsp+68h+var_30], rax
 * 000000014020A867: mov     edx, esi
 * 000000014020A869: lea     rax, [rsp+68h+arg_40]
 * 000000014020A871: mov     [rsp+68h+var_38], rsi
 * 000000014020A876: mov     [rsp+68h+var_40], rax
 * 000000014020A87B: mov     rcx, rdi
 * 000000014020A87E: mov     word ptr [rsp+68h+var_48], r14w
 * 000000014020A884: call    cs:__imp_WppAutoLogTrace
 * 000000014020A88B: nop     dword ptr [rax+rax+00h]
 * 000000014020A890: lea     r11, [rsp+68h+var_8]
 * 000000014020A895: mov     rbx, [r11+10h]
 * 000000014020A899: mov     rsi, [r11+18h]
 * 000000014020A89D: mov     rdi, [r11+20h]
 * 000000014020A8A1: mov     rsp, r11
 * 000000014020A8A4: pop     r14
 * 000000014020A8A6: retn
 * 000000014020A8A8: and     [rsp+68h+var_18], 0
 * 000000014020A8AE: lea     rdx, [rsp+68h+arg_50]
 * 000000014020A8B6: mov     rax, cs:pfnWppTraceMessage
 * 000000014020A8BD: lea     r8, WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids
 * 000000014020A8C4: mov     [rsp+68h+var_20], rsi
 * 000000014020A8C9: mov     r9d, r14d
 * 000000014020A8CC: mov     [rsp+68h+var_28], rdx
 * 000000014020A8D1: lea     rdx, [rsp+68h+arg_48]
 * 000000014020A8D9: mov     [rsp+68h+var_30], 8
 * 000000014020A8E2: mov     [rsp+68h+var_38], rdx
 * 000000014020A8E7: lea     rdx, [rsp+68h+arg_40]
 * 000000014020A8EF: mov     [rsp+68h+var_40], rsi
 * 000000014020A8F4: mov     [rsp+68h+var_48], rdx
 * 000000014020A8F9: mov     edx, 2Bh ; '+'
 * 000000014020A8FE: call    _guard_dispatch_icall
 * 000000014020A903: jmp     loc_14020A828
 */
