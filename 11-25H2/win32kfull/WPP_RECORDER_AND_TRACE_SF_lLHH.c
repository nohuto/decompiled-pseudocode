/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_lLHH @ 0x14028E594
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_lLHH @ 0x14028E594
 * Reason: Hex-Rays returned no pseudocode for 0x14028E594
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E594: mov     r11, rsp
 * 000000014028E597: mov     [r11+8], rbx
 * 000000014028E59B: mov     [r11+10h], rbp
 * 000000014028E59F: mov     [r11+18h], rsi
 * 000000014028E5A3: mov     [r11+20h], rdi
 * 000000014028E5A7: push    r14
 * 000000014028E5A9: sub     rsp, 70h
 * 000000014028E5AD: movzx   edi, [rsp+78h+arg_30]
 * 000000014028E5B5: mov     ebp, 2
 * 000000014028E5BA: mov     rsi, r9
 * 000000014028E5BD: mov     bl, r8b
 * 000000014028E5C0: lea     r14d, [rbp+2]
 * 000000014028E5C4: test    dl, dl
 * 000000014028E5C6: jz      short loc_14028E616
 * 000000014028E5C8: and     qword ptr [r11-18h], 0
 * 000000014028E5CD: lea     rdx, [r11+60h]
 * 000000014028E5D1: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E5D8: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E5DF: mov     [r11-20h], rbp
 * 000000014028E5E3: mov     r9d, edi
 * 000000014028E5E6: mov     [r11-28h], rdx
 * 000000014028E5EA: lea     rdx, [r11+58h]
 * 000000014028E5EE: mov     [r11-30h], rbp
 * 000000014028E5F2: mov     [r11-38h], rdx
 * 000000014028E5F6: lea     rdx, [r11+50h]
 * 000000014028E5FA: mov     [r11-40h], r14
 * 000000014028E5FE: mov     [r11-48h], rdx
 * 000000014028E602: lea     rdx, [r11+48h]
 * 000000014028E606: mov     [r11-50h], r14
 * 000000014028E60A: mov     [r11-58h], rdx
 * 000000014028E60E: lea     edx, [rbp+29h]
 * 000000014028E611: call    _guard_dispatch_icall
 * 000000014028E616: test    bl, bl
 * 000000014028E618: jz      short loc_14028E68C
 * 000000014028E61A: and     [rsp+78h+var_10], 0
 * 000000014028E620: lea     rax, [rsp+78h+arg_58]
 * 000000014028E628: mov     [rsp+78h+var_18], rbp
 * 000000014028E62D: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E634: mov     [rsp+78h+var_20], rax
 * 000000014028E639: mov     edx, 5
 * 000000014028E63E: mov     [rsp+78h+var_28], rbp
 * 000000014028E643: lea     rax, [rsp+78h+arg_50]
 * 000000014028E64B: mov     [rsp+78h+var_30], rax
 * 000000014028E650: mov     rcx, rsi
 * 000000014028E653: mov     [rsp+78h+var_38], r14
 * 000000014028E658: lea     rax, [rsp+78h+arg_48]
 * 000000014028E660: mov     [rsp+78h+var_40], rax
 * 000000014028E665: lea     r8d, [rdx+5]
 * 000000014028E669: lea     rax, [rsp+78h+arg_40]
 * 000000014028E671: mov     [rsp+78h+var_48], r14
 * 000000014028E676: mov     [rsp+78h+var_50], rax
 * 000000014028E67B: mov     [rsp+78h+var_58], di
 * 000000014028E680: call    cs:__imp_WppAutoLogTrace
 * 000000014028E687: nop     dword ptr [rax+rax+00h]
 * 000000014028E68C: lea     r11, [rsp+78h+var_8]
 * 000000014028E691: mov     rbx, [r11+10h]
 * 000000014028E695: mov     rbp, [r11+18h]
 * 000000014028E699: mov     rsi, [r11+20h]
 * 000000014028E69D: mov     rdi, [r11+28h]
 * 000000014028E6A1: mov     rsp, r11
 * 000000014028E6A4: pop     r14
 * 000000014028E6A6: retn
 */
