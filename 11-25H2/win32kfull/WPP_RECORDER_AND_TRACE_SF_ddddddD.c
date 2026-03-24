/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402DB09C
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402E3464 (-SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402DB09C
 * Reason: Hex-Rays returned no pseudocode for 0x1402DB09C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402DB09C: mov     r11, rsp
 * 00000001402DB09F: mov     [r11+8], rbx
 * 00000001402DB0A3: mov     [r11+10h], rsi
 * 00000001402DB0A7: mov     [r11+18h], rdi
 * 00000001402DB0AB: mov     [r11+20h], r14
 * 00000001402DB0AF: push    rbp
 * 00000001402DB0B0: lea     rbp, [r11-0Fh]
 * 00000001402DB0B4: sub     rsp, 0A0h
 * 00000001402DB0BB: movzx   edi, [rbp+7+arg_30]
 * 00000001402DB0BF: mov     rsi, r9
 * 00000001402DB0C2: mov     bl, r8b
 * 00000001402DB0C5: mov     r14d, 4
 * 00000001402DB0CB: test    dl, dl
 * 00000001402DB0CD: jz      short loc_1402DB143
 * 00000001402DB0CF: and     qword ptr [r11-18h], 0
 * 00000001402DB0D4: lea     rdx, [rbp+7+arg_70]
 * 00000001402DB0DB: mov     rax, cs:pfnWppTraceMessage
 * 00000001402DB0E2: mov     r9d, edi
 * 00000001402DB0E5: mov     r8, [rbp+7+arg_38]
 * 00000001402DB0E9: mov     [r11-20h], r14
 * 00000001402DB0ED: mov     [r11-28h], rdx
 * 00000001402DB0F1: lea     rdx, [rbp+7+arg_68]
 * 00000001402DB0F5: mov     [r11-30h], r14
 * 00000001402DB0F9: mov     [r11-38h], rdx
 * 00000001402DB0FD: lea     rdx, [rbp+7+arg_60]
 * 00000001402DB101: mov     [r11-40h], r14
 * 00000001402DB105: mov     [r11-48h], rdx
 * 00000001402DB109: lea     rdx, [rbp+7+arg_58]
 * 00000001402DB10D: mov     [r11-50h], r14
 * 00000001402DB111: mov     [r11-58h], rdx
 * 00000001402DB115: lea     rdx, [rbp+7+arg_50]
 * 00000001402DB119: mov     [r11-60h], r14
 * 00000001402DB11D: mov     [r11-68h], rdx
 * 00000001402DB121: lea     rdx, [rbp+7+arg_48]
 * 00000001402DB125: mov     [r11-70h], r14
 * 00000001402DB129: mov     [r11-78h], rdx
 * 00000001402DB12D: lea     rdx, [rbp+7+arg_40]
 * 00000001402DB131: mov     [r11-80h], r14
 * 00000001402DB135: mov     [rsp+0A0h+var_80], rdx
 * 00000001402DB13A: lea     edx, [r14+27h]
 * 00000001402DB13E: call    _guard_dispatch_icall
 * 00000001402DB143: test    bl, bl
 * 00000001402DB145: jz      loc_1402DB1E3
 * 00000001402DB14B: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001402DB154: lea     rax, [rbp+7+arg_70]
 * 00000001402DB15B: mov     r9, [rbp+7+arg_38]
 * 00000001402DB15F: mov     edx, 5
 * 00000001402DB164: mov     r8d, [rbp+7+arg_28]
 * 00000001402DB168: mov     rcx, rsi
 * 00000001402DB16B: mov     [rsp+0A0h+var_10], r14
 * 00000001402DB173: mov     [rsp+0A0h+var_18], rax
 * 00000001402DB17B: lea     rax, [rbp+7+arg_68]
 * 00000001402DB17F: mov     [rsp+0A0h+var_20], r14
 * 00000001402DB187: mov     [rsp+0A0h+var_28], rax
 * 00000001402DB18C: lea     rax, [rbp+7+arg_60]
 * 00000001402DB190: mov     [rsp+0A0h+var_30], r14
 * 00000001402DB195: mov     [rsp+0A0h+var_38], rax
 * 00000001402DB19A: lea     rax, [rbp+7+arg_58]
 * 00000001402DB19E: mov     [rsp+0A0h+var_40], r14
 * 00000001402DB1A3: mov     [rsp+0A0h+var_48], rax
 * 00000001402DB1A8: lea     rax, [rbp+7+arg_50]
 * 00000001402DB1AC: mov     [rsp+0A0h+var_50], r14
 * 00000001402DB1B1: mov     [rsp+0A0h+var_58], rax
 * 00000001402DB1B6: lea     rax, [rbp+7+arg_48]
 * 00000001402DB1BA: mov     [rsp+0A0h+var_60], r14
 * 00000001402DB1BF: mov     [rsp+0A0h+var_68], rax
 * 00000001402DB1C4: lea     rax, [rbp+7+arg_40]
 * 00000001402DB1C8: mov     [rsp+0A0h+var_70], r14
 * 00000001402DB1CD: mov     [rsp+0A0h+var_78], rax
 * 00000001402DB1D2: mov     word ptr [rsp+0A0h+var_80], di
 * 00000001402DB1D7: call    cs:__imp_WppAutoLogTrace
 * 00000001402DB1DE: nop     dword ptr [rax+rax+00h]
 * 00000001402DB1E3: lea     r11, [rsp+0A0h+var_s0]
 * 00000001402DB1EB: mov     rbx, [r11+10h]
 * 00000001402DB1EF: mov     rsi, [r11+18h]
 * 00000001402DB1F3: mov     rdi, [r11+20h]
 * 00000001402DB1F7: mov     r14, [r11+28h]
 * 00000001402DB1FB: mov     rsp, r11
 * 00000001402DB1FE: pop     rbp
 * 00000001402DB1FF: retn
 */
