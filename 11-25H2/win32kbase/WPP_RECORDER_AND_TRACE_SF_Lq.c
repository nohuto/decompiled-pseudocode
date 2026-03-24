/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020E140
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020E140
 * Reason: Hex-Rays returned no pseudocode for 0x14020E140
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014020E140: mov     r11, rsp
 * 000000014020E143: mov     [r11+8], rbx
 * 000000014020E147: mov     [r11+10h], rsi
 * 000000014020E14B: push    rdi
 * 000000014020E14C: sub     rsp, 50h
 * 000000014020E150: movzx   ebx, [rsp+58h+arg_30]
 * 000000014020E158: mov     rsi, r9
 * 000000014020E15B: mov     dil, r8b
 * 000000014020E15E: test    dl, dl
 * 000000014020E160: jz      short loc_14020E1A2
 * 000000014020E162: and     qword ptr [r11-18h], 0
 * 000000014020E167: lea     rdx, [r11+50h]
 * 000000014020E16B: mov     rax, cs:pfnWppTraceMessage
 * 000000014020E172: lea     r8, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 000000014020E179: mov     qword ptr [r11-20h], 8
 * 000000014020E181: mov     r9d, ebx
 * 000000014020E184: mov     [r11-28h], rdx
 * 000000014020E188: lea     rdx, [r11+48h]
 * 000000014020E18C: mov     qword ptr [r11-30h], 4
 * 000000014020E194: mov     [r11-38h], rdx
 * 000000014020E198: mov     edx, 2Bh ; '+'
 * 000000014020E19D: call    _guard_dispatch_icall
 * 000000014020E1A2: test    dil, dil
 * 000000014020E1A5: jz      short loc_14020E1FD
 * 000000014020E1A7: and     [rsp+58h+var_10], 0
 * 000000014020E1AD: lea     rax, [rsp+58h+arg_48]
 * 000000014020E1B5: mov     [rsp+58h+var_18], 8
 * 000000014020E1BE: lea     r9, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 000000014020E1C5: mov     [rsp+58h+var_20], rax
 * 000000014020E1CA: mov     edx, 2
 * 000000014020E1CF: lea     rax, [rsp+58h+arg_40]
 * 000000014020E1D7: mov     [rsp+58h+var_28], 4
 * 000000014020E1E0: mov     [rsp+58h+var_30], rax
 * 000000014020E1E5: mov     rcx, rsi
 * 000000014020E1E8: mov     [rsp+58h+var_38], bx
 * 000000014020E1ED: lea     r8d, [rdx+2]
 * 000000014020E1F1: call    cs:__imp_WppAutoLogTrace
 * 000000014020E1F8: nop     dword ptr [rax+rax+00h]
 * 000000014020E1FD: mov     rbx, [rsp+58h+arg_0]
 * 000000014020E202: mov     rsi, [rsp+58h+arg_8]
 * 000000014020E207: add     rsp, 50h
 * 000000014020E20B: pop     rdi
 * 000000014020E20C: retn
 */
