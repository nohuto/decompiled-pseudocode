/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AEA5C
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1401AE6E0 (NtMapVisualRelativePoints.c)
 *     RIMIDEGetTimeStampDelta @ 0x1401E9B20 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AEA5C
 * Reason: Hex-Rays returned no pseudocode for 0x1401AEA5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AEA5C: mov     r11, rsp
 * 00000001401AEA5F: mov     [r11+8], rbx
 * 00000001401AEA63: mov     [r11+10h], rbp
 * 00000001401AEA67: mov     [r11+18h], rsi
 * 00000001401AEA6B: push    rdi
 * 00000001401AEA6C: sub     rsp, 50h
 * 00000001401AEA70: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401AEA78: mov     rsi, r9
 * 00000001401AEA7B: mov     dil, r8b
 * 00000001401AEA7E: mov     ebp, 8
 * 00000001401AEA83: test    dl, dl
 * 00000001401AEA85: jz      short loc_1401AEABE
 * 00000001401AEA87: and     qword ptr [r11-18h], 0
 * 00000001401AEA8C: lea     rdx, [r11+50h]
 * 00000001401AEA90: mov     rax, cs:pfnWppTraceMessage
 * 00000001401AEA97: mov     r9d, ebx
 * 00000001401AEA9A: mov     r8, [rsp+58h+arg_38]
 * 00000001401AEAA2: mov     [r11-20h], rbp
 * 00000001401AEAA6: mov     [r11-28h], rdx
 * 00000001401AEAAA: lea     rdx, [r11+48h]
 * 00000001401AEAAE: mov     [r11-30h], rbp
 * 00000001401AEAB2: mov     [r11-38h], rdx
 * 00000001401AEAB6: lea     edx, [rbp+23h]
 * 00000001401AEAB9: call    _guard_dispatch_icall
 * 00000001401AEABE: test    dil, dil
 * 00000001401AEAC1: jz      short loc_1401AEB19
 * 00000001401AEAC3: and     [rsp+58h+var_10], 0
 * 00000001401AEAC9: lea     rax, [rsp+58h+arg_48]
 * 00000001401AEAD1: mov     r9, [rsp+58h+arg_38]
 * 00000001401AEAD9: mov     rcx, rsi
 * 00000001401AEADC: mov     r8d, [rsp+58h+arg_28]
 * 00000001401AEAE4: movzx   edx, [rsp+58h+arg_20]
 * 00000001401AEAEC: mov     [rsp+58h+var_18], rbp
 * 00000001401AEAF1: mov     [rsp+58h+var_20], rax
 * 00000001401AEAF6: lea     rax, [rsp+58h+arg_40]
 * 00000001401AEAFE: mov     [rsp+58h+var_28], rbp
 * 00000001401AEB03: mov     [rsp+58h+var_30], rax
 * 00000001401AEB08: mov     [rsp+58h+var_38], bx
 * 00000001401AEB0D: call    cs:__imp_WppAutoLogTrace
 * 00000001401AEB14: nop     dword ptr [rax+rax+00h]
 * 00000001401AEB19: mov     rbx, [rsp+58h+arg_0]
 * 00000001401AEB1E: mov     rbp, [rsp+58h+arg_8]
 * 00000001401AEB23: mov     rsi, [rsp+58h+arg_10]
 * 00000001401AEB28: add     rsp, 50h
 * 00000001401AEB2C: pop     rdi
 * 00000001401AEB2D: retn
 */
