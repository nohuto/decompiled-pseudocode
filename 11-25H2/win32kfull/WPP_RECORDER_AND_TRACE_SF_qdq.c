/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1402C922C
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1402C922C
 * Reason: Hex-Rays returned no pseudocode for 0x1402C922C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C922C: mov     r11, rsp
 * 00000001402C922F: mov     [r11+8], rbx
 * 00000001402C9233: mov     [r11+10h], rsi
 * 00000001402C9237: mov     [r11+18h], rdi
 * 00000001402C923B: push    r14
 * 00000001402C923D: sub     rsp, 60h
 * 00000001402C9241: mov     esi, 8
 * 00000001402C9246: mov     rdi, r9
 * 00000001402C9249: mov     bl, r8b
 * 00000001402C924C: lea     r14d, [rsi+0Bh]
 * 00000001402C9250: test    dl, dl
 * 00000001402C9252: jz      short loc_1402C929A
 * 00000001402C9254: and     qword ptr [r11-18h], 0
 * 00000001402C9259: lea     rdx, [r11+58h]
 * 00000001402C925D: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C9264: lea     r8, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C926B: mov     [r11-20h], rsi
 * 00000001402C926F: mov     r9d, r14d
 * 00000001402C9272: mov     [r11-28h], rdx
 * 00000001402C9276: lea     rdx, [r11+50h]
 * 00000001402C927A: mov     qword ptr [r11-30h], 4
 * 00000001402C9282: mov     [r11-38h], rdx
 * 00000001402C9286: lea     rdx, [r11+48h]
 * 00000001402C928A: mov     [r11-40h], rsi
 * 00000001402C928E: mov     [r11-48h], rdx
 * 00000001402C9292: lea     edx, [rsi+23h]
 * 00000001402C9295: call    _guard_dispatch_icall
 * 00000001402C929A: test    bl, bl
 * 00000001402C929C: jz      short loc_1402C9303
 * 00000001402C929E: and     [rsp+68h+var_10], 0
 * 00000001402C92A4: lea     rax, [rsp+68h+arg_50]
 * 00000001402C92AC: mov     [rsp+68h+var_18], rsi
 * 00000001402C92B1: lea     r9, WPP_5203336677413a97442e065d09735669_Traceguids
 * 00000001402C92B8: mov     [rsp+68h+var_20], rax
 * 00000001402C92BD: mov     edx, 5
 * 00000001402C92C2: mov     [rsp+68h+var_28], 4
 * 00000001402C92CB: lea     rax, [rsp+68h+arg_48]
 * 00000001402C92D3: mov     [rsp+68h+var_30], rax
 * 00000001402C92D8: mov     rcx, rdi
 * 00000001402C92DB: lea     rax, [rsp+68h+arg_40]
 * 00000001402C92E3: mov     [rsp+68h+var_38], rsi
 * 00000001402C92E8: mov     [rsp+68h+var_40], rax
 * 00000001402C92ED: lea     r8d, [rdx+2]
 * 00000001402C92F1: mov     [rsp+68h+var_48], r14w
 * 00000001402C92F7: call    cs:__imp_WppAutoLogTrace
 * 00000001402C92FE: nop     dword ptr [rax+rax+00h]
 * 00000001402C9303: lea     r11, [rsp+68h+var_8]
 * 00000001402C9308: mov     rbx, [r11+10h]
 * 00000001402C930C: mov     rsi, [r11+18h]
 * 00000001402C9310: mov     rdi, [r11+20h]
 * 00000001402C9314: mov     rsp, r11
 * 00000001402C9317: pop     r14
 * 00000001402C9319: retn
 */
