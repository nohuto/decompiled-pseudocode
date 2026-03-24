/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140275310
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x14013677C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140275310
 * Reason: Hex-Rays returned no pseudocode for 0x140275310
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140275310: mov     r11, rsp
 * 0000000140275313: mov     [r11+8], rbx
 * 0000000140275317: mov     [r11+10h], rbp
 * 000000014027531B: mov     [r11+18h], rsi
 * 000000014027531F: push    rdi
 * 0000000140275320: sub     rsp, 60h
 * 0000000140275324: movzx   edi, [rsp+68h+arg_30]
 * 000000014027532C: mov     rsi, r9
 * 000000014027532F: mov     bl, r8b
 * 0000000140275332: mov     ebp, 4
 * 0000000140275337: test    dl, dl
 * 0000000140275339: jz      short loc_140275382
 * 000000014027533B: and     qword ptr [r11-18h], 0
 * 0000000140275340: lea     rdx, [r11+58h]
 * 0000000140275344: mov     rax, cs:pfnWppTraceMessage
 * 000000014027534B: mov     r9d, edi
 * 000000014027534E: mov     r8, [rsp+68h+arg_38]
 * 0000000140275356: mov     qword ptr [r11-20h], 8
 * 000000014027535E: mov     [r11-28h], rdx
 * 0000000140275362: lea     rdx, [r11+50h]
 * 0000000140275366: mov     [r11-30h], rbp
 * 000000014027536A: mov     [r11-38h], rdx
 * 000000014027536E: lea     rdx, [r11+48h]
 * 0000000140275372: mov     [r11-40h], rbp
 * 0000000140275376: mov     [r11-48h], rdx
 * 000000014027537A: lea     edx, [rbp+27h]
 * 000000014027537D: call    _guard_dispatch_icall
 * 0000000140275382: test    bl, bl
 * 0000000140275384: jz      short loc_1402753EF
 * 0000000140275386: and     [rsp+68h+var_10], 0
 * 000000014027538C: lea     rax, [rsp+68h+arg_50]
 * 0000000140275394: mov     r9, [rsp+68h+arg_38]
 * 000000014027539C: mov     edx, 5
 * 00000001402753A1: mov     r8d, [rsp+68h+arg_28]
 * 00000001402753A9: mov     rcx, rsi
 * 00000001402753AC: mov     [rsp+68h+var_18], 8
 * 00000001402753B5: mov     [rsp+68h+var_20], rax
 * 00000001402753BA: lea     rax, [rsp+68h+arg_48]
 * 00000001402753C2: mov     [rsp+68h+var_28], rbp
 * 00000001402753C7: mov     [rsp+68h+var_30], rax
 * 00000001402753CC: lea     rax, [rsp+68h+arg_40]
 * 00000001402753D4: mov     [rsp+68h+var_38], rbp
 * 00000001402753D9: mov     [rsp+68h+var_40], rax
 * 00000001402753DE: mov     [rsp+68h+var_48], di
 * 00000001402753E3: call    cs:__imp_WppAutoLogTrace
 * 00000001402753EA: nop     dword ptr [rax+rax+00h]
 * 00000001402753EF: lea     r11, [rsp+68h+var_8]
 * 00000001402753F4: mov     rbx, [r11+10h]
 * 00000001402753F8: mov     rbp, [r11+18h]
 * 00000001402753FC: mov     rsi, [r11+20h]
 * 0000000140275400: mov     rsp, r11
 * 0000000140275403: pop     rdi
 * 0000000140275404: retn
 */
