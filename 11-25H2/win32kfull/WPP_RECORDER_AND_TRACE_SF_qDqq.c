/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x140136554
 * Callers:
 *     ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x140136DE4 (-_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x140136554
 * Reason: Hex-Rays returned no pseudocode for 0x140136554
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140136554: mov     r11, rsp
 * 0000000140136557: mov     [r11+8], rbx
 * 000000014013655B: mov     [r11+10h], rsi
 * 000000014013655F: mov     [r11+18h], rdi
 * 0000000140136563: push    r14
 * 0000000140136565: sub     rsp, 70h
 * 0000000140136569: mov     esi, 8
 * 000000014013656E: mov     rdi, r9
 * 0000000140136571: mov     bl, r8b
 * 0000000140136574: lea     r14d, [rsi+9]
 * 0000000140136578: test    dl, dl
 * 000000014013657A: jz      short loc_1401365CE
 * 000000014013657C: and     qword ptr [r11-18h], 0
 * 0000000140136581: lea     rdx, [r11+60h]
 * 0000000140136585: mov     rax, cs:pfnWppTraceMessage
 * 000000014013658C: lea     r8, WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids
 * 0000000140136593: mov     [r11-20h], rsi
 * 0000000140136597: mov     r9d, r14d
 * 000000014013659A: mov     [r11-28h], rdx
 * 000000014013659E: lea     rdx, [r11+58h]
 * 00000001401365A2: mov     [r11-30h], rsi
 * 00000001401365A6: mov     [r11-38h], rdx
 * 00000001401365AA: lea     rdx, [r11+50h]
 * 00000001401365AE: mov     qword ptr [r11-40h], 4
 * 00000001401365B6: mov     [r11-48h], rdx
 * 00000001401365BA: lea     rdx, [r11+48h]
 * 00000001401365BE: mov     [r11-50h], rsi
 * 00000001401365C2: mov     [r11-58h], rdx
 * 00000001401365C6: lea     edx, [rsi+23h]
 * 00000001401365C9: call    _guard_dispatch_icall
 * 00000001401365CE: test    bl, bl
 * 00000001401365D0: jz      short loc_140136649
 * 00000001401365D2: and     [rsp+78h+var_10], 0
 * 00000001401365D8: lea     rax, [rsp+78h+arg_58]
 * 00000001401365E0: mov     [rsp+78h+var_18], rsi
 * 00000001401365E5: lea     r9, WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids
 * 00000001401365EC: mov     [rsp+78h+var_20], rax
 * 00000001401365F1: mov     edx, 3
 * 00000001401365F6: mov     [rsp+78h+var_28], rsi
 * 00000001401365FB: lea     rax, [rsp+78h+arg_50]
 * 0000000140136603: mov     [rsp+78h+var_30], rax
 * 0000000140136608: mov     rcx, rdi
 * 000000014013660B: mov     [rsp+78h+var_38], 4
 * 0000000140136614: lea     rax, [rsp+78h+arg_48]
 * 000000014013661C: mov     [rsp+78h+var_40], rax
 * 0000000140136621: lea     r8d, [rdx+0Fh]
 * 0000000140136625: lea     rax, [rsp+78h+arg_40]
 * 000000014013662D: mov     [rsp+78h+var_48], rsi
 * 0000000140136632: mov     [rsp+78h+var_50], rax
 * 0000000140136637: mov     [rsp+78h+var_58], r14w
 * 000000014013663D: call    cs:__imp_WppAutoLogTrace
 * 0000000140136644: nop     dword ptr [rax+rax+00h]
 * 0000000140136649: lea     r11, [rsp+78h+var_8]
 * 000000014013664E: mov     rbx, [r11+10h]
 * 0000000140136652: mov     rsi, [r11+18h]
 * 0000000140136656: mov     rdi, [r11+20h]
 * 000000014013665A: mov     rsp, r11
 * 000000014013665D: pop     r14
 * 000000014013665F: retn
 */
