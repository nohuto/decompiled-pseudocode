/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HL @ 0x14028E088
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HL @ 0x14028E088
 * Reason: Hex-Rays returned no pseudocode for 0x14028E088
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E088: mov     r11, rsp
 * 000000014028E08B: mov     [r11+8], rbx
 * 000000014028E08F: mov     [r11+10h], rdi
 * 000000014028E093: push    r14
 * 000000014028E095: sub     rsp, 50h
 * 000000014028E099: mov     rdi, r9
 * 000000014028E09C: mov     bl, r8b
 * 000000014028E09F: mov     r14d, 19h
 * 000000014028E0A5: test    dl, dl
 * 000000014028E0A7: jz      short loc_14028E0E8
 * 000000014028E0A9: and     qword ptr [r11-18h], 0
 * 000000014028E0AE: lea     rdx, [r11+50h]
 * 000000014028E0B2: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E0B9: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E0C0: mov     qword ptr [r11-20h], 4
 * 000000014028E0C8: mov     r9d, r14d
 * 000000014028E0CB: mov     [r11-28h], rdx
 * 000000014028E0CF: lea     rdx, [r11+48h]
 * 000000014028E0D3: mov     qword ptr [r11-30h], 2
 * 000000014028E0DB: mov     [r11-38h], rdx
 * 000000014028E0DF: lea     edx, [r14+12h]
 * 000000014028E0E3: call    _guard_dispatch_icall
 * 000000014028E0E8: test    bl, bl
 * 000000014028E0EA: jz      short loc_14028E143
 * 000000014028E0EC: and     [rsp+58h+var_10], 0
 * 000000014028E0F2: lea     rax, [rsp+58h+arg_48]
 * 000000014028E0FA: mov     [rsp+58h+var_18], 4
 * 000000014028E103: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E10A: mov     [rsp+58h+var_20], rax
 * 000000014028E10F: mov     edx, 4
 * 000000014028E114: lea     rax, [rsp+58h+arg_40]
 * 000000014028E11C: mov     [rsp+58h+var_28], 2
 * 000000014028E125: mov     [rsp+58h+var_30], rax
 * 000000014028E12A: mov     rcx, rdi
 * 000000014028E12D: mov     [rsp+58h+var_38], r14w
 * 000000014028E133: lea     r8d, [rdx+6]
 * 000000014028E137: call    cs:__imp_WppAutoLogTrace
 * 000000014028E13E: nop     dword ptr [rax+rax+00h]
 * 000000014028E143: mov     rbx, [rsp+58h+arg_0]
 * 000000014028E148: mov     rdi, [rsp+58h+arg_8]
 * 000000014028E14D: add     rsp, 50h
 * 000000014028E151: pop     r14
 * 000000014028E153: retn
 */
