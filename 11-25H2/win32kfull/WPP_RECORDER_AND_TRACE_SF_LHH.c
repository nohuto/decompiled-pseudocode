/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHH @ 0x14028E204
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHH @ 0x14028E204
 * Reason: Hex-Rays returned no pseudocode for 0x14028E204
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E204: mov     r11, rsp
 * 000000014028E207: mov     [r11+8], rbx
 * 000000014028E20B: mov     [r11+10h], rbp
 * 000000014028E20F: mov     [r11+18h], rsi
 * 000000014028E213: push    rdi
 * 000000014028E214: sub     rsp, 60h
 * 000000014028E218: movzx   edi, [rsp+68h+arg_30]
 * 000000014028E220: mov     rsi, r9
 * 000000014028E223: mov     bl, r8b
 * 000000014028E226: mov     ebp, 2
 * 000000014028E22B: test    dl, dl
 * 000000014028E22D: jz      short loc_14028E275
 * 000000014028E22F: and     qword ptr [r11-18h], 0
 * 000000014028E234: lea     rdx, [r11+58h]
 * 000000014028E238: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E23F: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E246: mov     [r11-20h], rbp
 * 000000014028E24A: mov     r9d, edi
 * 000000014028E24D: mov     [r11-28h], rdx
 * 000000014028E251: lea     rdx, [r11+50h]
 * 000000014028E255: mov     [r11-30h], rbp
 * 000000014028E259: mov     [r11-38h], rdx
 * 000000014028E25D: lea     rdx, [r11+48h]
 * 000000014028E261: mov     qword ptr [r11-40h], 4
 * 000000014028E269: mov     [r11-48h], rdx
 * 000000014028E26D: lea     edx, [rbp+29h]
 * 000000014028E270: call    _guard_dispatch_icall
 * 000000014028E275: test    bl, bl
 * 000000014028E277: jz      short loc_14028E2DD
 * 000000014028E279: and     [rsp+68h+var_10], 0
 * 000000014028E27F: lea     rax, [rsp+68h+arg_50]
 * 000000014028E287: mov     [rsp+68h+var_18], rbp
 * 000000014028E28C: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E293: mov     [rsp+68h+var_20], rax
 * 000000014028E298: mov     edx, 5
 * 000000014028E29D: mov     [rsp+68h+var_28], rbp
 * 000000014028E2A2: lea     rax, [rsp+68h+arg_48]
 * 000000014028E2AA: mov     [rsp+68h+var_30], rax
 * 000000014028E2AF: mov     rcx, rsi
 * 000000014028E2B2: lea     rax, [rsp+68h+arg_40]
 * 000000014028E2BA: mov     [rsp+68h+var_38], 4
 * 000000014028E2C3: mov     [rsp+68h+var_40], rax
 * 000000014028E2C8: lea     r8d, [rdx+5]
 * 000000014028E2CC: mov     [rsp+68h+var_48], di
 * 000000014028E2D1: call    cs:__imp_WppAutoLogTrace
 * 000000014028E2D8: nop     dword ptr [rax+rax+00h]
 * 000000014028E2DD: lea     r11, [rsp+68h+var_8]
 * 000000014028E2E2: mov     rbx, [r11+10h]
 * 000000014028E2E6: mov     rbp, [r11+18h]
 * 000000014028E2EA: mov     rsi, [r11+20h]
 * 000000014028E2EE: mov     rsp, r11
 * 000000014028E2F1: pop     rdi
 * 000000014028E2F2: retn
 */
