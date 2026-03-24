/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x14027B07C
 * Callers:
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1401A7294 (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x14027B07C
 * Reason: Hex-Rays returned no pseudocode for 0x14027B07C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014027B07C: mov     r11, rsp
 * 000000014027B07F: mov     [r11+8], rbx
 * 000000014027B083: mov     [r11+10h], rbp
 * 000000014027B087: mov     [r11+18h], rsi
 * 000000014027B08B: push    rdi
 * 000000014027B08C: sub     rsp, 50h
 * 000000014027B090: movzx   ebx, [rsp+58h+arg_30]
 * 000000014027B098: mov     rsi, r9
 * 000000014027B09B: mov     dil, r8b
 * 000000014027B09E: mov     ebp, 8
 * 000000014027B0A3: test    dl, dl
 * 000000014027B0A5: jz      short loc_14027B0DE
 * 000000014027B0A7: and     qword ptr [r11-18h], 0
 * 000000014027B0AC: lea     rdx, [r11+50h]
 * 000000014027B0B0: mov     rax, cs:pfnWppTraceMessage
 * 000000014027B0B7: mov     r9d, ebx
 * 000000014027B0BA: mov     r8, [rsp+58h+arg_38]
 * 000000014027B0C2: mov     [r11-20h], rbp
 * 000000014027B0C6: mov     [r11-28h], rdx
 * 000000014027B0CA: lea     rdx, [r11+48h]
 * 000000014027B0CE: mov     [r11-30h], rbp
 * 000000014027B0D2: mov     [r11-38h], rdx
 * 000000014027B0D6: lea     edx, [rbp+23h]
 * 000000014027B0D9: call    _guard_dispatch_icall
 * 000000014027B0DE: test    dil, dil
 * 000000014027B0E1: jz      short loc_14027B137
 * 000000014027B0E3: and     [rsp+58h+var_10], 0
 * 000000014027B0E9: lea     rax, [rsp+58h+arg_48]
 * 000000014027B0F1: mov     r9, [rsp+58h+arg_38]
 * 000000014027B0F9: mov     r8d, 14h
 * 000000014027B0FF: movzx   edx, [rsp+58h+arg_20]
 * 000000014027B107: mov     rcx, rsi
 * 000000014027B10A: mov     [rsp+58h+var_18], rbp
 * 000000014027B10F: mov     [rsp+58h+var_20], rax
 * 000000014027B114: lea     rax, [rsp+58h+arg_40]
 * 000000014027B11C: mov     [rsp+58h+var_28], rbp
 * 000000014027B121: mov     [rsp+58h+var_30], rax
 * 000000014027B126: mov     [rsp+58h+var_38], bx
 * 000000014027B12B: call    cs:__imp_WppAutoLogTrace
 * 000000014027B132: nop     dword ptr [rax+rax+00h]
 * 000000014027B137: mov     rbx, [rsp+58h+arg_0]
 * 000000014027B13C: mov     rbp, [rsp+58h+arg_8]
 * 000000014027B141: mov     rsi, [rsp+58h+arg_10]
 * 000000014027B146: add     rsp, 50h
 * 000000014027B14A: pop     rdi
 * 000000014027B14B: retn
 */
