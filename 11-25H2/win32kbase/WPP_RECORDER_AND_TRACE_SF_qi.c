/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401234B0
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1401F0EC0 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401234B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401234B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401234B0: mov     [rsp+arg_0], rbx
 * 00000001401234B5: mov     [rsp+arg_8], rbp
 * 00000001401234BA: mov     [rsp+arg_10], rsi
 * 00000001401234BF: push    rdi
 * 00000001401234C0: sub     rsp, 50h
 * 00000001401234C4: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401234CC: mov     rsi, r9
 * 00000001401234CF: mov     dil, r8b
 * 00000001401234D2: mov     ebp, 8
 * 00000001401234D7: test    dl, dl
 * 00000001401234D9: jnz     short loc_140123544
 * 00000001401234DB: test    dil, dil
 * 00000001401234DE: jz      short loc_14012352E
 * 00000001401234E0: and     [rsp+58h+var_10], 0
 * 00000001401234E6: lea     rax, [rsp+58h+arg_48]
 * 00000001401234EE: mov     [rsp+58h+var_18], rbp
 * 00000001401234F3: lea     r9, WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids
 * 00000001401234FA: mov     [rsp+58h+var_20], rax
 * 00000001401234FF: mov     edx, 4
 * 0000000140123504: lea     rax, [rsp+58h+arg_40]
 * 000000014012350C: mov     [rsp+58h+var_28], rbp
 * 0000000140123511: mov     [rsp+58h+var_30], rax
 * 0000000140123516: mov     rcx, rsi
 * 0000000140123519: mov     word ptr [rsp+58h+var_38], bx
 * 000000014012351E: lea     r8d, [rdx-3]
 * 0000000140123522: call    cs:__imp_WppAutoLogTrace
 * 0000000140123529: nop     dword ptr [rax+rax+00h]
 * 000000014012352E: mov     rbx, [rsp+58h+arg_0]
 * 0000000140123533: mov     rbp, [rsp+58h+arg_8]
 * 0000000140123538: mov     rsi, [rsp+58h+arg_10]
 * 000000014012353D: add     rsp, 50h
 * 0000000140123541: pop     rdi
 * 0000000140123542: retn
 * 0000000140123544: and     [rsp+58h+var_18], 0
 * 000000014012354A: lea     rdx, [rsp+58h+arg_48]
 * 0000000140123552: mov     rax, cs:pfnWppTraceMessage
 * 0000000140123559: lea     r8, WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids
 * 0000000140123560: mov     [rsp+58h+var_20], rbp
 * 0000000140123565: mov     r9d, ebx
 * 0000000140123568: mov     [rsp+58h+var_28], rdx
 * 000000014012356D: lea     rdx, [rsp+58h+arg_40]
 * 0000000140123575: mov     [rsp+58h+var_30], rbp
 * 000000014012357A: mov     [rsp+58h+var_38], rdx
 * 000000014012357F: mov     edx, 2Bh ; '+'
 * 0000000140123584: call    _guard_dispatch_icall
 * 0000000140123589: jmp     loc_1401234DB
 */
