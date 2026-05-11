/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005140
 * Callers:
 *     PropertyGetBoolean @ 0x14003C720 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x14003CC40 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x140005140
 * Reason: Hex-Rays returned no pseudocode for 0x140005140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140005140: mov     [rsp+arg_0], rbx
 * 0000000140005145: mov     [rsp+arg_8], rbp
 * 000000014000514A: mov     [rsp+arg_10], rsi
 * 000000014000514F: push    rdi
 * 0000000140005150: sub     rsp, 50h
 * 0000000140005154: mov     rbx, [rsp+58h+arg_40]
 * 000000014000515C: mov     rbp, r9
 * 000000014000515F: movzx   edi, [rsp+58h+arg_30]
 * 0000000140005167: mov     sil, r8b
 * 000000014000516A: test    dl, dl
 * 000000014000516C: jnz     short loc_1400051D7
 * 000000014000516E: test    sil, sil
 * 0000000140005171: jz      short loc_1400051C1
 * 0000000140005173: mov     [rsp+58h+var_10], 0
 * 000000014000517C: lea     rax, [rsp+58h+arg_48]
 * 0000000140005184: mov     [rsp+58h+var_18], 4
 * 000000014000518D: lea     r9, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 0000000140005194: mov     [rsp+58h+var_20], rax
 * 0000000140005199: xor     edx, edx
 * 000000014000519B: mov     [rsp+58h+var_28], 10h
 * 00000001400051A4: mov     rcx, rbp
 * 00000001400051A7: mov     [rsp+58h+var_30], rbx
 * 00000001400051AC: mov     word ptr [rsp+58h+var_38], di
 * 00000001400051B1: lea     r8d, [rdx+0Ah]
 * 00000001400051B5: call    cs:__imp_WppAutoLogTrace
 * 00000001400051BC: nop     dword ptr [rax+rax+00h]
 * 00000001400051C1: mov     rbx, [rsp+58h+arg_0]
 * 00000001400051C6: mov     rbp, [rsp+58h+arg_8]
 * 00000001400051CB: mov     rsi, [rsp+58h+arg_10]
 * 00000001400051D0: add     rsp, 50h
 * 00000001400051D4: pop     rdi
 * 00000001400051D5: retn
 * 00000001400051D7: mov     rax, cs:pfnWppTraceMessage
 * 00000001400051DE: lea     rdx, [rsp+58h+arg_48]
 * 00000001400051E6: mov     [rsp+58h+var_18], 0
 * 00000001400051EF: lea     r8, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 00000001400051F6: mov     [rsp+58h+var_20], 4
 * 00000001400051FF: mov     r9d, edi
 * 0000000140005202: mov     [rsp+58h+var_28], rdx
 * 0000000140005207: mov     edx, 2Bh ; '+'
 * 000000014000520C: mov     [rsp+58h+var_30], 10h
 * 0000000140005215: mov     [rsp+58h+var_38], rbx
 * 000000014000521A: call    _guard_dispatch_icall
 * 000000014000521F: jmp     loc_14000516E
 */
