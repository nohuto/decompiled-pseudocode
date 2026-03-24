/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LqLL @ 0x14028E480
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LqLL @ 0x14028E480
 * Reason: Hex-Rays returned no pseudocode for 0x14028E480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E480: mov     r11, rsp
 * 000000014028E483: mov     [r11+8], rbx
 * 000000014028E487: mov     [r11+10h], rsi
 * 000000014028E48B: mov     [r11+18h], rdi
 * 000000014028E48F: push    r14
 * 000000014028E491: sub     rsp, 70h
 * 000000014028E495: mov     esi, 4
 * 000000014028E49A: mov     rdi, r9
 * 000000014028E49D: mov     bl, r8b
 * 000000014028E4A0: lea     r14d, [rsi+19h]
 * 000000014028E4A4: test    dl, dl
 * 000000014028E4A6: jz      short loc_14028E4FA
 * 000000014028E4A8: and     qword ptr [r11-18h], 0
 * 000000014028E4AD: lea     rdx, [r11+60h]
 * 000000014028E4B1: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E4B8: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E4BF: mov     [r11-20h], rsi
 * 000000014028E4C3: mov     r9d, r14d
 * 000000014028E4C6: mov     [r11-28h], rdx
 * 000000014028E4CA: lea     rdx, [r11+58h]
 * 000000014028E4CE: mov     [r11-30h], rsi
 * 000000014028E4D2: mov     [r11-38h], rdx
 * 000000014028E4D6: lea     rdx, [r11+50h]
 * 000000014028E4DA: mov     qword ptr [r11-40h], 8
 * 000000014028E4E2: mov     [r11-48h], rdx
 * 000000014028E4E6: lea     rdx, [r11+48h]
 * 000000014028E4EA: mov     [r11-50h], rsi
 * 000000014028E4EE: mov     [r11-58h], rdx
 * 000000014028E4F2: lea     edx, [rsi+27h]
 * 000000014028E4F5: call    _guard_dispatch_icall
 * 000000014028E4FA: test    bl, bl
 * 000000014028E4FC: jz      short loc_14028E574
 * 000000014028E4FE: and     [rsp+78h+var_10], 0
 * 000000014028E504: lea     rax, [rsp+78h+arg_58]
 * 000000014028E50C: mov     [rsp+78h+var_18], rsi
 * 000000014028E511: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E518: mov     [rsp+78h+var_20], rax
 * 000000014028E51D: mov     r8d, 0Ah
 * 000000014028E523: mov     [rsp+78h+var_28], rsi
 * 000000014028E528: lea     rax, [rsp+78h+arg_50]
 * 000000014028E530: mov     [rsp+78h+var_30], rax
 * 000000014028E535: mov     edx, esi
 * 000000014028E537: mov     [rsp+78h+var_38], 8
 * 000000014028E540: lea     rax, [rsp+78h+arg_48]
 * 000000014028E548: mov     [rsp+78h+var_40], rax
 * 000000014028E54D: mov     rcx, rdi
 * 000000014028E550: lea     rax, [rsp+78h+arg_40]
 * 000000014028E558: mov     [rsp+78h+var_48], rsi
 * 000000014028E55D: mov     [rsp+78h+var_50], rax
 * 000000014028E562: mov     [rsp+78h+var_58], r14w
 * 000000014028E568: call    cs:__imp_WppAutoLogTrace
 * 000000014028E56F: nop     dword ptr [rax+rax+00h]
 * 000000014028E574: lea     r11, [rsp+78h+var_8]
 * 000000014028E579: mov     rbx, [r11+10h]
 * 000000014028E57D: mov     rsi, [r11+18h]
 * 000000014028E581: mov     rdi, [r11+20h]
 * 000000014028E585: mov     rsp, r11
 * 000000014028E588: pop     r14
 * 000000014028E58A: retn
 */
