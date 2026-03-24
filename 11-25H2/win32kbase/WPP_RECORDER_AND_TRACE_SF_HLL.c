/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HLL @ 0x1400FF42C
 * Callers:
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HLL @ 0x1400FF42C
 * Reason: Hex-Rays returned no pseudocode for 0x1400FF42C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400FF42C: mov     [rsp+arg_0], rbx
 * 00000001400FF431: mov     [rsp+arg_8], rsi
 * 00000001400FF436: mov     [rsp+arg_10], rdi
 * 00000001400FF43B: push    r14
 * 00000001400FF43D: sub     rsp, 60h
 * 00000001400FF441: mov     esi, 4
 * 00000001400FF446: mov     rdi, r9
 * 00000001400FF449: mov     bl, r8b
 * 00000001400FF44C: lea     r14d, [rsi+38h]
 * 00000001400FF450: test    dl, dl
 * 00000001400FF452: jnz     short loc_1400FF4D1
 * 00000001400FF454: test    bl, bl
 * 00000001400FF456: jz      short loc_1400FF4B9
 * 00000001400FF458: and     [rsp+68h+var_10], 0
 * 00000001400FF45E: lea     rax, [rsp+68h+arg_50]
 * 00000001400FF466: mov     [rsp+68h+var_18], rsi
 * 00000001400FF46B: lea     r9, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 00000001400FF472: mov     [rsp+68h+var_20], rax
 * 00000001400FF477: mov     r8d, esi
 * 00000001400FF47A: mov     [rsp+68h+var_28], rsi
 * 00000001400FF47F: lea     rax, [rsp+68h+arg_48]
 * 00000001400FF487: mov     [rsp+68h+var_30], rax
 * 00000001400FF48C: mov     edx, esi
 * 00000001400FF48E: lea     rax, [rsp+68h+arg_40]
 * 00000001400FF496: mov     [rsp+68h+var_38], 2
 * 00000001400FF49F: mov     [rsp+68h+var_40], rax
 * 00000001400FF4A4: mov     rcx, rdi
 * 00000001400FF4A7: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001400FF4AD: call    cs:__imp_WppAutoLogTrace
 * 00000001400FF4B4: nop     dword ptr [rax+rax+00h]
 * 00000001400FF4B9: lea     r11, [rsp+68h+var_8]
 * 00000001400FF4BE: mov     rbx, [r11+10h]
 * 00000001400FF4C2: mov     rsi, [r11+18h]
 * 00000001400FF4C6: mov     rdi, [r11+20h]
 * 00000001400FF4CA: mov     rsp, r11
 * 00000001400FF4CD: pop     r14
 * 00000001400FF4CF: retn
 * 00000001400FF4D1: and     [rsp+68h+var_18], 0
 * 00000001400FF4D7: lea     rdx, [rsp+68h+arg_50]
 * 00000001400FF4DF: mov     rax, cs:pfnWppTraceMessage
 * 00000001400FF4E6: lea     r8, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 00000001400FF4ED: mov     [rsp+68h+var_20], rsi
 * 00000001400FF4F2: mov     r9d, r14d
 * 00000001400FF4F5: mov     [rsp+68h+var_28], rdx
 * 00000001400FF4FA: lea     rdx, [rsp+68h+arg_48]
 * 00000001400FF502: mov     [rsp+68h+var_30], rsi
 * 00000001400FF507: mov     [rsp+68h+var_38], rdx
 * 00000001400FF50C: lea     rdx, [rsp+68h+arg_40]
 * 00000001400FF514: mov     [rsp+68h+var_40], 2
 * 00000001400FF51D: mov     [rsp+68h+var_48], rdx
 * 00000001400FF522: mov     edx, 2Bh ; '+'
 * 00000001400FF527: call    _guard_dispatch_icall
 * 00000001400FF52C: jmp     loc_1400FF454
 */
