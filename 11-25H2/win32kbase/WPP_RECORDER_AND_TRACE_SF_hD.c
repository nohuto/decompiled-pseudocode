/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400A02A4
 * Callers:
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x14009FAF0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400A02A4
 * Reason: Hex-Rays returned no pseudocode for 0x1400A02A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400A02A4: mov     [rsp+arg_0], rbx
 * 00000001400A02A9: mov     [rsp+arg_8], rsi
 * 00000001400A02AE: push    rdi
 * 00000001400A02AF: sub     rsp, 50h
 * 00000001400A02B3: movzx   ebx, [rsp+58h+arg_30]
 * 00000001400A02BB: mov     rsi, r9
 * 00000001400A02BE: mov     dil, r8b
 * 00000001400A02C1: test    dl, dl
 * 00000001400A02C3: jnz     short loc_1400A0331
 * 00000001400A02C5: test    dil, dil
 * 00000001400A02C8: jz      short loc_1400A0320
 * 00000001400A02CA: and     [rsp+58h+var_10], 0
 * 00000001400A02D0: lea     rax, [rsp+58h+arg_48]
 * 00000001400A02D8: mov     [rsp+58h+var_18], 4
 * 00000001400A02E1: lea     r9, WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids
 * 00000001400A02E8: mov     [rsp+58h+var_20], rax
 * 00000001400A02ED: mov     edx, 4
 * 00000001400A02F2: lea     rax, [rsp+58h+arg_40]
 * 00000001400A02FA: mov     [rsp+58h+var_28], 2
 * 00000001400A0303: mov     [rsp+58h+var_30], rax
 * 00000001400A0308: mov     rcx, rsi
 * 00000001400A030B: mov     word ptr [rsp+58h+var_38], bx
 * 00000001400A0310: lea     r8d, [rdx+3]
 * 00000001400A0314: call    cs:__imp_WppAutoLogTrace
 * 00000001400A031B: nop     dword ptr [rax+rax+00h]
 * 00000001400A0320: mov     rbx, [rsp+58h+arg_0]
 * 00000001400A0325: mov     rsi, [rsp+58h+arg_8]
 * 00000001400A032A: add     rsp, 50h
 * 00000001400A032E: pop     rdi
 * 00000001400A032F: retn
 * 00000001400A0331: and     [rsp+58h+var_18], 0
 * 00000001400A0337: lea     rdx, [rsp+58h+arg_48]
 * 00000001400A033F: mov     rax, cs:pfnWppTraceMessage
 * 00000001400A0346: lea     r8, WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids
 * 00000001400A034D: mov     [rsp+58h+var_20], 4
 * 00000001400A0356: mov     r9d, ebx
 * 00000001400A0359: mov     [rsp+58h+var_28], rdx
 * 00000001400A035E: lea     rdx, [rsp+58h+arg_40]
 * 00000001400A0366: mov     [rsp+58h+var_30], 2
 * 00000001400A036F: mov     [rsp+58h+var_38], rdx
 * 00000001400A0374: mov     edx, 2Bh ; '+'
 * 00000001400A0379: call    _guard_dispatch_icall
 * 00000001400A037E: jmp     loc_1400A02C5
 */
